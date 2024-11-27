#include <iostream>
using namespace std;

void hello(void);
float increase(float number);
float multiply(float x, float y);
float read(void);
void print(float x);

int main()
{
    hello();
    float t=0;
    float s,u;
    u = read();
    
    
    while(t<=10){
        s = multiply(u,t);
        cout<<"t="<<t<<endl;
        
        cout<<" S =";
        print(s);
        t = increase(t);
    }
    return 0;
}
void hello(void){
    cout<<"Welcome to my program"<<endl;
}
float increase(float number){
    return number+=0.1;
}
float multiply(float x, float y){
    return x*y;
}
float read(void){
    float num;
    cout<<"Dwse taxitita: ";
    cin>>num;
    return num;
}

void print(float x){
    cout<<x<<endl;
}

