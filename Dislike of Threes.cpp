/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> a;
    for(int i=1; i<1667; i++){
        if(i%10!=3 && i%3!=0) a.push_back(i);
    }
    int t,k; cin >> t;
    while (t--){
        cin >> k;
        cout << a[k-1] << endl;
    }
    
}