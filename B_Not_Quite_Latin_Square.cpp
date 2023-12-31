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
using namespace std;
        
int gcd(int a, int b){if(a%b==0) return b; else return gcd(b, a%b);}
int lcm(int a, int b){return (a*b)/gcd(a,b);}

char ck(char ch[]){
    int a = 0, b = 0, c = 0;
    for(int i=0; i<3; i++){
        if(ch[i] == 'A') a++;
        else if(ch[i] == 'B') b++;
        else if(ch[i] == 'C') c++;
    }

    if(a==0) return 'A';
    if(b==0) return 'B';
    if(c==0) return 'C';
}

void mahfuzswe(){
   int t;
   cin>>t;
   while(t--){
    int n=3;
    while(n--){
        char arr[3];
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }

        for(int i=0; i<3; i++){
            if(arr[i] == '?'){
                cout << ck(arr) << '\n';
            }
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