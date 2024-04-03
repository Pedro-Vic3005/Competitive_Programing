#include <iostream>
#include <vector>

int main(){

    using namespace std;

    int pares=0,i,j,quantidade,tamanho;
    char lado;

    cin >> quantidade;
    vector <int> direitos;
    vector <int> esquerdos;

    for (i=0;i<quantidade;i++){
        cin >> tamanho >> lado;

        if (lado=='D'){
            direitos.push_back(tamanho);
        }
        else {
            esquerdos.push_back(tamanho);
        }
    }

    for (i=0;i<direitos.size();i++){
        for (j=0;j<esquerdos.size();j++){

            if (direitos[i]==esquerdos[j]){
                pares++;
                esquerdos[j] = -1;
                break;
            }
        }
    }

    cout << pares;

    return 0;
}
