class Solution
{
public:
    int reverse(int x)
    {
        bool sign = true;
        if (x < 0)
        {
            if (x < -2147483647)
            {
                return 0;
            }
            x = x * -1;
            sign = false;
        }

        cout << x << endl;

        string x1 = "";
        while (x)
        {
            x1 += (x % 10) + '0';
            x = x / 10;
        }
        string x2;
        int cnt1 = 0;

        // cout << x1 << endl;
        int k = -1;
        for (int i = 0; i < x1.length(); i++)
        {
            if (x1[i] != '0')
            {
                k = i;
                break;
            }
        }
        if (k >= 0)
        {
            for (int i = k; i < x1.length(); i++)
            {
                x2 += x1[i];
            }
        }

        // cout << x2 << endl;
        long long ans = 0;
        int res;
        bool c = false;
        for (int i = 0; i < x2.length(); i++)
        {
            ans = ans * 10 + (x2[i] - '0');
            // cout << ans << endl;
            if (ans > 2147483647)
            {
                cout << "alim" << endl;
                c = true;
                break;
            }
        }
        // cout << ans << endl;

        if (c)
        {
            return 0;
        }

        if (!sign)
        {
            ans = -1 * ans;
        }

        return ans;
    }
};