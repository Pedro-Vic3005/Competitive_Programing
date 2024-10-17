#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct country{

    int gold;
    int silver;

};

bool cmp(const country &c1, const country &c2){

    if (c1.gold==c2.gold){
        return c1.silver<c2.silver;
    }
    else{
        return c1.gold<c2.gold;
    }
}

country make_country(int gold, int silver) {
    country c = {gold, silver};
    return c;
}

int main(){

    vector<country>countries;

    countries.push_back(make_country(1,6));
    countries.push_back(make_country(1,4));
    countries.push_back(make_country(5,1));
    countries.push_back(make_country(5,3));
    countries.push_back(make_country(5,4));

    sort(countries.rbegin(),countries.rend(),cmp);

    for(auto c: countries){
        cout << c.gold << ' ' << c.silver << endl;
    }
}