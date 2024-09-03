/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i, j, sum; cin >> t;
    
    while(t--){
        sum = 0;
        for(i = 0; i<3; i++){
            string v;
            cin >> v;
            for(j = 0; j<3; j++){
                sum += v[j];
            }
        }
        sum = 594 - sum + 63;
        cout << char(sum) << endl;
    }
}