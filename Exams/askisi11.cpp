#include <iostream> 
#include <string>
using namespace std;

class circle{
public:
    circle(double in_aktina=0);
    double get_aktina() const;
    circle operator++(){
        circle c;
        c.aktina = ++(this->aktina);
        return c;
    }
    
    double aktina;   
};

int main()
{
    circle c1(5),c2;
    
    c2=++c1;
    
    cout<<"Aktina prwtoy kykloy: "<<c1.get_aktina()<<endl;
    cout<<"Aktina deyteroy kykloy: "<<c2.get_aktina()<<endl;
    
    return 0;
}

circle::circle(double in_aktina){
    aktina=in_aktina;
}

double circle::get_aktina() const{
    return aktina;
}
