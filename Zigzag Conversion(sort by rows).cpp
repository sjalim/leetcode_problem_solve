
#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{

    if (numRows == 1)
        return s;

    vector<string> rowString(min(numRows, int(s.size())));
   bool d = false;
   int row = 0;
   string ans = "";
   for(int i =0;i<s.size();i++)
   {

       rowString[row] += s[i];

       if(row ==0 || row == numRows-1)
       {
        d = !d;

       }

       if(d)
       {
        row++;
       }
       else
       {
        row--;
       }

   }

   for(int i =0;i<rowString.size();i++)
   {
    ans+= rowString[i];
   }
   return ans;


}

int main()
{
    string str;
    int n;
    while (cin >> str >> n)
    {
        str = convert(str, n);
        cout << str << endl;
    }
}