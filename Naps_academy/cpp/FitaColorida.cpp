#include <iostream>
#include <vector>
using namespace std;

void go (int size, vector<int>tape);
void back (int size, vector<int>tape);
void print (int size,vector<int>tape);

int i,j,color;

int main() {

    int size, n;

    cin >> size;

    vector<int>tape;

    for (i = 0; i < size; i++) {
        cin >> n;
        tape.push_back(n);
    }

    go(size,tape);

    return 0;
}

void go (int size, vector<int>tape){

    for (i=0;i<size;i++){
        if (tape[i]==0){
            for (color=1,j=i+1;tape[j]!=0 && j<size;j++,color++){
                if (color>9){
                    tape[j]=9;
                }
                else{
                    tape[j]=color;
                }
            }
            i=j-1;
        }
    }
    back(size,tape);
}

void back (int size, vector<int>tape){

    int i,j;
    for (i=size-1;i>-1;i--){
        if (tape[i]==0){
            for (color=1,j=i-1;tape[j]!=0 && j>-1;j--,color++){
                if (color>9){
                    tape[j]=9;
                }
                else{
                    tape[j]=color;
                }
                if (tape[j]==tape[j-1]){
                    i=2*j-i+2;
                    break;
                }
                if (tape[j-1]==tape[j+1]){
                    i=2*j-i+1;
                    break;
                }
            }
        }
    }
    print(size,tape);
}

void print (int size,vector<int>tape){

    for (i=0;i<size;i++){
        cout << tape[i];
        if (i!=size-1){
            cout << ' ';
        }
    }
}