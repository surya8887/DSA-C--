#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)
{
    cout << "size:" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{ /*
   //  Nesting vector
   vector<pair<int,int>> v = {{1,3},{2,4},{4,5},{5,7}};
   printVec(v);
   // input
   int n;
   cin>>n;
   vector<pair<int,int>> v1;
   for(int i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
       v1.push_back({a,b});
   }
   printVec(v1);
   */

    /*
      int N;
      cin >> N;
      vector<int> arr[N];
      for (int i = 0; i < N; i++)
      {
          int n;
          cin >> n;
          for (int j = 0; j < n; j++)
          {
              int a;
              cin >> a;
              arr[i].push_back(a);
          }
      }
      for (int i = 0; i < N; i++)
      {
          printVec(arr[i]);
      }

      */
    vector<vector<int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> v1(m);
        for (int j = 0; j < m; j++)
        {
            cin >> v1[j];
        }
        v.push_back(v1);
    }
    for (int i = 0; i < n; i++)
    {
        printVec(v[i]);
    }
    return 0;
}