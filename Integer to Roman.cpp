class Solution
{
public:
    string intToRoman(int num)
    {

        vector<pair<int, string>> v = {

            make_pair(1, "I"),
            make_pair(4, "IV"),
            make_pair(5, "V"),
            make_pair(9, "IX"),
            make_pair(10, "X"),
            make_pair(40, "XL"),
            make_pair(50, "L"),
            make_pair(90, "XC"),
            make_pair(100, "C"),
            make_pair(400, "CD"),
            make_pair(500, "D"),
            make_pair(900, "CM"),
            make_pair(1000, "M"),
            make_pair(4000, "Q")

        };

        vector<int> numV;

        string str = "";

        int i = 0;
        while (num > 0)
        {
            cout << num << " " << i << endl;

            if (v[i].first <= num)
            {

                i++;
                continue;
            }
            i--;
            if (i >= 0)
            {
                if (v[i].first <= num || i == v.size() - 1)
                {
                    str += v[i].second;
                    num -= v[i].first;
                }
            }
        }

        return str;
    }
};