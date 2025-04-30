#include <bits/stdc++.h>
using namespace std;
void recursiveBubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    return recursiveBubbleSort(arr, n - 1);
}

void insertionSortRecursive(vector<int> &arr, int i, int n)
{

    if (i == n)
        return;
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j], arr[j - 1]);
        j--;
    }
    return insertionSortRecursive(arr, i + 1, n);
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
    // recursiveBubbleSort(arr, n);
    insertionSortRecursive(arr,0,n);
    printArray(arr);

    return 0;
}