#include <iostream>
#include <vector>
using namespace std;
vector<int>numbers;

int binary_search(int size,int n);

int main (){

    int n,i,size,amount_items,item,position;
    scanf("%d %d",&size,&amount_items);

    for (i=0;i<size;i++){
        scanf("%d",&n);
        numbers.push_back(n);
    }

    for (i=0;i<amount_items;i++){
        scanf("%d",&item);
        position= binary_search(size,item);
        printf("%d\n",position);
    }

    return 0;
}

int binary_search(int size,int n){

    int mid,high=size-1,low=0;

    while (low<=high){

        mid=(low+high)/2;
        if (numbers[mid]==n){
            while(numbers[mid]==numbers[mid-1]){
                mid--;
            }
            return mid;
        }
        else{
            if (numbers[mid]>n){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}