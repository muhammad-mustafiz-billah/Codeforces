#include <bits/stdc++.h>
using namespace std;

int main(){
    string a; cin >> a;
    int two = 0;
    for(int i=0; i<a.length(); i++){
        if(a[i]==a[i+1]) two++;
        else two = 0;
        if (two == 6){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}