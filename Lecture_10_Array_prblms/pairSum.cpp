#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> ans;
    vector<int> a = {2, -3, 3, 3, -2};
    int num = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if ((a[i] + a[j]) == num)
            {
                vector<int> temp;
                temp.push_back(min(a[i], a[j]));
                temp.push_back(max(a[i], a[j]));
                ans.push_back(temp);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}