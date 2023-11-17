#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q,x; cin>>q;
    string s;
    priority_queue<int, vector<int>, greater<int>>pq;
    // declares a priority queue where the elements are 
    // ordered in ascending order.

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


/*
-priority_queue<int, vector<int>, greater<int>> q;
 declares a priority queue `q` that stores integers.
-`int` is the type of the elements in the queue.
-`vector<int>` is the underlying container that stores the elements of the queue.
 It could be any type of sequence container (like `deque` or `vector`), 
 but it must support certain operations such as `front`, `push_back`, and `pop_back`.
-`greater<int>` is a comparison function object (functor) that will be used to order 
 the elements in the queue. `greater<int>` orders the elements in ascending order, 
 which means that the top element of the queue will be the smallest rather than the largest. 
 If you wanted the top element to be the largest (which is the default behavior), 
 you could use `less<int>` instead.
*/

