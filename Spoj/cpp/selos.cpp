#include <iostream>
#include <cmath>
using namespace std;

int prime_number(long long n);

int main(){

    long long stamps;

    cin >> stamps;

    if ((stamps%2==0 && stamps!=2) || (stamps%2!=0 && prime_number(stamps)!=0)){
        cout << 'S';
    }
    else{
        cout << 'N';
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