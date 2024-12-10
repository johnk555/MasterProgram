#include <iostream>
using namespace std;
#define N 4

typedef struct{
  float x;
  float y;
} imaginary;

void sum_imag (imaginary *a, imaginary *b, imaginary *sum);
void difference_imag (imaginary *a, imaginary *b, imaginary *difference);
void fill (imaginary *random);

int main()
{
    imaginary simeia [N];
    
    for(int i=0; i<N; i++){
        fill(&simeia[i]);
        cout<<endl;
    }
    
    sum_imag(&simeia[0],&simeia[1],&simeia[2]);
    difference_imag(&simeia[0],&simeia[1],&simeia[3]);
    
    cout<<"To athroisma toy a + b = "<<simeia[2].x <<" + j"<<simeia[2].y<<endl;
    cout<<"H diafora toy a + b = "<<simeia[3].x <<" + j"<<simeia[3].y<<endl;

    return 0;
}

void sum_imag (imaginary *a, imaginary *b, imaginary *sum){
    sum->x = a->x + b->x;
    sum->y = a->y + b->y;
}

void difference_imag (imaginary *a, imaginary *b, imaginary *difference){
    difference->x = a->x - b->x;
    difference->y = a->y - b->y;
}

void fill (imaginary *random){
    cout<<"Dwse to pragmatiko meros toy arithmoy: ";
    cin>>random->x;
    cout<<"Dwse to fantastiko meros toy arithmoy: ";
    cin>>random->y;
}
