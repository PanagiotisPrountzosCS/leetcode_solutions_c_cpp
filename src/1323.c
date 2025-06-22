int maximum69Number(int num)
{
        int result = num;
        int current_decimal_index = 1;
        int leftmost_six_multiplier = 0;
        while (num)
        {
                if (num % 10 == 6)
                        leftmost_six_multiplier = current_decimal_index;
                current_decimal_index *= 10;
                num /= 10;
        }
        return result + leftmost_six_multiplier * 3;
}
