#include <iostream>
#include <vector>

using namespace std;

int main(){

    int j,i,days,sum_time,minimum_time,max_time;

    cin >> days >> sum_time;

    vector<pair<int,int> >hours;
    pair<int,int>pair;
    int time_possible_min=0,time_possible_max=0;

    for (i=0;i<days;i++){

        cin >> minimum_time >> max_time;
        pair=make_pair(minimum_time,max_time);
        hours.push_back(pair);

        time_possible_max+=max_time;
        time_possible_min+=minimum_time;
    }

    if (sum_time<=time_possible_max && time_possible_min<=sum_time){

        cout << "YES" << endl;

        int time_studied=0;
        bool key=false;

        for (i=0;i<days;i++){

            if (key==true){
                cout << hours[i].first << " ";
            }

            else{
                if ((time_studied+hours[i].second) + (time_possible_min - hours[i].first) < sum_time){
                    cout << hours[i].second << " ";
                    time_studied += hours[i].second;
                    time_possible_min -= hours[i].first;
                }
                else {
                    for (j=hours[i].first;j<=hours[i].second;j++){
                        if ((time_studied + j + time_possible_min)-hours[i].first == sum_time){
                            cout << j << " ";
                            key=true;
                            break;
                        }
                    }
                }
            }
        }
    }
    else{
        cout << "NO";
    }

    return 0;
}