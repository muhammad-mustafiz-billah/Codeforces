/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v,count1=0,count2=0,count3=0,count4=0; cin >> n;
    map <int, int> m;
    for(int i=1; i<=n; i++){
        cin >> v;
        if(v!=i){
            m[v]++;
        }
    }
    for(auto& it: m){
        if (it.second==0) count1++;
    }
    cout << count1 << endl;
}
