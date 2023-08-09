// Stack -> LIFO
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{

    stack<string> s;

    s.push("Tejas");
    s.push("Vinod");
    s.push("Agrawal");

    cout<<"Top Element -> "<< s.top() << endl;
    s.pop();
    cout<<"Top Element -> "<<s.top()<<endl;


    cout<<"Size of Stack -> "<<s.size()<<endl;

    cout<<"Empty or Not ->"<<s.empty()<<endl;

    return 0;
}