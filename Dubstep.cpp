#include <bits/stdc++.h>
using namespace std;

int main(){
    string song; cin >> song;
    for(int i=0; i<song.length(); i++){
        while(song[i]=='W' && song[i+1]=='U' && song[i+2]=='B'){
            song.erase(i, 3);
            song.insert(i, " ");
        }
    }
    for(int i=0; i<song.length(); i++){
        while(song[i]== ' ' && song[i+1] == ' '){
            song.erase(i, 1);
        }
    }
    cout << song << endl;
}