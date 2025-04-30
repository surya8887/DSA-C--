#include <bits/stdc++.h>
using namespace std;
// check arry is sorted or not 
bool isSorted(vector<int> arr){
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i-1] > arr[i]) return false;
    }
    return true;
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
    cout<<isSorted(arr);
    return 0;
}