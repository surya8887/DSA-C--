#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair
    pair<int, string> p;
    // p.first = 1;     // first way
    // p.second = "surya";
    // p = make_pair(1, "surya");  //second way
    p = {1, "surya"}; // third way
    cout << p.first << " " << p.second << endl;

    // reference and copy
    // pass by copy
    pair<int, string> p1 = p;
    p1.first = 2;
    cout << p.first << " " << p.second << endl;

    // pass by reference
    pair<int, string> &p2 = p;
    p2.first = 3;
    cout << p.first << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int,int> array1[3];
    array1[0] = {1,2};
    array1[1] = {2,3};
    array1[2] = {3,4};
    swap(array1[0],array1[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<array1[i].first<<" "<<array1[i].second<<endl;
    }
    
    // input
    pair<int, string> p3;
    cin >> p3.first >> p3.second;
    cout << p3.first << " " << p3.second << endl;



    return 0;
}