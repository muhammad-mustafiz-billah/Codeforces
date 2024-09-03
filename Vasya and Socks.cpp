#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, result=0, remainder = 0; cin >> n >> m;
    result = n;
    if(m==2 || m==3){
        while (n>=m){
            result += n/m;
            if(n%m==m-1) result++;
            n/=m;
        }
        
    }
    else{
        while(n>0){
            result += (n+remainder)/m;
            remainder = n%m;
            n/=m;
        }
    }

    cout << result << endl;
}