// Askisi 10 from google drive
// todo operator overloading >> and <<
#include <iostream>
using namespace std;

class paralilogrammo {
public:
    paralilogrammo(double in_mikos = 0, double in_platos = 0);
    friend paralilogrammo operator+(paralilogrammo left, paralilogrammo right);
    bool operator==(paralilogrammo right);
    double mikos;
    double platos;
};

int main() {
    paralilogrammo p1(0,0) , p2(0,0) , p3(0,0);
    p3 = p1 + p2;
    
    cout<<"Mikos p3: "<<p3.mikos << endl << "Platos p3: "<<p3.platos <<endl ;
    
    bool check;
    check = p1==p2;
    if(check)
        cout << "Ta dyo paralilogramma einai idia" << endl ;
    else
        cout << "Ta dyo paralilogramma den einai idia" << endl ;
        
        
    return 0;
}

paralilogrammo::paralilogrammo(double in_mikos, double in_platos){
    mikos = in_mikos;
    platos = in_platos;
}

paralilogrammo operator+(paralilogrammo left, paralilogrammo right){
    paralilogrammo temp;
    temp.mikos = left.mikos + right.mikos; 
    temp.platos = left.platos + right.platos;
    return temp;
}
bool paralilogrammo::operator==(paralilogrammo right){
    return (this->mikos == right.mikos) && (this->platos == right.platos);
}
