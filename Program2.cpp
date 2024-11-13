#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int i=0;
    
    for(i=0;i<100;i++){
        arr[i]=i*3;
        
        if(arr[i]%9 ==0)
            cout<<arr[i]<<endl;
    }
    return 0;
}
