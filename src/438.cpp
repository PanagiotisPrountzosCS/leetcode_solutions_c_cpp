class Solution
{
    public:
        vector<int> findAnagrams(string s, string p)
        {
                if (s.size() < p.size()) return {};

                vector<int> result;
                array<int, 26> s_freq = {0}, p_freq = {0};
                int window_size = p.size();

                for (char c : p) p_freq[c - 'a']++;

                for (int i = 0; i < window_size; ++i) s_freq[s[i] - 'a']++;

                for (int l = 0, r = window_size; r <= s.size(); ++l, ++r)
                {
                        if (s_freq == p_freq) result.push_back(l);

                        if (r < s.size())
                        {
                                s_freq[s[r] - 'a']++;
                                s_freq[s[l] - 'a']--;
                        }
                }

                return result;
        }
};
