#include <iostream>
using namespace std;

int main()
{
    // int arr[5];
    int n = 5;
    // int Sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter the array index : " << i << " ";
    //     cin >> arr[i];
    // }

    // cout << "Sum of total indexes value " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     Sum += arr[i];
    // }
    // cout << Sum << " ";

    int &k = n;
    int &c = k;

    cout<<"n : "<<n<<endl;
    cout<<"k : "<<k<<endl;
    cout<<"c : "<<c<<endl;

    return 0;
}