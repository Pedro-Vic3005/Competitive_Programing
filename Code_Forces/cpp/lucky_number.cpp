#include <iostream>

int main(){
    using namespace std;

    string numero;
    int quant_4=0,quant_7=0,i;

    cin >> numero;

    for (i=0;i<numero.size();i++){
        if (numero[i]=='4'){
            quant_4++;
        }
        if (numero[i]=='7'){
            quant_7++;
        }
    }

    if (quant_4+quant_7==4 || quant_4+quant_7==7){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}




