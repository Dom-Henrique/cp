#include <bits/stdc++.h>
using namespace std;

/*
palavras longas: length >= 10
abreviacao: primeira letra, comprimento, ultima letra
*/
string compressWord(string word)
{
    // string shortWord;
    if (word.size() <= 10)
        return word;
    int wordLength = word.size(); // sempre tira a primeira e ultima letra
    string fL = word.substr(0, 1);
    string lL = word.substr(wordLength - 1, wordLength);
    return fL + to_string(wordLength - 2) + lL;
}
int main()
{
    int t;
    string w;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> w;
        cout << compressWord(w) << endl;
    }
}