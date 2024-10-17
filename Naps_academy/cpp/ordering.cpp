#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int size,n,i;

    cin >> size;

    vector <int> array;

    for (i=0;i<size;i++){
        cin >> n;
        array.push_back(n);
    }

    sort(array.begin(), array.end());

    for (i=0;i<size;i++){
        cout << array[i];
        if (i<size-1){
            cout << ' ';
        }
    }
    return 0;
}