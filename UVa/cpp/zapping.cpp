#include <iostream>
using namespace std;

int main(){

    int i=0,channel1,channel2;

    while (i==0){

        cin >> channel1 >> channel2;

        if (channel1==-1 && channel2==-1){
            break;
        }

        if (channel1>channel2){
            if (channel1-channel2>100-channel1+channel2){
                cout << 100-channel1+channel2 << endl;
            }
            else{
                cout << channel1-channel2 <<endl;
            }
        }

        else {
            if (channel2-channel1>100-channel2+channel1){
                cout << 100-channel2+channel1 << endl;
            }
            else {
                cout << channel2-channel1 << endl;
            }
        }
    }

    return 0;
}