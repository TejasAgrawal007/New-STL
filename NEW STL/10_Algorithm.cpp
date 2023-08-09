#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(6);
    v.push_back(8);

    // 1] Binary Search
    /*cout<<"Binary Search -> "<<binary_search(v.begin(), v.end(), 9)<<endl;

    cout<<"Lower Bound -> "<<lower_bound(v.begin(), v.end(), 6 ) - v.begin()<<endl;
    cout<<"Lower Bound -> "<<upper_bound(v.begin(), v.end(), 6 ) - v.begin()<<endl; */

    // 2] MAX - MIN

    /* int a = 10;
     int b = 20;
     cout<<"Max Value -> "<<max(a,b)<<endl;
     cout<<"Min Value -> "<<min(a,b)<<endl; */

    // 3] Swap

    /* int a = 10;
     int b = 20;

     swap(a,b);

     cout<<"The Value of A -> "<<a<<endl;
     cout<<"The Value of B-> "<<b<<endl; */

    // 4] Reverse

    /*string str = "Tejas Agrawal";
    reverse(str.begin(), str.end());
    cout<<str<<endl;*/

    // 5] Rotate

    /*rotate(v.begin(), v.begin() + 1, v.end());
    cout<<"After Roate - >"<<endl;
    for(auto x: v)
        cout<<x<<" "<<endl;
    cout<<endl;*/

    // 6] Sort - Based On (intero Sort) -> Algo of 3 Algo sort -> {Quick Sort - Heap Sort - insertion Sort}

    /*sort(v.begin(), v.end());

    for(auto x: v)
        cout<<x<<" "<<endl;
    cout<<endl; */

    return 0;
}