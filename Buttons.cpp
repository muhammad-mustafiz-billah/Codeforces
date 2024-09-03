/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0; cin >> n;
    int p = n;
    n--;
    int i=1;
    while(n>=0){
        ans += n*i;
        n--;
        i++;
    }
    cout << ans+p << endl;
}