#include <bits/stdc++.h>
using namespace std;
int main()
{
    // // set
    // set<int> s; // O(log(n))
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // auto it = s.find(4);
    // cout << (*it) << endl;
    // for (auto &i : s)
    // {
    //     cout << i << endl;
    // }
    // // unorederd_set
    // unordered_set<string> us;
    // us.insert("hello");
    // us.insert("world");
    // us.insert("hello");
    // for (auto &i : us)
    // {
    //     cout << i << endl;
    // }
    // // function
    // // find
    // // count
    // // lower_bound
    // // upper_bound
    // // erase
    // // size
    // // empty
    // // clear
    // // input
    unordered_set<int> s1;  // O(1) use hash table internaly 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }
    for (auto i : s1)
    {
        cout<<i<<endl;
    }
    

    return 0;
}