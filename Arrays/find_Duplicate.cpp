#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int size){
    int slow = arr[0], fast = arr[0];
    
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    
    fast = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    cout<<"Duplicate Element : "<<slow;
    
    return slow;
}
int main(){
    int arr[5] = {1,2,3,4,1};
    int size = 5;
    findDuplicate(arr, size);
    return 0;
}