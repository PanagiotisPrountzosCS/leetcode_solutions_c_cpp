class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
                if (!s.size()) return 0;
                int l = 0;
                int r = 0;
                int max_len = 0;
                unordered_map<char, int> seen_chars;

                while (r < s.size() - 1)
                {
                        if (seen_chars[s[r]])
                        {
                                seen_chars[s[l]]--;
                                l++;
                        }
                        else
                        {
                                seen_chars[s[r]]++;
                                r++;
                                if (r - l > max_len) max_len = r - l;
                        }
                }

                if (!seen_chars[s[r]] && r - l + 1 > max_len)
                        max_len = r - l + 1;

                return max_len;
        }
};
