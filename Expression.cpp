/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;
   
    if(b==0 && c==0) cout << a << endl;
    else if(a==1 && b==1 && c==1) cout << 3 << endl;
    else if(a==1 && c==1) cout << a+b+c << endl;
    else if(a==1 || b==1 || c==1){
        if(a==1) cout << (a+b)*c << endl;
        else if(c==1) cout << a*(b+c) << endl;
        else{
            if(a>c) cout << a*(b+c) << endl;
            else cout << (a+b)*c << endl;
        }
    } 
    
    else cout << a*b*c << endl;
}