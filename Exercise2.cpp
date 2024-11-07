// Octal to Decimal Converter

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int arr[8];
int result=0;
int i;

for(i=0; i<8; i++){      
cout<<"Dwse to "<<i+1<<"-o psifio: ";
        
cin>>arr[i];
        
result += arr[i]*pow(8,i);    
}

cout<<endl<<"O arithmos sto oxtadiko sistima arithmisis einai to: ";
for(i=7; i>=0; i--)
    cout<<arr[i];

cout<<endl<<"O arithmos sto dekadiko sistima arithmisis einai to: "<<result;
 
return 0;
}
