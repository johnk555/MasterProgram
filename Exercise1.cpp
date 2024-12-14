#include <iostream>
using namespace std;

class Circle {
    public:
        void set_radius(double in_radius);
        double give_circle_area();

    private:
        double radius=0;
};

int main() {
    Circle circle1;
    double r1;
    double area1;

    cout<<"Give radius: ";
    cin >> r1;

    circle1.set_radius(r1);
    area1 = circle1.give_circle_area();

    cout<< "The area of the circle with radius "<<r1<<" is: "<<area1;


    return 0;
}

void Circle::set_radius(double in_radius) {
    radius = in_radius;
}
double Circle::give_circle_area() {
    return 3.1415926*radius*radius;
}
