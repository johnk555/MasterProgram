#include <iostream> //askisi 6
using namespace std;

class polypleuro{
public:
    polypleuro();
    ~polypleuro();
    void set_pleures(int in_plithos_pleurwn);
    void set_mikos_pleuras(int pleura, double mikos_pleur);
    double get_perimetros() const;
//private:
    int plithos_pleurwn;
    double *mikos_pleuras;
};

int main()
{
    polypleuro p;
    int pl_pleyrwn;
    double mikos_pleuras_user=0;
    
    cout<<"Poses pleures thes? ";
    cin>>pl_pleyrwn;
    
    p.set_pleures(pl_pleyrwn);
    
    
    for(int i=0; i<pl_pleyrwn; i++){
        cout<<"Dwse to mikos tis pleuras "<<i+1<<": ";
        cin>>mikos_pleuras_user;
        p.set_mikos_pleuras(i,mikos_pleuras_user);
    }
    
    cout << "To polypleuro poy kataskeyases exei perimetro: "<<p.get_perimetros();
    
    return 0;
}

polypleuro::polypleuro(){
    mikos_pleuras = nullptr;
    plithos_pleurwn = 0;
}

polypleuro::~polypleuro(){
    delete[] mikos_pleuras;
}

void polypleuro::set_pleures(int in_plithos_pleurwn){
    plithos_pleurwn=in_plithos_pleurwn;
    
    mikos_pleuras = new double[plithos_pleurwn];
    if(!mikos_pleuras){
        cout<<"Error allocating memory"<<endl;
    }
}

void polypleuro::set_mikos_pleuras(int pleura, double mikos_pleur){
    mikos_pleuras[pleura] = mikos_pleur;
}

double polypleuro::get_perimetros() const{
    double sum=0;
    for(int i=0; i<plithos_pleurwn; i++){
        sum+=mikos_pleuras[i];
    }
    
    return sum;
}
