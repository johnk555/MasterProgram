#include <iostream>

struct circle{
  float aktina;
  float perimetros(){
      return 2*3.1415*aktina;
  }
  void scale(float multiply){
      aktina = multiply*aktina;
  }
  void display(){
      std::cout<<"I timi tis aktina einai: "<<aktina<<std::endl;
  }
};

float perimetros(float aktina);

int main()
{
    circle c1;
    circle *ptr;
    ptr=&c1;
    
    ptr->aktina = 5.54;
    
    ptr->display();
    ptr->scale(5);
    ptr->display();
    
    std::cout<<"I perimetros toy kykloy einai: "<<ptr->perimetros();

    return 0;
}
