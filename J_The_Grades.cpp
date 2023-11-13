#include<bits/stdc++.h>
#define int long long
using namespace std;

struct Student{
    string name;
    int g1,g2,g3,g4,sum;
};

bool studentDifference(Student s1, Student s2){
    if(s1.sum == s2.sum){
        return s1.name < s2.name;
    }
    return s1.sum > s2.sum;
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int size; cin>>size;
    Student st[size];
    for(int i=0; i<size; i++){
        cin>>st[i].name>>st[i].g1>>st[i].g2>>st[i].g3>>st[i].g4;
        st[i].sum = st[i].g1+st[i].g2+st[i].g3+st[i].g4;
    }

    sort(st,st+size,studentDifference);
    for(int i=0; i<size; i++){
        cout<<st[i].name<<" "<<st[i].sum<<" "<<st[i].g1<<" "<<st[i].g2<<" "<<st[i].g3<<" "<<st[i].g4<<'\n';
    }
    
    return 0;
}