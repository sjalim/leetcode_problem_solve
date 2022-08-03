class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        vector<int> v(200);

        int len = 0;
        int mx = 0;

        int k = 0;
        for (int j = 0, i = 0; j < s.size(); j++)
        {
            int x = s[j];
            // cout << s[j]<< endl;

            v[x]++;

            if (v[x] > 1)
            {
                v[x] = 1;
                int k1 = 0;
                bool chek = false;
                for (int k = i; k < j; k++)
                {
                    k1++;
                    if (s[k] == s[j])
                    {
                        chek = true;
                        break;
                    }
                }
                if (chek)
                {
                    i += k1;
                    len -= k1;
                }
                // cout << i << endl;
            }
            len++;

            mx = max(mx, len);
            // cout << len << endl;
        }
        return mx;
    }
};