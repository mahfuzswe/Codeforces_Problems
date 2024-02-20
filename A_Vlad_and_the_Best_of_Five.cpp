#include<bits/stdc++.h>
using namespace std;
#define all(s) s.begin(), s.end()

int main(){
   int t; cin >> t;
   while(t--){
      string s; cin >> s;
      int a = count(all(s), 'A');
      int b = count(all(s), 'B');

      (a > b) ? cout << "A\n" : cout << "B\n";
   }

   return 0;
}