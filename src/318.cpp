class Solution
{
    public:
        int maxProduct(vector<string>& words)
        {
                vector<int> bit_mask;
                vector<int> lengths;

                int max_p = 0;

                for (int i = 0; i < words.size(); i++)
                {
                        lengths.push_back(words[i].size());
                        bit_mask.push_back(0);
                        for (const auto c : words[i])
                        {
                                bit_mask[i] |= (1 << (c - 'a'));
                        }
                }

                for (int i = 0; i < words.size(); i++)
                {
                        for (int j = i; j < words.size(); j++)
                        {
                                if (!(bit_mask[i] & bit_mask[j]))
                                {
                                        if (lengths[i] * lengths[j] > max_p)
                                                max_p = lengths[i] * lengths[j];
                                }
                        }
                }

                return max_p;
        }
};
