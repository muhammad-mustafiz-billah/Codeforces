/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,count0,count1; cin >> t;
    string s;
    while(t--){
        count0=0,count1=0;
        cin >> s;
        n = s.length();
        for(int i=0; i<n; i++){
            if(s[i]=='0') count0++;
            else count1++;
        }
        if(count0==n || count1==n) cout << "NET" << endl;
        else if(count0>count1){
            if(count1%2==0) cout << "NET" << endl;
            else cout << "DA" << endl;
        }
        else{
            if(count0%2==0) cout << "NET" << endl;
            else cout << "DA" << endl;
        }
    }
}