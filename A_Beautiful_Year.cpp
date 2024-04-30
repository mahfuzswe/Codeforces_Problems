#include<bits/stdc++.h>
using namespace std;

int main(){
    int yr; cin >> yr;
    yr++;
    while(1){
        int i = yr;
        int four = i%10;
        i /= 10;

        int three = i%10;
        i /= 10;

        int second = i%10;
        i /= 10;

        int first = i;

        if(first != second && first != three && first != four && second != three && second != four && three != four){
            cout << yr << '\n';
            return 0;
        }

        yr++;

    }

    return 0;
}