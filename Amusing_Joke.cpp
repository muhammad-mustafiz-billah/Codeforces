#include<bits/stdc++.h>
using namespace std;

int main(){
    int flag=0;
    string str1, str2, str;
    cin >> str1 >> str2;
    str = str1 + str2;
    sort(str.begin(), str.end());
    string pile; cin >> pile;
    sort(pile.begin(), pile.end());

    if(str == pile) cout << "YES" << endl;
    else cout << "NO" << endl;



    // for(int i=0,j; i<str.length()-1; i++){
    //     for(j=0; j<pile.length()-1; j++){
    //         if(pile[j]==str[i]){
    //             flag = 1;
    //             break;
    //         }
    //     }
    // }
    // cout << str << endl;
}