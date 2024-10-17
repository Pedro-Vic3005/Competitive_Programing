#include <iostream>
#include <string>
using namespace std;

int main (){

    string cellphone;
    while (cin >> cellphone){

        int i;

        for (i=0;i<cellphone.size();i++){
            if (cellphone[i]=='A' || cellphone[i]=='B' || cellphone[i]=='C'){
                cellphone[i]='2';
            }
            if (cellphone[i]=='D' || cellphone[i]=='E' || cellphone[i]=='F'){
                cellphone[i]='3';
            }
            if (cellphone[i]=='G' || cellphone[i]=='H' || cellphone[i]=='I'){
                cellphone[i]='4';
            }
            if (cellphone[i]=='J' || cellphone[i]=='K' || cellphone[i]=='L'){
                cellphone[i]='5';
            }
            if (cellphone[i]=='M' || cellphone[i]=='N' || cellphone[i]=='O'){
                cellphone[i]='6';
            }
            if (cellphone[i]=='P' || cellphone[i]=='Q' || cellphone[i]=='R' || cellphone[i]=='S'){
                cellphone[i]='7';
            }
            if (cellphone[i]=='T' || cellphone[i]=='U' || cellphone[i]=='V'){
                cellphone[i]='8';
            }
            if (cellphone[i]=='W' || cellphone[i]=='X' || cellphone[i]=='Y' || cellphone[i]=='Z'){
                cellphone[i]='9';
            }
        }

        for (i=0;i<cellphone.size();i++){
            cout << cellphone[i];
        }
        cout << endl;
    }

    return 0;
}