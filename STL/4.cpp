#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<pair<int, int>> p = {{1, 3}, {5, 6},{4, 5}, {9, 8}};
    vector<pair<int, int>>::iterator it;
    sort(p.begin(), p.end());
    // for (it = p.begin(); it != p.end(); it++)
    // {
    //     cout << (*it).first << " " << it->second << endl;
    // }

    for(auto &it:p){   //reference &it 

        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}