#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k,value,count=0; cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> value;
        if(value+k<=5) count++;
    }
    cout << count/3 << endl;
}