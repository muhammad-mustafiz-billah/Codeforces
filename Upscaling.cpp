#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n; cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if((i+j)%2==0)cout << "##";
                else cout << "..";
            }
            cout << endl;
            for(int j=1; j<=n; j++){
                if((i+j)%2==0)cout << "##";
                else cout << "..";
            }
            cout << endl;
        }
    }
}