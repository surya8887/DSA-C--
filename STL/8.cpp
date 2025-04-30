#include <bits/stdc++.h>
using namespace std;
int main()
{
    // nexted vector, map, unoredered_map
    map<pair<string, string>, vector<int>> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int st;
        cin >> st;
        for (int j =0; j < st; j++)
        {
            int x;
            cin >> x;
            mp[make_pair(s1, s2)].push_back(x);
        }
    }

    for (auto &pr : mp)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << " "<<endl;
        cout << list.size() << endl;
        for (auto &x : list)
        {
            cout << x << " ";
        }
    }

    return 0;
}