/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m,count=0; cin >> n >> m;
    if(n>=m) cout << n-m << endl;
    else{
        while(true){
            if((n-1)*2==m) {count+=2;cout << count << endl;break;}
            else if(n>=m) {count++;cout << n-m+count << endl;break;}
            else{count++; n*=2;}
        }
    }
}