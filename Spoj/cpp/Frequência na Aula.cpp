#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n,i,students;

    cin >> students;

    vector<int>classroom;

    for (i=0;i<students;i++){
        cin >> n;
        classroom.push_back(n);
    }

    int total=students;

    sort(classroom.begin(), classroom.end());

    for (i=0;i<students-1;i++){
        if (classroom[i]==classroom[i+1]){
            total-=1;
        }
    }

    cout << total;

    return 0;
}