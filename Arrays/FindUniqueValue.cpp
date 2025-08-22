#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans ^= arr[i];
    }
    cout<<"Unique element is : "<<ans;
    return ans;
}



int main()
{

    int arr[5] = {1, 3, 2, 3, 1};

    findUnique(arr, 5);
}