/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x,v,h,sum_rock,max,min,sum,flag; cin >> t;
    while(t--){
        flag=0;
        cin >> n >> x;
        sum_rock = 0;
        max = -1;
        vector <int> a;
        for(int i=0; i<n; i++){
            cin >> v;
            a.push_back(v);
            sum_rock += v;
            if(max < v) max = v;
            if(min > v) min = v;
        }
        sum = 0;
        h=min;
        if((max*n)-sum_rock > x){
            flag = 1;
                long long l,r,m;
                l=min+1, r=max-1;
                while(l<=r){
                    sum=0;
                    m = l + (r - l) / 2;;
                    for(int i=0; i<n; i++){
                        sum+= pow((2*m+a[i]),2);
                    }
                    if (sum == x){cout << m << endl;break;}
                    else if (sum < x)
                        l = m + 1;
                    else
                        r = m - 1;
        }
            
        }
        else if((max*n)-sum_rock == x) {
            h = max;
        }
        else {
            h = max + (x-((max*n)-sum_rock))/n;
        }
        if(flag) cout << h-1 << endl;
        else cout << h << endl;
    }
}