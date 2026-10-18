#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    char firstLetter = str[0];
    firstLetter = toupper(firstLetter);
    str[0] = firstLetter;
    cout << str << endl;
}