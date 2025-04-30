#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int largestSumSubArray(vector<int>& arr, int k)
{
    int l = 0, r = 0;
    int sum = 0;
    int maxlen = 0;
    int n = arr.size();
    
    while (r < n)
    {
        sum += arr[r];
        
        // Reduce the window size if the sum exceeds k
        while (sum > k && l <= r)
        {
            sum -= arr[l];
            l++;
        }
        
        // Only update if the sum exactly equals k
        if (sum <= k)
        {
            maxlen = max(maxlen, r - l + 1);
        }
        
        r++;
    }
    return maxlen;
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
    int k;
    cin >> k;
    cout << largestSumSubArray(arr, k);

    return 0;
}