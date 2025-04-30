#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{ /*
  // vector
  // input
  // vector<int> v;
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++)
  // {
  //     int x;
  //     cin >> x;
  //     printVector(v);
  //     v.push_back(x); // O(1)
  // }
  // //
  // printVector(v);
  vector<int> v(10,0);
  v.push_back(4);
  printVector(v);
  v.pop_back();
  printVector(v);

  // copying vector
  vector<int> v2 = v;  // O(n)
  printVector(v2);
  v2.push_back(1000);
  printVector(v2);
  */

    //    question
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<endl;
    }
    

    return 0;
}