#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;

int main (){

    int i,j,points;
    double n,m;

    cin >> points;

    vector<double>x;
    vector<double>y;

    for (i=0;i<points;i++){
        cin >> n >> m;
        x.push_back(n); y.push_back(m);
    }

    double shortest_distance=5656854.237;

    for (i=0;i<points-1;i++){
        for (j=i+1;j<points;j++){

            double distance = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));

            if (shortest_distance>distance){
                shortest_distance=distance;
            }
        }
    }

    cout << fixed << setprecision(3);
    cout << shortest_distance;

    return 0;
}