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

        sort(v.begin(), v.end(), sortbysec);

        int mx = 0;

        // cout << "sq:"<< int(sqrt(v.size())) << endl;
        for (int j = v.size() - 1; j >= int(sqrt(v.size())); j--)
        {
            for (int i = v.size() - 1; i >= 0; i--)
            {

                mx = max(mx, min(v[i].second, v[j].second) * abs(v[i].first - v[j].first));

                // cout << i << " " << j<< endl;
            }
        }

        return mx;
    }
};