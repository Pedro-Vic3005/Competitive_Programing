#include <iostream>
#include <string>

int main(){

    using namespace std;

    int j,i,resposta=0;
    string risada, vogais;

    cin >> risada;

    for (i=0;i<risada.size();i++){
        if (risada[i]=='a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u'){
            vogais.push_back(risada[i]);
        }
    }

    for (i=0,j=vogais.size()-1;i<vogais.size();i++,j--){
        if (vogais[i]==vogais[j]){
            resposta++;
        }
    }

    if (resposta==vogais.size()){
        cout << 'S';
    }
    else{
        cout << 'N';
    }

    return 0;
}
