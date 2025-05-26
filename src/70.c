int ways[43] = {0};

int climbStairs(int n)
{
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (ways[n - 3] == 0)
                ways[n - 3] = climbStairs(n - 1) + climbStairs(n - 2);
        return ways[n - 3];
}
