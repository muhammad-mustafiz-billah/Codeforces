#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0,value1, value2; cin >> n;
    vector <pair <int,int>> h;
    for(int i=0; i<n; i++){
        cin >> value1 >> value2;
        h.push_back(make_pair(value1, value2));
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(h[i].first == h[j].second) count++;
        }
    }

    cout << count << endl;
}