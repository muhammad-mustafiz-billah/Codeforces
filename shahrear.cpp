#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,max,min;
    cin >> a >> b >> c >> d >> e;
    min = a;
    (b<min)? min = b: min ;
    if(c<min) min = c;
    if(d<min) min = d;
    if(e<min) min = e;

    cout << a+b+c+d+e-min << endl;
}