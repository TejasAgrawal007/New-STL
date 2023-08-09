// dQueue - Deck - Doublly Eneded Queue

#include <bits/stdc++.h>
#include <deque>
using namespace std;
int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // d.pop_front();

    cout << "The First Index Element ->" << d.at(1) << endl;

    cout << "Front element -> " << d.front() << endl;
    cout << "Back element -> " << d.back() << endl;

    cout << "Empty or Not ->" << d.empty() << endl;

    // Earese The Element -> It Will Take a Range or elements

    cout << "Before Earese -> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // earase 1st element
    cout << "After Earese -> " << d.size() << endl;

    return 0;
}