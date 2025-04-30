#include <bits/stdc++.h>
using namespace std;
int *charCount(string s){
    int n = s.length();
    // static int hash[256] ={0}; // for all the char
    static int hash[26] = {0}; //for a to z char
    for(int i = 0; i<n; i++){
        // hash[s[i]]++;
        hash[s[i]-'a']++;

    }
    return hash;
}
int main()
{

    string s;
    cin>>s;
    
    int* hash = charCount(s);
    int q;
    cin>>q;
    while (q--)
    {
        char x;
        cin >> x;
        cout<<hash[x-'a']<<endl;
    }
    
    return 0;
}