#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int count = 0;
    int kl = k*l, cd = c*d;
    while (kl>=nl && cd>=1 && p>=np){
        count++;
        kl -= nl;
        cd -= 1;
        p -= np; 
    }
    cout << count/n << endl;
}