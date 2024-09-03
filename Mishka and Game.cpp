/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c,mc=0,cc=0; cin >> n;
    while(n--){
        cin >> m >> c;
        if(m>c) mc++;
        else if(m<c) cc++;
    }
    if(mc==cc) cout << "Friendship is magic!^^" << endl;
    else if(mc > cc) cout << "Mishka" << endl;
    else cout << "Chris" << endl;
}