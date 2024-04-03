#include <iostream>
#include <string>

int main (){

    using namespace std;

    int i,quantidade,pontos=0;
    string gabarito, resposta;

    cin >> quantidade ;
    cin >> gabarito >> resposta;

    for (i=0;i<quantidade;i++){
        if (gabarito[i]==resposta[i]){
            pontos++;
        }
    }

    cout << pontos;

    return 0;
}