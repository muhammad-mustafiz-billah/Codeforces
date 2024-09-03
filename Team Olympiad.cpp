#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,value,cp=0,cs=0,cm=0; cin>>n;
    vector <int> a;
    vector <int> c_p, c_m, c_s;
    for(int i=0; i<n; i++){
        cin >> value;
        a.push_back(value);
        if(value==1){cp++;c_p.push_back(i+1);}
        else if(value==2){cm++;c_m.push_back(i+1);}
        else if(value==3){cs++;c_s.push_back(i+1);}
    }
    int min=5001;
    if(cp<min) min=cp;
    if(cm<min) min=cm;
    if(cs<min) min=cs;
    cout << min << endl;
    for(int i=0; i<min; i++){
        cout << c_p[i] <<" " << c_m[i] << " " << c_s[i] << endl;
    }
}