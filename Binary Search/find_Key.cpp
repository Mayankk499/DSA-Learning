#include <iostream>
using namespace std;

int findKey(int arr[], int size, int key)
{
    int start = 0, end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {1, 10, 22, 33, 67, 74};
    int odd[5] = {21, 49, 62, 82, 95};

    int evenIndex = findKey(even, 6, 67);
    cout << "Index of 33 is - " << evenIndex<<endl;
    
    int oddIndex = findKey(odd, 5, 82);
    cout << "Index of 49 is - " << oddIndex;

    return 0;
}