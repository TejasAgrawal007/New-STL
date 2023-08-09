// List -> Implement as Doubly Link List

#include <bits/stdc++.h>
#include <list>
using namespace std;
int main()
{

    list<int> l;

    // Copy New List ->
    cout<<"Copy a New List Start"<<endl;
    list<int> n(l);
    for(int i : n)
        cout<<i<<" ";
    cout<<"Copy a New List End"<<endl;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;

    l.erase(l.begin()); // earase one elements begin
    cout << "After Earase Elements: " << endl;
    for (int i : l)
        cout << i << " ";
    cout << endl;

    cout << "The Size of The List -> " << l.size() << endl;


    list<int> z(5, 100);
    for(int i : z)
        cout<<i<<" ";

    return 0;
}