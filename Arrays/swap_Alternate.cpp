#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for (int i = 0; i < size - 1; i += 2)
    {
       if(i+1 < size){
        swap(arr[i], arr[i+1]);
       }
    }
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    swapAlternate(arr, 6);
    
    //  swaped array => [2,1,4,3,6,5]

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}