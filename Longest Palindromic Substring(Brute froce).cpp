class Solution
{
public:
    string longestPalindrome(string s)
    {

        string ans = "", temp = "";

                for(int w = 0;w<s.size();w++)
                {
                    for(int i =0,j = w ;j<s.size();i++,j++)
                    {
                        //palindrome check
                        bool b = false;
                        for(int k1 =i,k2=j ;k1<=k2;k1++,k2--)
                        {
                            if(s[k1]!=s[k2])
                            {
                                b = true;
                                break;
                            }
                        }

                        // not palindrome
                        if(!b)
                        {
                            temp = "";
                            for(int k =i ;k<=j;k++)
                            {
                                temp += s[k];
                            }

                            if(ans.size()<temp.size())
                            {
                                ans = temp;
                            }
                        }
                    }
                }

     
        return ans;
    }
};