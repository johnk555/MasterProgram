#include <iostream> 
#include <string>
using namespace std;

class parallilogrammo{
public:
    parallilogrammo(double in_mikos=0, double in_platos=0);
    
    parallilogrammo operator+(parallilogrammo& right){
        double new_mikos,new_platos;
        new_mikos = this->mikos + right.mikos;
        new_platos = this->platos + right.platos;
        parallilogrammo p(new_mikos, new_platos);
        
        return p;
    }
    
    bool operator==(parallilogrammo& right){
        if(!(this->mikos==right.mikos))
            return false;
        
        if(!(this->platos==right.platos))
            return false;
            
        return true;
    }
    
    friend istream& operator>>(istream& in, parallilogrammo& p);
    friend ostream& operator<<(ostream& left, parallilogrammo& p);
private:
    double mikos;
    double platos;
};

int main()
{
    parallilogrammo p1,p2,p3;
    
    cout<<"Dwse diastaseis gia to 1o kai 2o parallilogrammo"<<endl;
    cin>>p1;
    cin>>p2;
    
    p3=p1+p2;
    cout<<p3;
    
    if(p1==p2)
        cout<<"Ta dyo parallilogramma einai idia"<<endl;
    else
        cout<<"Ta dyo parallilogramma den einai idia"<<endl;
    
    return 0;
}

parallilogrammo::parallilogrammo(double in_mikos, double in_platos){
    mikos = in_mikos;
    platos = in_platos;
}

istream& operator>>(istream& in, parallilogrammo& p){
    char c;
    cout << "Dwse mikos kai platos: ";
    in >> p.mikos >> c >> p.platos;
    return in;
}

ostream& operator<<(ostream& left, parallilogrammo& p){
    left<< p.mikos <<" x "<<p.platos<<endl;
    return left;
}
