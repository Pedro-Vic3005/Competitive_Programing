#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n,i,days;

    cin >> days;

    vector<int>array;

    for (i=0;i<days;i++){
        cin >> n;
        array.push_back(n);
    }

    int longest_sequence=0, sequence=1;

    for (i=0;i<days-1;i++){
        if (array[i]<=array[i+1]){
            sequence++;
        }
        else{
            if (longest_sequence<sequence){
                longest_sequence=sequence;
            }
            sequence=1;
        }
    }

    if(sequence>longest_sequence){
        longest_sequence=sequence;
    }

    cout << longest_sequence;
    return 0;
}