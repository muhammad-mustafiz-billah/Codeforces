#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int min=arr[0], max=arr[0];
    int min_index=0, max_index=0;
    for(int i=0; i<n; i++){
        if(min >= arr[i]){
            min = arr[i];
            min_index = i;
        }
        if(max < arr[i]){
            max = arr[i];
            max_index = i;
        }
    }
    if(max_index > min_index) cout << max_index + n-1 - min_index -1 << endl;
    else cout << max_index + n-1 - min_index << endl;
}