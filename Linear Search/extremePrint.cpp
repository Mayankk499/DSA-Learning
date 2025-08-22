#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 26, 25, 12, 45, 8, 9, 65, 32, 7, 96};
    int n = 11;
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        left++;
        right--;
    }
    
    return 0;
}