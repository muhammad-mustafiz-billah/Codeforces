/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, counter, sum; string str;
    cin >> t;
    while (t--)
    {
        counter = 0;
        map <char, int> str;
        cin >> n;
        for(int j = 0; j < n; j++){
            str[j]++;
        }
        for(int j = 0; j < n; j++) if(str[j]<2) counter += str[j];
        cout << counter << endl;
    }
    
}