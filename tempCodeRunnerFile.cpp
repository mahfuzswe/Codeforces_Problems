int t; cin>>t;
    while(t--){
        string s; cin >> s;
        int stk = 0;

        for(int i=0; i<s.size(); i++){
            if(stk && s[i] == 'B') stk--;
            else stk++;
        }

        cout << stk << '\n';
    }