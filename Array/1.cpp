// -----> cout the number using brute force
#include <bits/stdc++.h>
using namespace std;
void count(vector<int> arr, int x)
{
    int n = arr.size();
     int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == x)
        {
            count++;
        }
    }
    cout << count << endl;
}

//  hashing array
int* countHash(int arr[], int n)
{
    static int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {

        hash[arr[i]]++;
    }
    return hash;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    // count(arr, 2);
    
    int* hash = countHash(arr,n);
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin >> x;
        cout<<hash[x]<<endl;
    }
    
    return 0;
}