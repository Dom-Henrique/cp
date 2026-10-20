#include <bits/stdc++.h>
using namespace std;
/*
inteiro n indica a quantidade de letras.
pedras podem ser R, G ou B. tenho que contar as pedras que
podem ser removidas de modo que duas pedras vizinhas
tenham cores diferentes
*/
int resolution(vector<string> stones){
    int stonesLength = stones.size();
    string first = stones[0];
    if (all_of(stones.begin(), stones.end(), [first](string val){
        first==val;
    })) return stonesLength-1;
    if (!all_of(stones.begin(), stones.end(), [first](string val){
        first==val;
    })) return 0;
    
}
int main(){
    int n;
    vector<string> stones (5);
    for (int i=0;i<n;i++){
        cin >> stones[i];
    }
    resolution(stones);
}