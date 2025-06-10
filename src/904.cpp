int totalFruit(int* fruits, int fruitsSize)
{
        int l = 0;
        int max_len = 0;
        int fruit_freq[fruitsSize];
        int fruit_types = 0;

        for (int i = 0; i < fruitsSize; i++)
        {
                fruit_freq[i] = 0;
        }

        for (int r = 0; r < fruitsSize; r++)
        {
                int type = fruits[r];
                if (!fruit_freq[type]) fruit_types++;
                fruit_freq[type]++;
                if (fruit_types < 3)
                {
                        if (r - l + 1 > max_len) max_len = r - l + 1;
                }
                else
                {
                        type = fruits[l];
                        fruit_freq[type]--;
                        if (!fruit_freq[type]) fruit_types--;
                        l++;
                }
        }

        return max_len;
}
