#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vc = {2, 3, 4, 6, 7};
    
    for(int i = 0; i < vc.size(); ++i)
        cout << vc[i] << endl;
    
    vector <int> ::iterator it = vc.begin();
    for(;it<vc.end(); ++it)
        cout<< *(it) << endl;

    for(int value : vc)
        cout << value << endl;
}