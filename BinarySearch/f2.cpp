#include <bits/stdc++.h>
using namespace std;
// Upper Bound and Lower Bound
//  Upper Bound ===> smallest index such that arr[index] > x;
//  lower Bound ===> smallest index such tht  arr[index] >= x;

int lower_Bound_Linear(vector<int>arr, int x){
    int lb = arr.size();
    for(int i =0; i<arr.size(); i++){
        if(arr[i]>=x){
            return i;
        }
    }
    return lb;
}
// log(n) Time Complexity 
int lowerBound(vector<int> arr, int x)
{
    int n = arr.size();
    int lower_bound = n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
           lower_bound = mid;
           high = mid-1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return lower_bound;
}
//  Upper Bound --> Time Complexity Log(n);
int upperBound(vector<int> arr, int x)
{
    int n = arr.size();
    int ub = n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
           ub = mid;
           high = mid-1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ub;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout<<lowerBound(arr,20);

    return 0;
}