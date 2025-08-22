#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2,4,6,8,10,12};
    int key;
    cout<<"Enter Key: ";
    cin>>key;
    int n = 6;
    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found) {
        cout << "key is present";
    } else {
        cout << "not present";
    }

    return 0;
}
