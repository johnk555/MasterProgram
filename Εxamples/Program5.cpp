// Read a decimal number and make it binary
#include <iostream>
using namespace std;

int main()
{
    int number;
    
    do{
    cout<<"Give number [0,255]: ";
    cin>>number;
    }while(number<0 || number>255);
    
    int arr[8];
    int i;
    for(i=0; i<8; i++){
        arr[i]=number%2;
        number=number/2;
    }
    
    for(int i=7; i>=0; i--){
        cout<<arr[i];
    }
    

    return 0;
}
