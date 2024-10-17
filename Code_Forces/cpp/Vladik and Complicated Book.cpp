#include <iostream>
#include <vector>
using namespace std;

int main(){

    int page,i,j,total_pages, sorteds;

    cin >> total_pages >> sorteds;
    vector<int>book;

    for (i=0;i<total_pages;i++){
        cin >> page;
        book.push_back(page);
    }

    int first, last, n,counter=0;

    for (i=0;i<sorteds;i++){
        cin >> first >> last >> n;
        first--;n--;
        for(j=first;j<last;j++){
            if (book[j]<book[n] ){
                counter++;
            }
        }
        if (first+counter==n){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        counter=0;
    }
    return 0;
}