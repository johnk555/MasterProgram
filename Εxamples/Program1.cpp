#include <iostream>

#include <cmath>

using namespace std;


int main()
{
    
float a,b,c;
    
cout<<"Dwse tous syntelestes ax2 + bx +c = 0"<<endl;
    
cout<<"Dwse a: ";
    
cin >> a;
    
cout<<"Dwse b: ";
    
cin >> b;
    
cout<<"Dwse c: ";
    
cin >> c;
    
    
//D gia diakrinousa
    
float D = b*b - 4*a*c;
    
    
if(D >= 0){
    
double result1 = (-b-sqrt((double)D))/(2*a);
    
double result2 = (-b+sqrt((double)D))/(2*a);
    
    
cout<<"Oi lyseis tis eksiswsis einai: "<<result1 <<" , " <<result2 <<endl;
    
}
    
else if(D == 0)
        
cout<<"H lysi einai: "<<result1;
    
else
        
cout<<"H eksiswsi den exei pragmatikes rizes!";

    

return 0;

}
