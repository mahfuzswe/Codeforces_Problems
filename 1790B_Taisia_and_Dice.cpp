#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
	    int n, s, r; cin>>n>>s>>r;
    
        int subt = s-r;
        int rem = (r%(n-1));
        int m = (r/(n-1));

        cout<<subt<<" ";
        for(int i=1; i<n; i++){
            if(rem>0) {
                cout<<m+1<<" ";
                rem--;
            }else cout<<m<<" ";
        }cout<<endl;
    }

	return 0;
}
