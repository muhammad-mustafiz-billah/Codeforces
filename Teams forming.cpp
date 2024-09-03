/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, value, sum = 0; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> value;
        sum += value;
    }
    cout << (sum/n) - 1 << endl;
}