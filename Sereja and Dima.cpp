#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,value, sum = 0 , sumS=0, sumD=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> value;
        a[i]= value;
        sum += value;
    }
    for(int i=0,k=0,j=0;j<n;j++){
        if(j%2==0){
            if(a[i]>a[n-1-k]) {sumS+=a[i];i++;}
            else {sumS+=a[n-1-k];k++;}
        }
        else{
            if(a[i]>a[n-1-k]) {sumD+=a[i];i++;}
            else {sumD+=a[n-1-k];k++;}
        }
    }
    cout << sumS << " " << sum-sumS << endl;
}