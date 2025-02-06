#include <iostream> 
using namespace std;

class circle{
public:
    circle(double in_aktina=1);
    ~circle();
    void set_aktina(double in_aktina);
    double get_aktina() const;
    double give_embado() const;
    circle operator*(double n){
        circle c;
        double aktina_new;
        aktina_new=n*(this->aktina);
        c.set_aktina(aktina_new);
        
        return c;
    }
    circle operator+(circle &right){
        circle c;
        double aktina_new;
        aktina_new = this->aktina + right.get_aktina();
        c.set_aktina(aktina_new);
    
        return c;
    }
private:
    double aktina;
};

int main()
{
    circle c1(10),c2,c3;
    double pososto;
    
    cout<<"To embadon toy prwtoy kykloy einai: "<<c1.give_embado()<<endl;
    
    cout<<"Poso thes na metavaleis tin aktina? ";
    cin>>pososto;
    c2=c1*pososto;
    cout<<"To embadon toy deyteroy kykloy einai: "<<c2.give_embado()<<endl;
    
    c3=c1+c2;
    cout<<"To embadon toy tritoy kykloy einai: "<<c3.give_embado()<<endl;
    
    return 0;
}

circle::circle(double in_aktina){
    aktina = in_aktina;
}
circle::~circle(){
}
void circle::set_aktina(double in_aktina){
    aktina=in_aktina;
}
double circle::get_aktina() const{
    return aktina;
}
double circle::give_embado() const{
    return 3.1415*aktina*aktina;
}
