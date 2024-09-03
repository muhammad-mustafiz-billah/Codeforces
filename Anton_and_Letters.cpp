#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0,n;
    string word;
    getline(cin, word);
    sort(word.begin(), word.end());
    n = word.length();
    
    if(n>2){
        for(int i=2*((n/3)-1); i<n-2; i++){
            if(word[i] != word[i+1]) count++;
        }
    }
    
    cout << count << endl;
}