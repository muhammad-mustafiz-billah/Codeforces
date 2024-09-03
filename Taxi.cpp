/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v,sum_1=0, sum_2=0, sum_3=0, sum_4=0; cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++){
        cin >> v;
        if(v==1) sum_1++;
        else if(v==2) sum_2++;
        else if(v==3) sum_3++;
        else if(v==4) sum_4++; 
    }
    //cout << sum_1 << ' ' << sum_2 << ' ' << sum_3 << ' ' << sum_4 << endl;
    int sum2 = sum_2/2;
    sum_2 %= 2;
    sum_1 -= 2*sum_2; if(sum_1<0) sum_1 = 0;
    sum_1 -= sum_3; if(sum_1<0) sum_1 = 0;
    int sum1 = sum_1/4;
    sum_1 %= 4;
    if(sum_1 <= 4 && sum_1>0) sum_1 = 1;
    if(sum_2 <= 2 && sum_2>0) sum_2 = 1;
    cout << sum_4 + sum_3 + sum_2 + sum_1 + sum2 + sum1 << endl;
}