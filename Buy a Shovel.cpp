#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i=1,flag=1; cin >> n >> k;
    while(true){ 
        if((n*i)%10==k ||(n*i)%10==0 )break;
        i++;
    }
    if(flag)cout << i << endl;
}