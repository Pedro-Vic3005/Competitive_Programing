#include <iostream>
#include <vector>
using namespace std;

int main(){

    int c,d,amount_search,i,j,size,n;

    cin >> size;

    vector<int>numbers;

    for (i=0;i<size;i++){
        cin >> n;
        numbers.push_back(n);
    }

    cin >> amount_search;

    for (i=0;i<amount_search;i++){

        int sum=0;
        cin >> c >> d;

        for (j=c;j<=d;j++){
            sum+=numbers[j];
        }

        cout << sum << endl;
    }


    return 0;
}