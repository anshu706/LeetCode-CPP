class Fancy
{
    static const long long MOD = 1e9 + 7;
    vector<long long> seq;
    long long m = 1, a = 0; // current global: value = stored * m + a

    long long power(long long base, long long exp, long long mod)
    {
        long long result = 1;
        base %= mod;
        while (exp > 0)
        {
            if (exp & 1)
                result = result * base % mod;
            base = base * base % mod;
            exp >>= 1;
        }
        return result;
    }

    long long modInverse(long long x)
    {
        return power(x, MOD - 2, MOD); // Fermat's little theorem
    }

public:
    Fancy() {}

    void append(int val)
    {
        // Store normalized: we want stored * m + a = val
        // => stored = (val - a) * m^(-1)
        long long stored = (val - a % MOD + MOD) % MOD * modInverse(m) % MOD;
        seq.push_back(stored);
    }

    void addAll(int inc)
    {
        a = (a + inc) % MOD;
    }

    void multAll(int mult)
    {
        m = m * mult % MOD;
        a = a * mult % MOD;
    }

    int getIndex(int idx)
    {
        if (idx >= (int)seq.size())
            return -1;
        return (seq[idx] * m % MOD + a) % MOD;
    }
}; 
