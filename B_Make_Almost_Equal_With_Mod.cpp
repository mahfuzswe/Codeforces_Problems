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
#define mod 1000000007
using namespace std;
        
int gcd(int a, int b){if(a%b==0) return b; else return gcd(b, a%b);}
int lcm(int a, int b){return (a*b)/gcd(a,b);}
        
void mahfuzswe(){
   int t;
   cin>>t;
   while(t--){
     int n; cin >> n;
     int arr[n];

     for(int i=0; i<n; i++){
        cin >> arr[i];
     }

    int k = 2;
    bool ck = true;

    while(ck){
        int md[n];

        for(int i=0; i<n; i++){
            int p = arr[i] % k;
            md[i] = p;
        }

        set<int>s;
        for(int i=0; i<n; i++){
            int x = md[i];
            s.insert(x);
        }

        if(s.size() == 2){
            cout << k << '\n';
            ck = false;
        }else{
            k = k*k;
        }
    }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}