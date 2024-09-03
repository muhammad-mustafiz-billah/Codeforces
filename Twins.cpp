#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++){
        int b; cin >> b;
        a.push_back(b);
    }
    sort(a.begin(), a.end(), greater<int>());
    int sum = 0, min=0;
    for(int i=0; i<n; i++){
        min = 0;
        sum += a[i];
        for(int j=i+1; j<n; j++){
            min += a[j];
        }
        if(sum > min){
            cout << i+1 << endl;
            return 0;
        }
    }
}