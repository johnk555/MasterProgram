//https://drive.google.com/file/d/19piMI7WAJthEOS_dP8enWLeemP46xeUA/view

#include <iostream>
using namespace std;

class imag{
    private:
        double x;
        double y;
    public:
        imag(double in_x=0, double in_y=0);
        ~imag();
        void set_x(double in_x);
        void set_y(double in_y);
        imag operator+(imag &im);
        double get_x() const;
        double get_y() const;
        friend ostream &operator<<(ostream &left, imag &right);
};

int main()
{
    imag i1(7,8);
    imag i2(15, 9);
    
    cout << " i1: " << i1;
    cout << " i2: " << i2;
    imag i3 = i1 + i2;
    
    cout << " i3: " << i3;

    return 0;
}

imag::imag(double in_x, double in_y){
    x=in_x;
    y=in_y;
}
imag::~imag(){
    cout << "Katastrofi migadikoy" << endl;
}
void imag::set_x(double in_x){
    x=in_x;
}
void imag::set_y(double in_y){
    y=in_y;
}

imag imag::operator+(imag &im){
    imag imaginary;
    imaginary.x = this->x + im.x;
    imaginary.y = this->y + im.y;
    
    return imaginary;
}

double imag::get_x() const{
    return x;
}
double imag::get_y() const{
    return y;
}

ostream &operator<<(ostream &left, imag &right){
    left << "To x  toy migadikoy einai " << right.get_x() << " kai to y einai " << right.get_y() << endl;
    return left;
}


