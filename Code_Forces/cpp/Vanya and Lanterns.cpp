#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){

    int n,size,i,amount_lanterns;
    double largest_sum=0;

    cin >> amount_lanterns >> size;

    vector<int>lanterns;

    for (i=0;i<amount_lanterns;i++){
        cin >> n;
        lanterns.push_back(n);
    }

    sort(lanterns.begin(), lanterns.end());

    if (lanterns[0]-0>largest_sum){
        largest_sum=lanterns[0]-0;
    }
    if (size-lanterns[lanterns.size()-1]>largest_sum){
        largest_sum=size-lanterns[lanterns.size()-1];
    }

    for (i=0;i<amount_lanterns-1;i++){
        double value=lanterns[i+1]-lanterns[i];
        if (value/2>largest_sum){
            largest_sum=value/2;
        }
    }
    cout << setprecision(10) << fixed;
    cout << largest_sum;

    return 0;
}