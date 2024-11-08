// FHexadecimal to Decimal Converter

#include <iostream>
#include <cmath>
using namespace std;
#define SIZE 4

int main()
{
char arr[SIZE];
int result=0;
int i;

for(i=0; i<SIZE; i++){      
cout<<"Dwse to "<<i+1<<"-o psifio: ";
        
cin>>arr[i];

switch(arr[i]){
    
    case '1':
        result += 1*pow(16,i);
        break;
    case '2':
        result += 2*pow(16,i);
        break;
    case '3':
        result += 3*pow(16,i);
        break;
    case '4':
        result += 4*pow(16,i);
        break;
    case '5':
        result += 5*pow(16,i);
        break;
    case '6':
        result += 6*pow(16,i);
        break;
    case '7':
        result += 7*pow(16,i);
        break;
    case '8':
        result += 8*pow(16,i);
        break;
    case '9':
        result += 9*pow(16,i);
        break;
    case 'A':
        result +=10*pow(16,i);
        break;
    case 'B':
        result +=11*pow(16,i);
        break;
    case 'C':
        result +=12*pow(16,i);
        break;
    case 'D':
        result +=13*pow(16,i);
        break;
    case 'E':
        result +=14*pow(16,i);
        break;
    case 'F':
        result +=15*pow(16,i);
        break;
    
}
}

cout<<endl<<"O arithmos sto dekaeksadiko sistima arithmisis einai to: ";
for(i=SIZE-1; i>=0; i--)
    cout<<arr[i];

cout<<endl<<"O arithmos sto dekadiko sistima arithmisis einai to: "<<result;
 
return 0;
}
