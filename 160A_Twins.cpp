#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    int arr[t]; 
    int sum1 = 0, sum2=0, count=0;
    
    for(int i=0; i<t; i++){
        cin>>arr[i];
        sum1 += arr[i];
    }
    sum1 = sum1/2;
    sort(arr,arr+t);

    for(int j=t-1; j>=0; j--){
        sum2 += arr[j];
        count++;
        if(sum1<sum2) break;
    }
    cout<<count<<endl;
   
    return 0;
}

