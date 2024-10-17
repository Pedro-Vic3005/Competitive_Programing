#include <iostream>
#define rows 50
#define columns 50
using namespace std;
int matrix[rows][columns];

int harvest(int matrix[rows][columns],int r1, int c1, int r2, int c2);

int main(){

    int size,i,j,n,amount_harvest,total=0;

    cin >> size;

    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            cin >> n;
            matrix[i][j]=n;
        }
    }

    cin >> amount_harvest;

    int r1,c1,r2,c2;

    for (i=0;i<amount_harvest;i++){
        cin >> r1 >> c1 >> r2 >> c2;
        total+= harvest(matrix,r1,c1,r2,c2);
    }

    cout << total;

    return 0;
}

int harvest(int matrix[rows][columns],int r1, int c1, int r2, int c2){
    int i,j,total=0;

    for (i=r1-1;i<=r2-1;i++){
        for (j=c1-1;j<=c2-1;j++){
            total+= matrix[i][j];
            matrix[i][j]=0;
        }
    }
    return total;
}

