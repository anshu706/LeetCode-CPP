class Solution
{
public:
    int maxStability(int n, vector<vector<int>> &edges, int k)
    {
        vector<int> parent(n), rank_(n, 0);
        iota(parent.begin(), parent.end(), 0);

        function<int(int)> find = [&](int x)
        {
            return parent[x] == x ? x : parent[x] = find(parent[x]);
        };

        auto unite = [&](int a, int b) -> bool
        {
            a = find(a);
            b = find(b);
            if (a == b)
                return false;
            if (rank_[a] < rank_[b])
                swap(a, b);
            parent[b] = a;
            if (rank_[a] == rank_[b])
                rank_[a]++;
            return true;
        };

        auto check = [&](int mid) -> bool
        {
            fill(parent.begin(), parent.end(), 0);
            iota(parent.begin(), parent.end(), 0);
            fill(rank_.begin(), rank_.end(), 0);

            int edgesUsed = 0, upgradesUsed = 0;

            // First pass: must-include edges
            for (auto &e : edges)
            {
                int u = e[0], v = e[1], s = e[2], must = e[3];
                if (must == 1)
                {
                    if (s < mid)
                        return false; // must edge below threshold
                    if (!unite(u, v))
                        return false; // cycle with must edges
                    edgesUsed++;
                }
            }

            // Second pass: optional edges that don't need upgrade
            for (auto &e : edges)
            {
                int u = e[0], v = e[1], s = e[2], must = e[3];
                if (must == 0 && s >= mid)
                {
                    if (unite(u, v))
                        edgesUsed++;
                }
            }

            // Third pass: optional edges that need upgrade
            for (auto &e : edges)
            {
                int u = e[0], v = e[1], s = e[2], must = e[3];
                if (must == 0 && s < mid && 2 * s >= mid)
                {
                    if (upgradesUsed < k && unite(u, v))
                    {
                        edgesUsed++;
                        upgradesUsed++;
                    }
                }
            }

            return edgesUsed == n - 1;
        };

        // Collect all candidate values
        set<int> candidates;
        for (auto &e : edges)
        {
            candidates.insert(e[2]);
            candidates.insert(e[2] * 2);
        }

        vector<int> vals(candidates.begin(), candidates.end());

        // Check if spanning tree is even possible
        if (!check(1))
            return -1;

        int lo = 0, hi = vals.size() - 1, ans = -1;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (check(vals[mid]))
            {
                ans = vals[mid];
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        return ans;
    }
};