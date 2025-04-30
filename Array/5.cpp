#include <bits/stdc++.h>
using namespace std;
//  Quick Sort ====> Tc = O(nlogn) & Sc = O(1)
int partationIndex(vector<int> &arr, int low, int high)
{

    int i = low;
    int j = high;
    int pivot = arr[low];

    while (i < j)
    {

        while (arr[i] <= pivot && i < high)
        {
            i++;
        }
        while (arr[j] > pivot && j > low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int PIndex = partationIndex(arr, low, high);
        // left part of partition Index
        quickSort(arr, low, PIndex - 1);
        // right Part of partition Index
        quickSort(arr, PIndex + 1, high);
    }
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
    quickSort(arr, low, high);
    printArray(arr);

    return 0;
}