#include <iostream>
using namespace std;

class circle{
public:
    circle();
    ~circle();
    void set_aktina(double in_aktina);
    double give_embadon() const;
private:
    double aktina;
};

int main()
{
    circle array[4];
    double akt;
    for(int i=0; i<4; i++){
        cout << "Dwse timi gia tin aktina: ";
        cin >> akt;
        array[i].set_aktina(akt);
    }
    
    for(int i=0; i<4; i++){
        cout << "Embadon kykloy " << i+1 << ": " << array[i].give_embadon()<<endl;
    }
    
    return 0;
}

circle::circle(){
    aktina=1;
}
circle::~circle(){
    
}
void circle::set_aktina(double in_aktina){
    aktina = in_aktina;
}

double circle::give_embadon() const{
    return 3.1415*aktina*aktina;
}


