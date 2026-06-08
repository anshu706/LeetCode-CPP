class Solution
{
public:
    string getHappyString(int n, int k)
    {
        // Each position has 2 choices (except first which has 3)
        // Total = 3 * 2^(n-1)
        int total = 3 * (1 << (n - 1));
        if (k > total)
            return "";

        string result = "";
        k--; // 0-indexed

        // First character: 3 choices, each subtree has 2^(n-1) strings
        int subtree = 1 << (n - 1);
        result += (char)('a' + k / subtree);
        k %= subtree;

        // Subsequent characters: 2 choices each
        for (int i = 1; i < n; i++)
        {
            subtree >>= 1;
            char prev = result.back();
            // Available chars excluding prev, in sorted order
            string choices = "";
            for (char c : {'a', 'b', 'c'})
            {
                if (c != prev)
                    choices += c;
            }
            result += choices[k / (subtree == 0 ? 1 : subtree)];
            k %= (subtree == 0 ? 1 : subtree);
        }

        return result;
    }
};