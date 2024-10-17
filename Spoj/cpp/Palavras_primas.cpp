#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int prime_number(long long n);

int main (){

    string word;
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (cin >> word){

        int j,i,total=0;

        for (i=0;i<word.size();i++){
            for (j=0;j<alphabet.size();j++){
                if (word[i]==alphabet[j]){
                    total+=j+1;
                }
            }
        }

        if (prime_number(total)==0){
            cout << "It is a prime word." << endl;
        }
        else {
            cout << "It is not a prime word." << endl;
        }
    }

    return 0;
}

int prime_number(long long n){

    int counter=0,i;

    for (i=2;i<=sqrt(n);i++){
        if (n%i==0){
            counter++;
        }
    }

    return counter;
}