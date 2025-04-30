#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> &arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int binarySearch(vector<int> arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
//  time complexity is Log(n)
int recursiveBinarySearch(vector<int> arr, int low, int high, int target)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    
    if (arr[mid] == target)
    {

        return mid;
    }
    else if (arr[mid] > target)
    {
       return recursiveBinarySearch(arr, low, mid - 1, target);
    }
    else
    {
       return recursiveBinarySearch(arr, mid+1, high, target);
    }
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
    // cout << binarySearch(arr, 6);
    cout << recursiveBinarySearch(arr,0,n-1,6);
    // printArray(arr);
    return 0;
}