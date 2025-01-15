#include <iostream>
using namespace std;

class circle{
public:
    circle(double in_aktina = 1);
    ~circle();
    void set_aktina(double in_aktina);
    double give_embadon() const;
    circle operator*(double pososto);
    circle operator+(circle c2);
    friend ostream& operator<<(ostream& left, circle c);
    double aktina;
};

int main()
{
    circle c1(5);
    
    cout << c1.give_embadon();
    cout << c1 * 2 << endl;
    
    return 0;
}

circle::circle(double in_aktina){
    aktina = in_aktina;
}
circle::~circle(){
    cout<<"O kyklos katastrafike"<<endl;
}
void circle::set_aktina(double in_aktina){
    aktina = in_aktina;
}
double circle::give_embadon() const{
    return 3.14*aktina*aktina;
}

circle circle::operator*(double pososto){
    circle cTemp;
    cTemp.aktina = this->aktina * pososto;
    return cTemp;
}

circle circle::operator+(circle c2){
    circle cTemp;
    cTemp.aktina = this->aktina +c2.aktina;
    return cTemp;
}

ostream& operator<<(iostream& left, circle c){
    left << "i aktina toy kykloy einai: " << c.aktina << " kai to embadon einai: " << c.give_embadon() <<endl;
    return left;
}
