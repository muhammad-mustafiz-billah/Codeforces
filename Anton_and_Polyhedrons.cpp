#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    string value;
    for(int i=0; i<n; i++){
        cin >> value;
        if(value == "Tetrahedron") count += 4;
        else if(value == "Cube") count += 6;
        else if(value == "Octahedron") count += 8;
        else if(value == "Dodecahedron") count += 12;
        else if(value == "Icosahedron") count += 20;
    }
    cout << count << endl;
}