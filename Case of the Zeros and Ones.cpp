#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count_1=0,count_0=0;cin>>n;
    char c;
    for(int i=0; i<n; i++){
        cin >> c;
        if(c=='1') count_1++;
        if(c=='0') count_0++;
    }
    int min = 200001;
    if(min > count_1) min = count_1;
    if(min > count_0) min = count_0;
    cout << n-(2*min) << endl;
}