// Priority Queue -> Based on 1] MaxHeap 2] MinHeap

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // 1] max-Heap
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    cout << "Size ->" << maxi.size() << endl;

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // 2] Min-Heap

    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(5);
    mini.push(1);
    mini.push(2);
    mini.push(6);
    mini.push(8);

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    return 0;
}