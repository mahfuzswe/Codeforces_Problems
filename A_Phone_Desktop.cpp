#include<bits/stdc++.h>
// #define int long long
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
        
/*_____________________________________________________________________________________________*/
// sky high, sir! don't give up..
// easy, you can do it! 
        
void mahfuzswe(){
    int t; cin>>t;
    while(t--){
        int x, y; cin >> x >> y;
        if(x == 0 and y == 0){
            cout << 0 << '\n';
        }
        else{
            
            if(x == 0 and y > 0){
                // cout << ceil(y/2) << '\n';
                cout << (y+2-1)/2 << '\n';

            }
            if(x > 0 and y == 0){
                cout << (x+15-1)/15 << '\n';
            }
            if(x > 0 and y > 0){
                if(y == 1){
                    x += 4;
                    cout << (x+15-1)/15 << '\n';
                }
                if(y >= 2){
                    int ans = (y+2-1)/2;
                    int xx = y/2;
                    int gg = xx * 7;
                    if(y%2 == 1) gg += 11;

                    if(x > gg){
                        x -= gg;
                        int z = (x+15-1)/15;
                        ans += z;
                    }

                    cout << ans << '\n';
                }
            }
        }
    }
}
        
int main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}