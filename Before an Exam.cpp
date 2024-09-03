/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, sumTime,v1,v2; cin >> d >> sumTime;
    int sumMax=0,sumMin=0,mid;
    vector <pair<int,int>> a;
    for(int i=0; i<d; i++){
        cin >> v1 >> v2;
        a.push_back({v1,v2});
        sumMax += v2;
        sumMin += v1;
    }
    if(sumMax>=sumTime && sumMin<=sumTime){
        cout << "YES" << endl;
        for(int i=0; i<d; i++){
            mid = sumTime/d-i;
            if(mid >= a[i].first) cout << a[i].first << endl;
            else if(mid < a[i].second){}
        }
    }
    else cout << "NO" << endl;
}