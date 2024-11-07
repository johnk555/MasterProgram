#include <iostream>
#include <cmath>
using namespace std;

int main(){

int number,i;
    
cout<<"Dwse arithmo: ";
cin>>number;

for(i=0; i<number; i++){
      
if(i*(i+1)>=number)
  break;
}  
cout<<"Oi dyo diadoxikoi akeraioi einai: "<<i<<" , "<<i+1<<endl;

return 0;
}
