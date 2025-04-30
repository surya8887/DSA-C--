#include <bits/stdc++.h>
using namespace std;
vector<string> substring(string str){
    vector<string> ans;
    int n = str.length();
    for(int i =0; i<n; i++){
        string substr = "";
        for(int j = i; j <n; j++){
            substr += str[j];
            ans.push_back(substr);
        }

    }
    return ans;
}
int main() {
    
    string str;
    cin>>str;
    vector<string> ans = substring(str);
    cout<<ans.size()<<endl;
    for(auto x :ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}