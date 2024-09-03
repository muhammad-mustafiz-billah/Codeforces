#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    string s;
    while(t--){
        cin >> s;
        string str = s.substr(0, 2);
        int n = stoi(str);
        if(n<12){
            if(n==0) cout << "12" << s.substr(2) << " AM" << endl;
            else cout << s << " AM" << endl;
        }
        else if(n>12){
            string str2 = s.substr(2);
            n -= 12;
            if(n<10)
                cout << "0" << n << str2 << " PM" << endl;
            else
                cout << n << str2 << " PM" << endl;
        }
        else{
            cout << s << " PM" << endl;
        }
    }
}