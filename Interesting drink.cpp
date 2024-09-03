/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q, v, ans;

    cin >> n;
    vector <int> x;
    for(int i = 0; i < n; i++){
        cin >> v;
        x.push_back(v);
    }
    sort(x.begin(), x.end());
    //     3 6 8 10 11
    cin >> q;
    vector <int> m;
    for(int i = 0; i < q; i++){
        cin >> v;
        m.push_back(v);
    }

    for(int i = 0; i < q; i++){
        int s = 0, e = x.size(),mid;
        while(s <= e){
            mid = s + (e - s)/2;
            if( x[mid] < m[i] ) s = mid + 1;
            else if ( x[mid] > m[i] )  e = mid - 1;
            else {s++;break;}
        }
        cout << s << endl;
    }


}