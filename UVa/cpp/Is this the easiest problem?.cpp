#include <iostream>
using namespace std;
int main (){

    long long i,a,b,c;
    int cases;

    cin >> cases;

    for (i=1;i<=cases;i++){
        cin >> a >> b >> c;

        if (a+b<=c || b+c<=a || a+c<=b || a<=0 || b<=0 || c<=0){
            cout << "Case " << i << ": Invalid" << endl;
        }
        else if ((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b)){
            cout << "Case " << i << ": Isosceles" << endl;
        }
        else if (a==b && a==c){
            cout << "Case " << i << ": Equilateral" << endl;
        }
        else if (a!=b && a!=c && b!=c){
            cout << "Case " << i << ": Scalene" << endl;
        }

    }

    return 0;
}