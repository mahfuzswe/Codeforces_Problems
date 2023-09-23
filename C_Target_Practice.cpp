#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while (t--){
        int n=10;
        int ans=0;       
        
        for(int i=0;i<n;i++){
            string s; cin>>s;

            for(int j=0;j<n;j++){
                if(s[j]=='X'){
                    int x=i+1,y=j+1;
                    int temp=ans;

                    if(x==1 || y==1 || x==10 || y==10){
                        ans+=1;
                    }else if((x==2 || y==2 || x==9 || y==9)){
                        ans+=2;
                    }else if((x==3 || y==3 || x==8 || y==8)){
                        ans+=3;
                    }else if((x==4 || y==4 || x==7 || y==7)){
                        ans+=4;
                    }else{
                        ans+=5;
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}