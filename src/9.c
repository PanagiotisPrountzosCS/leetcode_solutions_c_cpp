bool isPalindrome(int x)
{
        if (x < 0) return false;
        int digits[10];
        int index = 0;
        int left = 0, right;

        while (x > 0)
        {
                digits[index] = x % 10;
                index++;
                x = x / 10;
        }
        right = index - 1;

        while (left < right)
        {
                if (digits[left] != digits[right]) return false;
                left++;
                right--;
        }

        return true;
}
