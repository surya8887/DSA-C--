
//  basic question of recurion;
#include <bits/stdc++.h>
using namespace std;

//  factorial of Number
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

//  fibonaaci series
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

vector<int> fibonacci(int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        ans.push_back(fib(i));
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    vector<int> ans = fibonacci(n);
    for(auto x: ans){
        
        cout<<x<<" ";
    }
    
    
    return 0;
}