/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >> n;
    cout << n;
    for(int i=n.length()-1; i>=0; i--){
        cout << n[i];
    }
    cout << endl;
}