#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,value1,value2; cin >> t;
    while(t--){
        int min = INT_MAX;
        int min_index=0;
        int n; cin >> n;
        vector <pair<int, int>> a;
        vector <int> sum;
        for(int i=1; i<=n; i++){
            cin >> value1 >> value2;
            a.push_back(make_pair(value1, value2));
            if(value2%2) sum.push_back(value1+(value2/2));
            else sum.push_back(value1+(value2/2)-1);
            if(min > sum[i-1]){
                min = sum[i-1];
            }
        }
        cout << min << endl;
        // if(a[min_index-1].second%2){
        //     if(a[min_index-1]==1) cout << a[min_index-1].first+((a[min_index-1].second/2)) << endl;

        // }
        // else
        //     cout << a[min_index-1].first+((a[min_index-1].second/2-1)) << endl;
    }
}