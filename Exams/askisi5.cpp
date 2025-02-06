#include <iostream>
using namespace std;

int main()
{
    double* p;
    
    int arithmos;
    cout<<"Posous arithmoys theleis na prostheseis? ";
    cin>>arithmos;
    
    p = new double[arithmos];
    
    if(!p){
        cout<<"Error allocating memory";
    }
    for(int i=0; i<arithmos; i++){
        cout << "Dwse arithmo: ";
        cin>>p[i];
    }
    
    double sum=0;
    
    for(int i=0; i<arithmos; i++){
        sum+=p[i];
    }
    
    cout<<"To athroisma twn arithmwn einai: "<<sum;
    
    delete[] p;
    
    return 0;
}

