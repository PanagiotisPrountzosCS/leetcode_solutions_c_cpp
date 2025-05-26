int reverse(int x)
{
        int digits[10], index = 0;
        bool sign = x & 0x80000000;
        int result = 0;
        if (sign)
        {
                // negative
                while (x)
                {
                        if (result > INT_MIN / 10 + x % 10)
                        {
                                result *= 10;
                                result += x % 10;
                        }
                        else
                                return 0;
                        x /= 10;
                }
        }
        else
        {
                // positive
                while (x)
                {
                        if (result < INT_MAX / 10 + x % 10)
                        {
                                result *= 10;
                                result += x % 10;
                        }
                        else
                                return 0;
                        x /= 10;
                }
        }
        return result;
}
