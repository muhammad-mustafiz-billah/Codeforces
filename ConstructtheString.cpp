#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, b; cin >> t;
    
    while(t--){
        cin >> n >> a >> b;
        vector <char> word;
        for(int i=0,j=0; i<n; i++){
            if(j<=a) {word.push_back(97+j);j++;}
            else {word.push_back(97+j-a);j++;}
            if(j>=b) j=0;
        }
        for(int i=0; i<n; i++){
            cout << word[i];
        }
        cout << endl;
    }
}