#include <bits/stdc++.h>
using namespace std;

int main(){
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
    int flags = 0,flag;
    for(int i, j=1; j<=n; j++){
        flag = 0;
        for(i=0; i<p+q; i++){
            if(arr[i]!=j) flag++;
        }
        if (flag == p+q){
            flags = 1;
            // cout << flag;
            break;
        }
    }
    if(flags) cout << "Oh, my keyboard!" << endl;
    else cout << "I become the guy." << endl;
}