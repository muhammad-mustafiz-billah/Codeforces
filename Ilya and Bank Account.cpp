#include<bits/stdc++.h>
using namespace std;

int main(){
    int m; cin >> m;
    if(m>=0) cout << m << endl;
    else{
        int n = -1*m;
        if(n%10 >= (n/10)%10) cout << m/10 << endl;
        else cout << -1*((n - ((n/10)%10)*10)/10 + n%10) << endl;
    }
}