/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,v,amin,bmin,suma,sumb; cin >> t;
    while(t--){
        suma = 0, sumb = 0;
        cin >> n;
        vector <int> a,b,as,bs;
        for(long long i=1; i<=n; i++){
            cin >> v;
            suma += v;
            a.push_back(v);
            //if(v==i) as.push_back(v);
        }
        for(long long i=1; i<=n; i++){
            cin >> v;
            sumb += v;
            b.push_back(v); 
            //if(v==i) bs.push_back(v);
        }
        amin = *min_element(a.begin(),a.end());
        bmin = *min_element(b.begin(),b.end());
        if(amin*n+sumb < bmin*n+suma) cout << amin*n+sumb << endl;
        else cout << bmin*n+suma << endl;        
    }   
}