// Queue -> FIFO


#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    

    queue<string> q;

    q.push("Tejas");
    q.push("Vinod");
    q.push("Agrawal");

    cout<<"First Element ->"<<q.front()<<endl;
    q.pop();
    cout<<"Back Element ->"<<q.back()<<endl;

    cout<<"The Size after Pop ->"<<q.size()<<endl;

    return 0;
}