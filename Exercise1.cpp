//askisi1 gia xrisoygenna
#include <iostream>
#include <cstring>
using namespace std;
class point{
    private:
    float x,y,z;
    
    public:
    void set_x(float in_x);
    void set_y(float in_y);
    void set_z(float in_z);
    void set_x_y_z(float in_x, float in_y, float in_z);
    float get_x();
    float get_y();
    float get_z();
    void display();
    
    void metakinisi(char* c, float variable);

};


int main()
{
    point p1;
    p1.set_x_y_z(4,6,0);
    cout<<"x="<<p1.get_x()<<endl;
    p1.display();
    
    char c[5] = "y";
    p1.metakinisi(c,5);
    
    p1.display();

    return 0;
}
void point::set_x(float in_x){
    x=in_x;
}
void point::set_y(float in_y){
    y=in_y;
}
void point::set_z(float in_z){
    z=in_z;
}
void point::set_x_y_z(float in_x, float in_y, float in_z){
    x=in_x;
    y=in_y;
    z=in_z;
}
float point::get_x(){
    return x;
}
float point::get_y(){
    return y;
}
float point::get_z(){
    return z;
}
void point::display(){
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
void point::metakinisi(char* c, float variable){
    if ((strcmp(c,"x"))==0)
        x=x+variable;
    else if ((strcmp(c,"y"))==0)
        y=y+variable;
    else if ((strcmp(c,"z"))==0)
        z=z+variable;
    else
        cout<<"Error"<<endl;
}

