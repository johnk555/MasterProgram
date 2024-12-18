#include <iostream>

struct circle{
  float aktina;
  float perimetros(){
      return 2*3.1415*aktina;
  }
  void scale(float multiply){
      aktina = multiply*aktina;
  }
  void display();
  void display(float aktina1);
  void display(float aktina1, float aktina2);
  
};

int main()
{
    circle c1;
    circle *ptr;
    ptr=&c1;
    
    ptr->aktina = 5.54;
    
    ptr->display();
    ptr->display(15);
    ptr->scale(5);
    ptr->display(4,3);
    
    std::cout<<"I perimetros toy kykloy einai: "<<ptr->perimetros();

    return 0;
}

void circle::display(){
      std::cout<<"Den edwses timi!"<<std::endl;
  }
void circle::display(float aktina1){
      aktina = aktina1;
      std::cout<<"I timi tis aktina einai: "<<aktina<<std::endl;
  }
void circle::display(float aktina1, float aktina2){
      aktina=aktina1+aktina2;
      std::cout<<"I timi tis aktina einai: "<<aktina<<std::endl;
  }
