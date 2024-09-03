/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cout<< "Enter the decimal number: "; cin >> n;
    int b; cout<< "Enter the base in which you want to convert: "; cin >> b;
    int q=n, a;
    vector <char> v;
    while(q!=0){
        a = q%b;
        q /= b;
        if(a<10) v.push_back(a+48);
        else{
            v.push_back(a+55);
        }
    }
    for(int i=v.size()-1; i>=0; i--){
        cout << v[i];
    }
}