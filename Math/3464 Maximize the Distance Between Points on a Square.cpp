class Solution
{
public:
    int maxDistance(int side, vector<vector<int>> &points, int k)
    {
        // Linearize points onto perimeter [0, 4*side)
        int n = points.size();
        vector<long long> pos(n);

        for (int i = 0; i < n; i++)
        {
            pos[i] = perimeterPos(points[i][0], points[i][1], side);
        }

        sort(pos.begin(), pos.end());

        long long lo = 1, hi = 2LL * side, ans = 0;
        while (lo <= hi)
        {
            long long mid = (lo + hi) / 2;
            if (canPlace(pos, k, mid, side))
            {
                ans = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        return (int)ans;
    }

private:
    // Convert (x, y) on square boundary to perimeter position
    long long perimeterPos(int x, int y, int side)
    {
        if (y == 0)
            return x; // bottom: left→right
        if (x == side)
            return side + y; // right: bottom→top
        if (y == side)
            return 3LL * side - x; // top: right→left
        return 4LL * side - y;     // left: top→bottom
    }

    // Check if we can place k points each at least minDist apart
    bool canPlace(vector<long long> &pos, int k, long long minDist, int side)
    {
        long long perimeter = 4LL * side;
        int n = pos.size();

        // Try each point as the starting point
        for (int start = 0; start < n; start++)
        {
            int count = 1;
            long long cur = pos[start];
            long long startPos = pos[start];
            int idx = start;

            for (int step = 1; step < k; step++)
            {
                long long target = cur + minDist;

                // Binary search for first pos >= target
                int next = lowerBound(pos, target, idx + 1, n);

                if (next == n)
                {
                    // Wrap around to beginning
                    long long wrappedTarget = target - perimeter;
                    next = lowerBound(pos, wrappedTarget, 0, start);

                    if (next >= start)
                        break; // No valid point found

                    // Adjust position for wrapped-around point
                    cur = pos[next] + perimeter;
                }
                else
                {
                    cur = pos[next];
                }

                idx = next % n;
                count++;
            }

            if (count == k)
            {
                // Verify last point to first point distance (circular)
                long long lastPos = cur;
                long long firstPos = pos[start] + perimeter;
                long long gap = firstPos - lastPos;

                if (gap >= minDist)
                {
                    return true;
                }
            }
        }

        return false;
    }

    // Binary search for first element >= target in range [lo, hi)
    int lowerBound(vector<long long> &arr, long long target, int lo, int hi)
    {
        while (lo < hi)
        {
            int mid = (lo + hi) / 2;
            if (arr[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid;
            }
        }
        return lo;
    }
};