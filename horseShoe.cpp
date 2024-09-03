#include <bits/stdc++.h>
using namespace std;

int main(){
    int temp=0;
    vector<int> arr(4);
    for(int i=0; i<4; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<3;i++){
        if(arr[i]==arr[i+1]) temp++;
    }
    cout<<temp<<endl;
}