#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){

    map<int,int>election;

    long long i,almount_votes;

    cin >> almount_votes;

    vector<long long>votes;
    long long vote;

    for (i=0;i<almount_votes;i++){

        cin >> vote;
        votes.push_back(vote);
    }

    for (i=0;i<almount_votes;i++){

        if (election.find(votes[i])==election.end()){
            election[votes[i]]=1;
        }
        else{
            election[votes[i]]++;
        }
    }

    long long victory,frequence=1;

    for (auto i : election){

        if (i.second>frequence){
            frequence=i.second;
            victory=i.first;
        }
    }

    cout << victory;

    return 0;
}