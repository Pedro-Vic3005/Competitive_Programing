#include <iostream>
using namespace std;

int main (){

    int tests,cases=1;

    while (cin >> tests){

        if (tests==0){
            break;
        }

        int code,avarage,i;
        int matrix[2][tests],highest_average=0;;

        for (i=0;i<tests;i++){

            cin >> code >> avarage;
            matrix[0][i]=avarage; matrix[1][i]=code;
            if (avarage>highest_average){
                highest_average=avarage;
            }
        }

        cout << "Turma " << cases << endl;

        for (i=0;i<tests;i++){
            if (matrix[0][i]==highest_average){
                cout << matrix[1][i];
                if (i!=tests-1){
                    cout << ' ';
                }
            }

        }
        cout << endl;
        cases++;
    }

    return 0;
}