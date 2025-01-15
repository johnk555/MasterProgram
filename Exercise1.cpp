#include <iostream>
using namespace std;

#define PI 3.14159265359

class circle{
public:
    double get_perimetros() const;
    circle();
    circle(double in_aktina);
    ~circle();
protected:
    double aktina;    
};

class kylindros : public circle {
private:
    double height;
    double pyknotita_ylikoy;
public:
    double get_maza() const;
    kylindros(double in_aktina, double in_height=1, double in_pyknotita_ylikoy=1);
    ~kylindros();
};

int main()
{
    kylindros kylin1(20, 5, 2);
    
    cout<<"H perimetros tou kylin1 einai: "<<kylin1.get_perimetros()<<endl;
    cout<<"H perimetros tou c2 einai: "<<kylin1.get_maza()<<endl;

    return 0;
}
double circle::get_perimetros() const{
    return 2*PI*aktina;
}
circle::circle(){
    aktina = 1;
}
circle::circle(double in_aktina){
    aktina = in_aktina;
}
circle::~circle(){
    cout<<"KATASTROFHKYKLOY"<<endl;
}

double kylindros::get_maza() const{
    double ogkos = height*(PI*aktina*aktina);
    return ogkos*pyknotita_ylikoy;
}
kylindros::kylindros(double in_aktina, double in_height, double in_pyknotita_ylikoy):circle(in_aktina){
    height = in_height;
    pyknotita_ylikoy = in_pyknotita_ylikoy;
}
kylindros::~kylindros(){
    cout<<"KATASTROFH KYLINDROU"<<endl;
}

