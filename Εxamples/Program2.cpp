#include <iostream>

#include <cmath>
using namespace std;



int main()
{
  
  
int amount;
 
  
   
do{
    
cout<<"Dwse to poso twn xrimatwn: ";
    
cin>>amount;
    
}while(amount<=0 || (amount%50!=0 && amount%20!=0 && amount%10!=0));



    
    
int num_50 = (float) amount/50;
    
int num_20 = (float) (amount- 50*num_50)/20;
    
int num_10 = (float) (amount - 50*num_50 - 20*num_20)/10;




    
cout<<"50eura: "<<num_50<<endl<<"20eura: "<<num_20<<endl<<"10eura: "<<num_10;


    


return 0;
}
