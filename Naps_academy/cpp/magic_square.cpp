#include <iostream>
#include <vector>
#define rows 10
#define columns 10
using namespace std;

int matrix[rows][columns];

int check_rows(int matrix[rows][columns],int size);
int check_columns(int matrix[rows][columns],int size);
int check_diagonal(int matrix[rows][columns],int size);

int main(){

    int i,j,size;

    cin >> size;

    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            cin >> matrix[i][j];
        }
    }

    int answer1=check_rows(matrix,size),answer2=check_columns(matrix,size),answer3=check_diagonal(matrix,size);

    if (answer1==answer2 && answer1==answer3){
        cout << answer1;
    }
    else{
        cout << -1;
    }
    return 0;
}

int check_rows(int matrix[rows][columns],int size){

    int i,j,total=0;
    vector<int>array;

    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            total+=matrix[i][j];
            if (j==size-1){
                array.push_back(total);
                total=0;
            }
        }
    }
    i=0;
    while(array[i]==array[i+1] && i<array.size()-1){
        if (i==array.size()-2 && array[i]==array[i+1]){
            return array[i];
        }
        i++;
    }
    return -1;
}

int check_columns(int matrix[rows][columns],int size){

    int i,j,total=0;
    vector<int>array;

    for (j=0;j<size;j++){
        for (i=0;i<size;i++){
            total+=matrix[i][j];
            if (i==size-1){
                array.push_back(total);
                total=0;
            }
        }
    }

    i=0;
    while(array[i]==array[i+1] && i<array.size()-1){
        if (i==array.size()-2 && array[i]==array[i+1]){
            return array[i];
        }
        i++;
    }
    return -2;
}

int check_diagonal(int matrix[rows][columns],int size){

    int i,j,total1=0,total2=0;
    vector<int>array;

    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            if (i==j){
                total1+=matrix[i][j];
            }
            if (j+i==size-1){
                total2+=matrix[i][j];
            }
        }
    }

    if (total2==total1){
        return total1;
    }
    return -3;
}

