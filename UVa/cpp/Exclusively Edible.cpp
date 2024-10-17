#include <iostream>
using namespace std;

int main (){

    int i,cases,row, column, rp, cp;

    cin >> cases;

    for (i=0;i<cases;i++){
        cin >> row >> column >> rp >> cp;

        if ((row-1)%2==0){
            if ((column-1)%2==0){
                cout << "Hansel" << endl;
            }
            else{
                cout << "Gretel" << endl;
            }
        }
        else{
            if ((column-1)%2==0){
                cout << "Gretel" << endl;
            }
            else{
                cout << "Hansel" << endl;
            }
        }
    }


    return 0;
}