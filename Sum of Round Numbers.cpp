#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,count; cin >> t;
    while(t--){
        count = 0;
        int a[5];
        cin >> n;
        int i=0;
        while (n!=0){
            if(n%10) count++;
            a[i]= (n%10)*pow(10,i);
            n/=10;
            i++;
        }
        cout << count << endl;
        for(int j=i-1; j>=0; j--){
            if(a[j]) cout << a[j] << " ";
        }
        cout << endl;
    }
}