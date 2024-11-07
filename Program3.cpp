#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int bit;
int arr[5];
int result=0;
 
for(int i=0; i<5; i++){      
cout<<"Dwse to "<<i+1<<"-o bit: ";
        
cin>>arr[i];
        
result += arr[i]*pow(2,i);    
}
cout<<result;
 
return 0;
}
