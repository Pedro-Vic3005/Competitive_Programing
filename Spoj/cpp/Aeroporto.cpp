#include <iostream>
#include <vector>
using namespace std;

int main (){

    int c,cases=1,i,j=1,airports,flights;

    while (j){

        cin >> airports >> flights;

        if (airports==0 && flights==0){
            break;
        }

        vector<int>interactions;

        for (i=0;i<airports;i++){
            interactions.push_back(0);
        }

        int point1,point2;

        for (i=0;i<flights;i++){

            cin >> point1 >> point2;

            interactions[point1-1]++; interactions[point2-1]++;
        }

        int max_interactions=0;

        for (c=0;c<airports;c++){
            if (interactions[c]>max_interactions){
                max_interactions=interactions[c];
            }
        }

        vector<int>airports_answer;

        for (c=0;c<airports;c++){
            if (interactions[c]==max_interactions){
                airports_answer.push_back(c+1);
            }
        }

        cout << "Teste " << cases << endl;

        for (c=0;c<airports_answer.size();c++){
            cout << airports_answer[c];
            if (c!=airports_answer.size()-1){
                cout << ' ';
            }
        }
        cout << endl;

        cases++;
    }

    return 0;
}