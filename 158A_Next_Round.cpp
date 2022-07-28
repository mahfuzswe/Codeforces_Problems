#include<iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a, count = 0, arr[100],i,j;
    for(i=1; i<=n; i++){
        cin>>a;
        arr[i]=a;
    }
    for(j=1; j<=n; j++){
        if(arr[j]>=arr[k] && arr[j]>0){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
