#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<b; i++)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
using namespace std;
        
void mr_phoenix(){

    string s; cin>>s;
    int inital = s[0]-'a';
    int fin = 0;
    if(abs(inital)>13){
        fin = 26-inital;
    }else{
        fin = inital;
    }

    int sum = fin;
    for(int i=0; i<s.size()-1; i++){
        int diff = s[i+1]-s[i];
        if(abs(diff)>13){
            sum += 26-abs(diff);
        }else{
            sum += abs(diff);
        }
        diff = 0;
    }
    cout<<sum<<'\n';
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mr_phoenix();
    
    return 0;
}