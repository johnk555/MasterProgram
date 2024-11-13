#include <iostream>
#include <cmath>
using namespace std;

double d(double t);

int main()
{
    double arr[100];
    int j=0;
    for(double i=0;i<=20; i+=0.25){
        arr[j] = d(i);
        cout<<arr[j]<<endl;
        j++;
    }

    return 0;
}

double d(double t){
    return 2*pow(t-50,4)-pow(t-50,2) +1;
}
