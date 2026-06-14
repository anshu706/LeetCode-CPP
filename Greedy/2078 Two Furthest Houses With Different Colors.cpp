class Solution
{
public:
    int maxDistance(vector<int> &colors)
    {
        int n = colors.size();
        int maxDist = 0;

        for (int j = n - 1; j > 0; j--)
        {
            if (colors[0] != colors[j])
            {
                maxDist = max(maxDist, j);
                break;
            }
        }

        for (int j = 0; j < n - 1; j++)
        {
            if (colors[n - 1] != colors[j])
            {
                maxDist = max(maxDist, n - 1 - j);
                break;
            }
        }

        return maxDist;
    }
};
