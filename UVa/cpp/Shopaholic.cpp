#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){

    int j,cases,i,n,amount;

    cin >> cases;

    for (i=0;i<cases;i++){

        vector<int>values;
        int total=0,discount_total=0;

        cin >> amount;

        for (j=0;j<amount;j++){

            cin >> n;
            total+=n;
            values.push_back(n);
        }

        sort(values.begin(), values.end());

        int counter;

        for (j=values.size()-1,counter=1;j>-1;j--,counter++){

            if (counter%3==0){
                discount_total+=values[j];
            }
        }

        cout << discount_total << endl;
    }
    return 0;
}