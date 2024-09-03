/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x, y; cin >> t;

    while(t--){
        vector <pair <int, int>> P;

        for(int i = 0; i < 4; i++){
            cin >> x >> y;
            P.push_back({x, y});
        }
        
        vector <int> lenght;
        
        for(int j = 1, i =0; j <= 3; j++){
            lenght.push_back(abs((P[i].first - P[j].first)*(P[i].first -P[j].first)) + abs((P[i].second - P[j].second)*(P[i].second -P[j].second)));
        }

        if(lenght[0] <= lenght[1]) cout << lenght[0] << endl;
        else cout << lenght[2] << endl;
    }
}