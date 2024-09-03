#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,value,sum=0; cin >> n;
    int max = -1;
    vector <int> a;
    for(int i=0; i<n; i++){
        cin >> value;
        a.push_back(value);
        if(max < value) max = value;
    }
    for(int i=0; i<n; i++){
        sum += (max-a[i]);
    }
    cout << sum << endl;    
}