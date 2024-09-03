#include <bits/stdc++.h>
using namespace std;

int count=0;
int frogFib(int &i, int n){
    if(i+2<=n){
        count += 2;
        i+=2;
        frogFib(i,n);
    }
    return count;
}


int main(){
    int i=0,n; cin >> n;
    cout << frogFib(i,n) << endl;
}