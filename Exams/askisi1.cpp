#include <iostream>
#define PI 3.1415
using namespace std;

class circle{
private:
    double aktina;

public:
    double get_perimetros() const;
    circle(double in_aktina=1);
    ~circle();
};
int main()
{
    circle kyklos1,kyklos2(4);
    
    cout << "Perimetros toy prwtoy kykloy: " <<kyklos1.get_perimetros() <<endl;
    
    cout << "Perimetros toy deyteroy kykloy: " <<kyklos2.get_perimetros() <<endl;

    return 0;
}

double circle::get_perimetros() const{
    return 2*PI*aktina;
}

circle::circle(double in_aktina){
    aktina = in_aktina;
}

circle::~circle(){
    cout << "KATASTROFIKYKLOY" << endl;
}
