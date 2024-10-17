#include <iostream>
#include <vector>
using namespace std;

int main(){

    int amount,i,j,time,total=10;

    vector<int>times;

    cin >> amount;

    for (i=0;i<amount;i++){

        cin >> time;
        times.push_back(time);
    }

    for(i=0,j=1;i<times.size()-1;i++,j++){
        if (times[j]-times[i]<10){
            total+=(times[j]-times[i]);
        }
        else{
            total+=10;
        }
    }

    cout << total;

    return 0;
}