#include <bits/stdc++.h>
using namespace std;
//  merge function ======> merge  two sorted Array
//  Tc = nlog(n) and Sc = O(n)
void merge(vector<int> &arr, int low, int mid, int high)
{
    int left = low;
    int right = mid+1;
    vector<int> ans;
    while (left <= mid &&  right <= high)
    {
        if(arr[left] <= arr[right]){
            ans.push_back(arr[left++]);
        }
        else{
            ans.push_back(arr[right++]);
        }
        
    }

    while(left <= mid){
        ans.push_back(arr[left++]);
    }
    while(right <=high){
        ans.push_back(arr[right++]);
    }

    for(int i = low; i<=high; i++){
        arr[i] = ans[i-low];

    }
    
}
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void printArray(vector<int> &arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0;
    int high = n - 1;
    mergeSort(arr, low, high);
    printArray(arr);

    return 0;
}