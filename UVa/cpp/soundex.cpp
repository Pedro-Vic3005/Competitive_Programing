#include <iostream>
#include <string>
#include <vector>

int main (){

    using namespace std;

    int i;
    string palavra;

    while(cin >> palavra){

        vector <int> resposta;

        for (i=0;i<palavra.size();i++){
            if (palavra[i]=='B' || palavra[i]=='F' || palavra[i]=='P' || palavra[i]=='V'){
                resposta.push_back(1);
            }
            else if (palavra[i]=='C'|| palavra[i]=='G'|| palavra[i]=='J'|| palavra[i]=='K'|| palavra[i]=='Q'|| palavra[i]=='S'|| palavra[i]=='X'|| palavra[i]=='Z'){
                resposta.push_back(2);
            }
            else if (palavra[i]=='D' || palavra[i]=='T'){
                resposta.push_back(3);
            }
            else if (palavra[i]=='L'){
                resposta.push_back(4);
            }
            else if (palavra[i]=='M' || palavra[i]=='N') {
                resposta.push_back(5);
            }
            else if (palavra[i]=='R'){
                resposta.push_back(6);
            }
            else{
                resposta.push_back(0);
            }
        }

        for (i=0;i<resposta.size()-1;i++){
            if (resposta[i]==resposta[i+1]){
                resposta[i]=-1;
            }
        }

        for (i=0;i<resposta.size();i++){
            if (resposta[i]>0) {
                cout << resposta[i];
            }
        }
        cout << endl;
    }
    return 0;
}