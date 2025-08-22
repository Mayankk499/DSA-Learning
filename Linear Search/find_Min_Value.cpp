#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[] = {10,26,25,12,45,-8,9,65,32,7,96};
    int size = 11;
    int minValue = INT_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < minValue){
            minValue = arr[i];
        }
    }
    cout<<"Min value is : "<<minValue;

    return 0;
}