//sem map, depois tentar com map, ID: 11588
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main(){
    int testcase, numCase = 1;
    cin >> testcase;
    for(int i = 0; i < testcase; i++){
        int linha, coluna, high, low;
        cin >> linha >> coluna >> high >> low;
        vector<int>alfabeto(26,0);
        int sumLow = 0,sumHigh = 0;
        for(int j = 0; j < linha; j++){
            string lerLinha;
            cin >> lerLinha;
            for(int col = 0; col < coluna; col++){//contar a string letra por letra
                int pos = lerLinha[col] - '0' - 17;
                alfabeto[pos]++;
            }
        }

        sort(alfabeto.begin(), alfabeto.end());
        int c = 25;
        int sum = alfabeto[c];

        while(alfabeto[c] == alfabeto[c-1]){
            sum += alfabeto[c-1];
            c--;
        }
        int quantidadeLetra = (linha*coluna) - sum;
        sumLow = quantidadeLetra * low;
        sumHigh = high * sum;
        cout << "Case " << numCase << ": " << sumLow + sumHigh << endl;

        numCase++;
    }

    return 0;
}