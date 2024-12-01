#include <iostream>
using namespace std;

int func1(int n);
int func2(int n);
int func3(int n);
int multiply(int a, int b);
double divide(int a, int b);
double sum(double number,double *result);
double athroisma=0.0;

int main() {
    double result=0.0;
    int arithmitis=0;

    for (int n=6; ; n++) {

        arithmitis = multiply(func1(n),func2(n));
        result = divide(arithmitis,func3(n));

        if (sum(result,&athroisma)==5)
            break;
    }
    cout <<"To athroisma tis seiras einai: "<<athroisma<<endl;
    return 0;
}

int func1(int n) {
    return n-1;
}
int func2(int n) {
    return n+3;
}
int func3(int n) {
    return n-5;
}
int multiply(int a, int b) {
    return a*b;
}
double divide(int a, int b) {
    return (double)(a)/b;
}
double sum(double number,double *result) {
    if(*result + number >500)
        return 5;

    *result+=number;
    return *result;
}
