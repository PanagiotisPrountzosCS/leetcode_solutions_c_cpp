namespace
{

int upperPowerOf2(int x)
{
        int res = 1;
        while (res <= x) res *= 2;
        return res / 2;
}

int calculateBits(int x)
{
        if (x < 2) return x;
        return calculateBits(x - upperPowerOf2(x)) + 1;
}

}  // namespace

class Solution
{
    public:
        vector<int> countBits(int n)
        {
                vector<int> res;
                for (int i = 0; i <= n; i++)
                {
                        res.push_back(calculateBits(i));
                }
                return res;
        }
};
