#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, value, i, j, count=0; cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++){
        cin >> value;
        a.push_back(value);
    }
    if (n==1){
        cout << 1 << endl;
        return 0;
    }
    vector <int> arr;
    for(i=0,j=0; i<n-1; i++){
        if(a[i]<=a[i+1]){
            count++;
        }
        else{
            arr.push_back(count+1);
            j++;
            count = 0;
        }
    }
    int max = count+1;
    for(int i=0; i<j; i++){
        if(arr[i]>max) max = arr[i];
    }
    cout << max << endl;
}