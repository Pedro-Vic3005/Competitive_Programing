#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int,int>frequence;
    int n;

    while(cin >> n){

        if (frequence.find(n)==frequence.end()){
            frequence[n]=1;
        }
        else{
            frequence[n]++;
        }
    }

    for (auto i: frequence){

        cout << i.first << " " << i.second << endl;
    }

    return 0;
}