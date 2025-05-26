class Solution
{
    public:
        uint32_t reverseBits(uint32_t n)
        {
                uint32_t res = 0;
                uint32_t bit = 0b10000000000000000000000000000000;
                uint32_t pBit = 1;
                for (int i = 0; i < 32; i++)
                {
                        if (n & pBit) res |= bit;
                        bit /= 2;
                        pBit *= 2;
                }
                return res;
        }
};
