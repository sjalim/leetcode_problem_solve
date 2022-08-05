class Solution
{
public:
    int myAtoi(string s)
    {

        int pos_max = 2147483647;
        long long neg_max = 2147483648;
        string str = "";
        long long ans = 0;
        bool neg = false;
        bool pos = false;
        int k = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                k = i;
                break;
            }
        }
        if (k != -1)
        {
            for (int i = k; i < s.size(); i++)
            {
                str += s[i];
            }
        }

        s = str;
        str = "";
        // cout << s << endl;
        int idx = 0;

        if (!s.empty())
        {
            if (s[0] == '-')
            {
                neg = true;
                idx++;
            }
            if (s[0] == '+')
            {
                pos = true;
                idx++;
            }
        }

        for (int i = idx; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                str += s[i];
            }
            else
            {
                break;
            }
        }

        s = str;
        // cout << s << endl;

        if (neg)
        {
            for (int i = 0; i < int(s.size()); i++)
            {
                ans = ans * 10 + (s[i] - '0');
                if (ans > neg_max)
                {
                    ans = neg_max;
                    break;
                }
            }
            ans = -1 * ans;
        }
        else
        {
            for (int i = 0; i < int(s.size()); i++)
            {
                ans = ans * 10 + (s[i] - '0');
                if (ans > pos_max)
                {
                    ans = pos_max;
                    break;
                }
            }
        }

        // cout << s << endl;
        return ans;
    }
};