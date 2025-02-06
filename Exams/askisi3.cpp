#include <iostream>
using namespace std;

class circle{
public:
    double get_perimetros() const;
    circle(double in_aktina=1);
    ~circle();
protected:
    double aktina;
};

class kylindros : public circle{
private:
    double ipsos;
    double piknotita;
    
public:
    double get_maza() const;
    kylindros(double in_aktina, double in_ipsos=1, double in_piknotita=1):circle(in_aktina){
        ipsos = in_ipsos;
        piknotita = in_piknotita;
    }
    ~kylindros();
};

int main()
{
    kylindros kil(20,5,2);
    
    cout << "Perimetros basis: " <<kil.get_perimetros()<<endl;
    
    cout << "Maza kylindrou: " << kil.get_maza()<<endl;
    return 0;
}

double circle::get_perimetros() const{
    return 2*3.1415*aktina;
}
circle::circle(double in_aktina){
    aktina = in_aktina;
}
circle::~circle(){
    cout<<"KATASTROFHKYKLOY"<<endl;
}
double kylindros::get_maza() const{
    double ogkos=3.1415*aktina*aktina*ipsos;
    return ogkos*piknotita;
}
kylindros::~kylindros(){
    cout<<"KATASTROFHKYLINDROU"<<endl;
}
