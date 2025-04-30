#include <bits/stdc++.h>
using namespace std;
//  sorting selcetion sort  -->Key: select minimum and swap with correct index
void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {

        int mini = i; // pic mini index
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}

//  buble sort
void bubleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void insertionSort(vector<int> &arr)
{

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
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

    // selectionSort(arr);
    // bubleSort(arr);
    insertionSort(arr);
    printArray(arr);

    return 0;
}