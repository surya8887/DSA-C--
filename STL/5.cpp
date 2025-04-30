#include <bits/stdc++.h>
using namespace std;
int main()
{
     // inbult implementation->using Red-Black Tree
    // valid key data types ->any datatypes
    // Time complexity-> O(log(n))

    /*
    // map
    map<int, string> m;
    m[1] = "abc"; // s.size*O(log(n))
    m[4] = "def";
    m[3] = "cde";
    m.insert(make_pair(2, "bcd"));
    m.insert({5, "efg"});
    // map<int,string> :: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<" "<<it->second<<endl;
    // }
    // for(auto &it: m){
    //     cout<<it.first<<" "<<it.second<<endl; // O(log(N)
    // }
    auto it = m.find(7);
    if (it == m.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << (*it).first << " " << it->second << endl;
    }

    map<int, int> m1;
    m1[1]; // O(log(n))
    cout << m1[1] << endl;
    // function ->clear,erase, size  find
*/
    // question
    map<string, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    for (auto &it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}