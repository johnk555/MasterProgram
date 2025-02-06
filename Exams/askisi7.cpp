#include <iostream> //askisi 6
using namespace std;

class circle{
public:
    circle(double in_aktina=1);
    ~circle();
    void set_aktina(double in_aktina);
    double give_embado() const;
private:
    double aktina;
};

int main()
{
    circle *p;
    p = new circle(5);
    if(!p)
        cout<<"Error allocating memory"<<endl;
        
    double timi_aktinas;
    
    cout<<"Dwse nea timi aktinas: ";
    cin>>timi_aktinas;
    p->set_aktina(timi_aktinas);
    
    cout<<"To embadon toy kykloy einai: "<<p->give_embado()<<endl;
    
    delete p;
    
    return 0;
}

circle::circle(double in_aktina){
    aktina = in_aktina;
}
circle::~circle(){
    cout<<"O KYKLOS KATASTRAFHKE"<<endl;
}
void circle::set_aktina(double in_aktina){
    aktina=in_aktina;
}
double circle::give_embado() const{
    return 3.1415*aktina*aktina;
}
