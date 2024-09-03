/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m,fv,fi,fk,fa; cin >> t;
    char c;
    while(t--){
        fv=0, fi=0, fk=0, fa=0;
        vector <char> s;
        cin >> n >> m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> c;
                s.push_back(c);
            }
        }
        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                if(s[i+j]=='v'&&fv==0) {fv=1;break;}
                else if(s[i+j]=='i'&&fi==0&&fv==1){fi=1;break;}
                else if(s[i+j]=='k'&&fk==0&&fi==1){fk=1;break;}
                else if(s[i+j]=='a'&&fa==0&&fk==1){fa=1;break;}
            }
        }
        // cout << fv << fi << fk << fa << endl;
        if(fv==1 && fi==1 && fk==1 && fa==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}