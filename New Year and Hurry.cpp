#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k, d,count = 0,i; cin >> n >> k;
    d = 240-k;
    i=1;
    while (d>=5*i)
    {
        count++;
        d-=5*i;
        i++;
        
    }
    if(count>n) cout << n << endl;
    else cout << count << endl;
}