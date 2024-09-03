#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <pair<int, int>> a;
    for(int i=0; i<n; i++){
        int firstValue, secondValue;
        cin >> firstValue >> secondValue;
        a.push_back(std::make_pair(firstValue, secondValue));
    }
    int ans = a[0].second - a[0].first;
    int one = 0, two = 0, three = 0;
    for(int i=1; i<n; i++){
        if((a[i].first < a[0].second)&&(a[i].second > a[0].second)&&one==0){
            ans = ans - (a[0].second - a[i].first);
            one ++;
        }
        else if ((a[i].second > a[0].first)&&(a[i].first < a[0].first)&&0==two){
            ans = ans - (a[i].second - a[0].first);
            two++;
        }
        else if((a[i].first >= a[0].first)&&(a[i].second <= a[0].second)&&0==three){
            ans = ans - (a[i].second - a[i].first);
            three++;
        }
    }
    cout << ans <<endl;
}