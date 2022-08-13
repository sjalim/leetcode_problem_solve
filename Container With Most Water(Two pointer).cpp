class Solution
{
public:
    bool static sortbysec(const pair<int, int> &a, const pair<int, int> &b)
    {
        return (a.second < b.second);
    }

    int maxArea(vector<int> &height)
    {

        vector<pair<int, int>> v;

        for (int i = 0; i < height.size(); i++)
        {
            v.push_back(make_pair(i, height[i]));
        }

        int mx = 0;

        for (int i = 0, j = v.size() - 1; i < j;)
        {
            mx = max(mx, min(v[i].second, v[j].second) * abs(v[i].first - v[j].first));
            if (v[i].second >= v[j].second)
            {
                j--;
            }
            else
            {
                i++;
            }
        }

        return mx;
    }
};