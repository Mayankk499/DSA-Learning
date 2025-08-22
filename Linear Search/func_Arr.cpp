#include <iostream>
using namespace std;

void Solve(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    int size = 5;
    int key = 6;
    // Solve(arr, size);
    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "key present";
    }
    else
    {
        cout << "key absent";
    }
    return 0;
}