//falta terminar
#include <iostream>
#include <vector>
using namespace std;

int main(){

    int j,cases,i,n;

    cin >> cases;

    for (i=0;i<cases;i++){

        vector<int>numbers;
        int array_size,sum;

        cin >> array_size;

        for(j=0;j<array_size;j++){

            cin >> n;
            numbers.push_back(n);
            sum+=n;
        }


    }

    return 0;
}