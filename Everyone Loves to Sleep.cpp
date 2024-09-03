/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,value1,value2; cin >> n;
        int H,M; cin >> H >> M;
        vector <pair <int,int>> a,b;
        for(int i=0; i<n; i++){
            cin >> value1 >> value2;
            a.push_back(make_pair(value1, value2));     
        }
        for(int i=0; i<n; i++){
            if(a[i].first >= H){
                if(a[i].second >= M){
                    value1 = a[i].second-M;
                }
                else if(a[i].second!=0){
                    value1 = 60 - a[i].second + M;
                    a[i].first+=1;
                }
                else if(a[i].second==0){
                    value1 = M;
                    a[i].first+=1;
                }
                value2 = a[i].first - H;
            }
            
            else if(a[i].first!=0){
                if(a[i].second >= M){
                    value1 = a[i].second-M;
                }
                else if(a[i].second!=0){
                    value1 = 60 - a[i].second + M;
                    a[i].first-=1;
                }
                else if(a[i].second==0){
                    value1 = M;
                    a[i].first-=1;
                }
                value2 = 24 - a[i].first + H;
            }
            else if(a[i].first==0){
                if(a[i].second >= M){
                    value1 = a[i].second-M;
                }
                else if(a[i].second!=0){
                    value1 = 60 - a[i].second + M;
                    a[i].first-=1;
                }
                else if(a[i].second==0){
                    value1 = M;
                    a[i].first-=1;
                }
                value2 = a[i].first + H;
            }
            b.push_back(make_pair(value2, value1));
        }
        sort(b.begin(), b.end());
        cout << b[0].first << " " << b[0].second << endl;
    }
}