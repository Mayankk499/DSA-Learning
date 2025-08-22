#include <iostream>
using namespace std;

int main(){
    int arr[]  = {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int n = 15;
    int zeroCount = 0;
    int oneCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else{
            oneCount++;
        }
    }
    cout<<"total zeros : "<<zeroCount<<endl;
    cout<<"total ons : "<<oneCount<<endl;
    return 0;
}