#include <iostream>
#include <string>
using namespace std;

int main (){

    string word;
    char first_letter;
    int i=0, caso=0;

    while (i==0){
        cin >> first_letter;

        if (first_letter=='*'){
            break;
        }
        caso++;
        cin >> word;

        if (word[word.size()-1]=='j'){
            cout << "Case " << caso << ": Hajj-e-Akbar" << endl;
        }
        else{
            cout << "Case " << caso << ": Hajj-e-Asghar" << endl;
        }
    }

    return 0;
}
