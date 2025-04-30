#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> arr, int x)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}
int lastOccurance(vector<int> arr, int x)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}

vector<int> firstandLastOccurance(vector<int> arr, int x)
{
    int first = firstOccurance(arr, x);
    int last = lastOccurance(arr, x);
    return {first, last};
}
int main()
{

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int  i =0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> ans = firstandLastOccurance(arr,8);
    for(auto x: ans){
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;
}