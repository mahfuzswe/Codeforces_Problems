/*
    priority queue
   ----------------

   push x : add x to the end of A
   pop : remove the greatest number in A
   top : print the greatest number in A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q; cin>>q;
    string s; int x;
    priority_queue<int>pq;
    while(q--){
        cin>>s;
        if(s=="push"){
            cin>>x;
            pq.push(x);
        }
        if(s=="top") cout<<pq.top()<<'\n';
        if(s=="pop") pq.pop();
    }

    return 0;
}