/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, ans; cin >> t;
    char c;
    while(t--){
        ans = 0;
        for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                cin >> c;
                if(c=='X'){
                    if(i==1 || i==10 || j==1 || j==10){
                        ans += 1;
                    }
                    else if(i==2 || i==9 || j==2 || j==9){
                        ans += 2;
                    }
                    else if(i==3 || i==8 || j==3 || j==8){
                        ans += 3;
                    }
                    else if(i==4 || i==7 || j==4 || j==7){
                        ans += 4;
                    }
                    else if(i==5 || i==6 || j==5 || j==6){
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}