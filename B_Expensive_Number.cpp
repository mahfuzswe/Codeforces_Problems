#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<=b; i++)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
#define NeedForSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int M = 1e9+7; // MOD
int expo(int a,int b){int res=1;while(b){if(b%2)res=(res*a)%M;a=(a*a)%M;b/=2;}return res;}
int gcd(int a, int b){if(a==0) return b; return gcd(b%a,a);}
int lcm(int a, int b){return (a*b)/gcd(a,b);}
int ceil_div(int a,int b){return a/b + ((a^b)>0 && a%b != 0);}
        
/*_____________________________________________________________________________________________*/
// sky high, sir! don't give up..
// easy, you can do it! 
   

// Practice like you've never won, Perform like you've never lost. 
// Setbacks are unavoidable, BUT giving up is unforgivable.
    



void mahfuzswe(){
    string n; cin >> n;
    int lng = 0, cnt = 0;

    for(char c: n){
        if(c == '0') cnt++;
        else lng = max(lng, cnt+1);
    }

    cout << n.size() - lng << '\n';
}
        
int32_t main(){
    NeedForSpeed
    
    int t; cin >> t;
    while(t--){
        mahfuzswe();
    }
    
    return 0;
}