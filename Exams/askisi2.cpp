#include <iostream>
using namespace std;

class tetragono{
protected:
    double pleura;
public:
    double get_perimetros();
    tetragono(double in_pleura=1);
    ~tetragono();
};

class orthogonio_parallilepipedo : public tetragono{
private:
    double ipsos;
public:
    double get_ogkos();
    orthogonio_parallilepipedo(double in_pleura, double in_ipsos=1) : tetragono(in_pleura){
        ipsos = in_ipsos;
    }
    ~orthogonio_parallilepipedo();
};

int main()
{
    orthogonio_parallilepipedo orth_paral(5,10);
    
    cout << "Perimetros: " << orth_paral.get_perimetros()<<endl;\
    cout << "Ogkos: " << orth_paral.get_ogkos()<<endl;
    
    return 0;
}

double tetragono::get_perimetros(){
    return 4*pleura;
}
tetragono::tetragono(double in_pleura){
    pleura = in_pleura;
}
tetragono::~tetragono(){
    cout<<"KATASTROFHTETRAGONOU"<<endl;
}
double orthogonio_parallilepipedo::get_ogkos(){
    return pleura*pleura*ipsos;
}
orthogonio_parallilepipedo::~orthogonio_parallilepipedo(){
    cout<<"KATASTROFHPARALLHLEPIPEDOU"<<endl;
}
