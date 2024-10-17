#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){

    int i,letters;
    string sentence;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    cin >> letters;

    if (letters>=26){

        char w;

        for(i=0;i<letters;i++){
            cin >> w;
            sentence.push_back(tolower(w));
        }

        sort(sentence.begin(), sentence.end());

        int total=0;

        for (i=0;i<sentence.size()-1;i++){
            if (sentence[i]==sentence[i+1]){
                sentence.erase(i,1);
                i--;
            }
        }

        for (i=0;i<26;i++){
            if (sentence[i]==alphabet[i]){
                total++;
            }
        }

        if (total==26){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }

    else {
        cout << "NO";
    }

    return 0;
}