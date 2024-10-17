#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct country{
    int gold;
    int silver;
    int bronze;
    int indice;
};

bool organize(const country &c1 , const country &c2){

    if (c1.gold==c2.gold){
        if (c1.silver==c2.silver){
            if (c1.bronze==c2.bronze){
                return c1.indice>c2.indice;
            }
            else{
                return c1.bronze<c2.bronze;
            }
        }
        else{
            return c1.silver<c2.silver;
        }
    }
    else {
        return c1.gold<c2.gold;
    }
}

country make (int gold, int silver, int bronze, int indice){
    country c = {gold,silver,bronze, indice};
    return c;
}

int main(){

    int number_teams, modalities,i;

    cin >> number_teams >> modalities;

    int gold,silver,bronze,matrix[100][3]={};

    for (i=0;i<modalities;i++){

        cin >> gold >> silver >> bronze;

        matrix[gold-1][0]+=1; matrix[silver-1][1]+=1; matrix[bronze-1][2]+=1;
    }

    vector<country>nations;

    for (i=0;i<number_teams;i++){
        nations.push_back(make(matrix[i][0],matrix[i][1],matrix[i][2],i+1));
    }

    sort (nations.rbegin(), nations.rend(), organize);

    for (i=0;i<number_teams;i++){

        cout << nations[i].indice;

        if (i<number_teams-1){
            cout << ' ';
        }
    }

    return 0;
}
