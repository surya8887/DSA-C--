#include <bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int> &arr){
    // bruteForece  using map or set Tc => O(n) Sc => O(nlogn)
    int i =0;
    for (int j = 0; j < arr.size(); j++)
    {
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);

    }
    cout<<removeDuplicate(arr);
    return 0;
}