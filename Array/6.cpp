#include <bits/stdc++.h>
using namespace std;
int largest(vector<int> arr){
    // Time Complexity = n(logn)
    // sort(arr.begin(),arr.end());
    // return arr[arr.size()-1];

    //  second way time Complexity = O(n)
    int ans = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    return ans;
    
}

int secondLargest(vector<int> arr){

    // Worst Case Time Complexity = O(nlogn)+ [O(n) to search]
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int largestValue = arr[n-1];
    for(int i = n-2; i>=0; i++){
        if(arr[i] != largestValue){
            return arr[i];
        }
    }
    return -1;
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
    // cout<<largest(arr);
    cout<<secondLargest(arr);

    
    return 0;
}