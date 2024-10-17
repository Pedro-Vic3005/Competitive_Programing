#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main (){

    ll i,j,n,aumont_houses,sum;

    cin >> aumont_houses;

    vector<ll>houses;

    for (i=0;i<aumont_houses;i++){

        cin >> n;
        houses.push_back(n);
    }

    cin >> sum;

    i=0;j=houses.size()-1;

    while(houses[i]<sum/2 && houses[j]>sum/2){

        if (houses[i]+houses[j]==sum){
            cout << houses[i] << " " << houses[j];
            break;
        }
        else{
            if (houses[i]+houses[j]>sum){
                j--;
            }
            else{
                i++;
            }
        }
        if (houses[i]+houses[j]==sum){
            cout << houses[i] << " " << houses[j];
            break;
        }
        if (houses[i]>sum/2){
            i--;
        }
        if (houses[j]<sum/2){
            j++;
        }
    }

    return 0;
}