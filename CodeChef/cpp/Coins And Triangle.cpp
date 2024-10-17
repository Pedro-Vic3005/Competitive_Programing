#include <iostream>
using namespace std;

int main(){

    int i,cases,coins;

    cin >> cases;

    for (i=0;i<cases;i++){

        cin >> coins;

        int c,subtrator=1,high=0;

        for (c=coins;c>=subtrator;subtrator++){
            c-=subtrator;
            high++;
        }
        cout << high << endl;
    }

    return 0;

}