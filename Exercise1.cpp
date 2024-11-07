// Decimal to Octal Converter

#include <iostream>
using namespace std;

int main()
{
    int number;
    
    do{
    cout<<"Give number [0,16777216]: ";
    cin>>number;
    }while(number<0 || number>16777216);
    
    int arr[8];
    int i;
    for(i=0; i<8; i++){
        arr[i]=number%8;
        number=number/8;
    }
    
    for(int i=7; i>=0; i--){
        cout<<arr[i];
    }
    

    return 0;
}
