/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,flag,countR,countB; cin >> t;
    while(t--){
        flag=0;
        string str;
        vector <string> s;
        for(int i=0; i<8; i++){
            cin >> str;
            s.push_back(str);
        }
        
        for(auto it: s){
            if(it=="RRRRRRRR") {cout << 'R' << endl;goto here;}
            else if (it=="BBBBBBBB"){cout << 'B' << endl;goto here;}
        }
        if(flag) continue;
        for(int j=0; j<8; j++){
            there:
            countR=0,countB=0;
            for(int i=0; i<8; i++){
                if(s[i][j]=='.') {j++;goto there;}
                if(s[i][j]=='R') countR++;
                if(countR == 8) {cout << 'R' << endl;goto here;}
                if(s[i][j]=='B') countB++;
                if(countB == 8) {cout << 'B' << endl;goto here;}
            }
        }
        here:
        flag = 0;
    }
}