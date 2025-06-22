bool compare_arrays(int* a, int* b);

bool checkInclusion(char* t, char* s)
{
        int t_freq[26];
        int w_freq[26];

        for (int i = 0; i < 26; i++)
        {
                t_freq[i] = 0;
                w_freq[i] = 0;
        }

        char* t_it = t;
        int t_size = 0;
        while (*t_it != '\0')
        {
                t_freq[*t_it - 'a']++;
                t_it++;
        }
        t_size = t_it - t;
        char* s_it = s;
        int s_size = 0;
        while (*s_it != '\0')
        {
                s_it++;
        }
        s_size = s_it - s;
        if (s_size < t_size) return false;

        for (int i = 0; i < t_size; i++)
        {
                w_freq[s[i] - 'a']++;
        }

        char* wl = s;
        char* wr = s + t_size;

        while (*wr != '\0')
        {
                if (compare_arrays(t_freq, w_freq)) return true;
                w_freq[*wr - 'a']++;
                w_freq[*wl - 'a']--;
                wr++;
                wl++;
        }

        return compare_arrays(t_freq, w_freq);
}

bool compare_arrays(int* a, int* b)
{
        for (int i = 0; i < 26; i++)
        {
                if (a[i] != b[i]) return false;
        }
        return true;
}
