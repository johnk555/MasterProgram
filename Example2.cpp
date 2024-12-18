#include <iostream>

class box{
    public:
    float platos;
    float mhkos;
    float ypsos;
    float ogkos;
    
    void ypologismos_ogkou();
    void display();
};

class Kalimera: public box{
    public:
    void print();
    
};
class Third: public Kalimera{
    public:
    
};
int main()
{
    Third d1;
    d1.print();

    return 0;
}

void box::ypologismos_ogkou(){
    ogkos = platos*mhkos*ypsos;
}

void box::display(){
    std::cout<<"O ogkos toy koytioy einai: "<<ogkos;
}
void Kalimera::print(){
    std::cout<<"Kalimera"<<std::endl;
}
