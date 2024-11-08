// Decimal to Hexadecimal Converter

#include <iostream>
using namespace std;
#define SIZE 4

int main()
{
    int number;
    
    do{
    cout<<"Give number [0,65535]: ";
    cin>>number;
    }while(number<0 || number>16777216);
    
    int arr[SIZE];
    char charArr[SIZE];
    int i;
  
    for(i=0; i<SIZE; i++){
        arr[i]=number%16;
        number=number/16;
    }
    
    for(i=0; i<SIZE; i++){
        switch(arr[i]){
        
        case 1:
            charArr[i] =  '1';
            break;
        case 2:
            charArr[i] =  '2';
            break;
        case 3:
            charArr[i] =  '3';
            break;
        case 4:
            charArr[i] =  '4';
            break;
        case 5:
            charArr[i] =  '5';
            break;
        case 6:
            charArr[i] =  '6';
            break;
        case 7:
            charArr[i] =  '7';
            break;
        case 8:
            charArr[i] =  '8';
            break;
        case 9:
            charArr[i] =  '9';
            break;
        case 10:
            charArr[i] =  'A';
            break;
        case 11:
            charArr[i] =  'B';
            break;
        case 12:
            charArr[i] =  'C';
            break;
        case 13:
            charArr[i] =  'D';
            break;
        case 14:
            charArr[i] =  'E';
            break;
        case 15:
            charArr[i] =  'F';
            break;
    }
        
    }
    
    cout<<endl<<"The Hexadecimal Number is: ";
    for(int i=SIZE-1; i>=0; i--){
        cout<<charArr[i];
    }
    

    return 0;
}
