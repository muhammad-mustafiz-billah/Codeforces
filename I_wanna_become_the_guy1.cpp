#include <bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    int n; cin >> n;
    int p; cin >> p;
    vector <int> ap(p);
    for(int i=0; i<p; i++){
        cin >> ap[i];
    }
    int q; cin >> q;
    vector <int> aq(q);
    for(int i=0; i<q; i++){
        cin >> aq[i];
    }
    vector <int> arr(p+q);
    for(int i=0; i<p+q; i++){
        if(i<p) arr[i] = ap[i];
        else arr[i] = aq[i-p];
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<p+q; i++){
        if(arr[i] != arr[i+1]) count ++;
    }
    if (count == n ) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
}