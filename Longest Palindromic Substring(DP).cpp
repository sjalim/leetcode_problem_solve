class Solution
{
public:
    string longestPalindrome(string s)
    {

        string ans = "", temp = "";
        int k1, k2;
        
        for (int i = 0; i < s.size(); i++)
        {

            temp = "";
            bool check = false;
            for (k1 = i, k2 = i + 1; k2 < s.size() && k1 >= 0; k2++, k1--)
            {
                if (s[k1] != s[k2])
                {

                    check = true;
                    break;
                }
            }

            if (k1 < 0)
            {
                k1++;
                k2--;
            }

            if (k2 >= s.size())
            {
                k2--;
                k1++;
            }

            if (!check)
            {
                for (int j = k1; j <= k2; j++)
                {
                    temp += s[j];
                }
            }
            else
            {

                for (int j = k1 + 1; j < k2; j++)
                {
                    temp += s[j];
                }
            }

            if (ans.size() < temp.size())
            {
                ans = temp;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {

            temp = "";
            bool check = false;
            for (k1 = i - 1, k2 = i + 1; k2 < s.size() && k1 >= 0; k2++, k1--)
            {
                if (s[k1] != s[k2])
                {

                    check = true;
                    break;
                }
            }

            if (k1 < 0)
            {
                k1++;
                k2--;
            }

            if (k2 >= s.size())
            {
                k2--;
                k1++;
            }

            if (!check)
            {
                for (int j = k1; j <= k2; j++)
                {
                    temp += s[j];
                }
            }
            else
            {

                for (int j = k1 + 1; j < k2; j++)
                {
                    temp += s[j];
                }
            }

            if (ans.size() < temp.size())
            {
                ans = temp;
            }
        }

        if (ans.size() == 0)
        {
            ans = s[0];
        }

        return ans;
    }
};