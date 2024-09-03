#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    for(int i=1,j; i<=n; i++){
        for(j=1; j<=m; j++){
            if(i%2 || (j==m && (i/2)%2) || ((i/2)%2==0 && j==1)) cout << '#';
            else cout << '.';
        }
        cout << endl;
    }
}