// set - Unique Elements

#include<bits/stdc++.h>
using namespace std;
int main(){

    
    set<int> s;


// Insert Operation complexity Olog(n) for insert ease count find
    s.insert(0);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(9);

    // Delate The First Elemenet 
    // s.erase(s.begin());

    // Delate the 2nd Element

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);


    for(int x : s)
        cout<<x<<" ";

    cout<<endl;


    cout<<"5 is Present or not -> "<<s.count(5)<<endl;
    cout<<"-5 is Present or not -> "<<s.count(-5)<<endl;


    return 0;
}
