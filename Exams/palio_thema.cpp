#include <iostream>
using namespace std;

class syntetagmenes {
  private:
    float x,y,z;
    
public:
    void set_x(float in_x);
    void set_y(float in_y);
    void set_z(float in_z);
    void set_x_y_z(float in_x, float in_y, float in_z);
    float get_x() const;
    float get_y() const;
    float get_z() const;
    friend ostream& operator<< (ostream &left, syntetagmenes &right);
    void metatopisi_kata_aksona(char aksonas, float metatopisi);

};
int main()
{
    syntetagmenes s;
    
    s.set_x(5.4);
    s.set_y(2.9);
    s.set_z(1.856);
    
    cout << s;
    
    s.set_x_y_z(5.45,1.236,0.5);
    
    cout << s;
    
    s.metatopisi_kata_aksona('x',5.5);
    
    cout << s;
    

    return 0;
}

void syntetagmenes::set_x(float in_x){
    x=in_x;
}
void syntetagmenes::set_y(float in_y){
    y=in_y;
}
void syntetagmenes::set_z(float in_z){
    z=in_z;
}
void syntetagmenes::set_x_y_z(float in_x, float in_y, float in_z){
    x=in_x;
    y=in_y;
    z=in_z;
}
float syntetagmenes::get_x() const{
    return x;
}
float syntetagmenes::get_y() const{
    return y;
}
float syntetagmenes::get_z() const{
    return z;
}
ostream& operator<< (ostream& left, syntetagmenes &right){
    left << "(" << right.x <<"," << right.y << "," << right.z << ")"<<endl;
    return left;
}
void syntetagmenes::metatopisi_kata_aksona(char aksonas, float metatopisi){
    switch(aksonas){
        case 'x':
            x+=metatopisi;
            break;
        case 'y':
            y+=metatopisi;
            break;
        case 'z':
            z+=metatopisi;
            break;
    }
}
    
    
