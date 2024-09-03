/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    char c;
    while(t--){
        for(int i=0; i<64; i++){
            cin >> c;
            if(c!='.') cout << c;
        }
        cout << endl;
    }
}