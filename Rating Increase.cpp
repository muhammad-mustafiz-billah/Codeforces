/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;string ab;char value; cin >> n;
    while(n--){
        

    }
}
int length(string ab,int s, int e){
    if(ab[s]=='0') return -1;
    else{
        int c = 0;
        for(int i=s; i<=e; i++){
            c++;
        }
        return c;
    }
}