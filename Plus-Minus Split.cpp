/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n; cin >> t;
    while (t--){
        cin >> n;
        n = 0;
        string str; cin >> str;
        for(int i=0; i < str.length(); i++){
            if(str[i] == '+') n++;
            else n--;
        }
        cout << abs(n) << endl;
    }
    
}