/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int result = a;
    int r = 0;
    while(a+r>=b){
        result += (a+r)/b;
        r =(a+r)%b;
        a /= b;
    }
    cout << result << endl;
}
1500