#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4], max = -1,key;
    for(int i=0; i<4; i++){
        cin >> a[i];
        if(a[i]>max) {max = a[i];key=i;}
    }
    for(int i=0; i<4; i++){
        if(key == i) continue;
        else cout << max - a[i] << " ";
    }
    cout << endl;
}