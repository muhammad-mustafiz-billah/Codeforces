#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,max=-1,value,sum=0; cin >> n;
    vector <int> a;
    for(int i=0; i<12; i++){
        cin >> value;
        a.push_back(value);
    }
    sort(a.begin(),a.end());
    int i=0,j=1;
    while(sum<n){
        sum+=a[12-j];
        i++;
        j++;
        if(j==13)break;
    }
    if(sum<n)cout << -1 << endl;
    else cout << i << endl;
}