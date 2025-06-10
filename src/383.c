bool canConstruct(char* ransomNote, char* magazine)
{
        int alphabet[26];

        for (int i = 0; i < 26; i++)
        {
                alphabet[i] = 0;
        }

        char* c = ransomNote;

        while (*c != '\0')
        {
                alphabet[*c - 97]--;
                c++;
        }

        c = magazine;

        while (*c != '\0')
        {
                alphabet[*c - 97]++;
                c++;
        }

        for (int i = 0; i < 26; i++)
        {
                if (alphabet[i] < 0) return false;
        }

        return true;
}
