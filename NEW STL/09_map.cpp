// Map - Sorted on key-val Pair

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // complexity -> Olog(1) // implemention redBackTree ya to Balence Tree
    map<int,string> m;
    
    m[0] = "Tejas";
    m[1] = "Agrawal";
    m[20] = "Lakshay";

    m.insert({5,"Vinod"});

    cout<<"Before Earase = "<<endl;
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }cout<<endl;

    cout<<"Finding 13 -> "<<m.count(13)<<endl;

    
    cout<<"After Earase = "<<endl;
    m.erase(20);
    
    for(auto x : m)
        cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;
    


    return 0;
}