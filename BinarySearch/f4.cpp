#include <bits/stdc++.h>
using namespace std;
// brute Force  Method
vector<int> firstAndLastOcurrance(vector<int> arr, int x)
{
    int first = -1, last = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    return {first, last};
}
// using the concept of Upper and lower Bound 
vector<int> first_Last_Occurance(vector<int> arr, int x){
    int n = arr.size();
    auto lb = lower_bound(arr.begin(),arr.end(),x);
    auto ub = upper_bound(arr.begin(),arr.end(),x);
    int first = lb-arr.begin();
    int  last = ub-arr.begin();
    if(first ==n || arr[first] !=x){
        return {-1,-1};
    }
    return {first,last-1};
    
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
    int x;
    cin >> x;
    vector<int> ans = firstAndLastOcurrance(arr, x);
    // vector<int> ans = first_Last_Occurance(arr, x);

    cout<<endl;
    for (auto x : ans)
    {
        cout << x << "  ";
    }
    return 0;
}