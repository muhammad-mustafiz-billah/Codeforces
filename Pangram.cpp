#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0; cin >> n;
    string word; cin >> word;
    for(int i=0; i<n; i++){
        word[i] = tolower(word[i]);
    }
    sort(word.begin(), word.end());
    for(int i=0; i<n; i++){
        if(word[i] != word[i+1]) count ++;
    }
    if(count == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
}