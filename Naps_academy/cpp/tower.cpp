#include <iostream>
#include <vector>
#define rows 1000
#define columns 1000
using namespace std;
int matrix[rows][columns];

int main(){

    int i,j,size,n,largest_sum=0;

    cin >> size;

    vector <int> row;
    vector <int> column;

    for (i=0;i<size;i++){
        column.push_back(0);
    }

    for (i=0;i<size;i++){
        int total_row=0;
        for (j=0;j<size;j++){
            cin >> n;
            matrix[i][j]=n;
            column[j]+=n;
            total_row+=n;
        }
        row.push_back(total_row);
    }

    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            int value=(row[i]+column[j])-matrix[i][j]*2;
            if (value>largest_sum){
                largest_sum=value;
            }
        }
    }

    cout << largest_sum;

    return 0;
}