#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    float x;

    do {
        cout << "Please enter a number between [1,10]: ";
        cin >> x;
    } while (x>10 || x<1);

    x=x*10;
    int y= x;
    float result=x-y;

    int k;
    float FinalResult;

    float prechoice = result*10;
    int choice= (int) prechoice;

    switch(choice) {
        case 0: case 1: case 2: case 3: case 4:
            k=(int)x;
            FinalResult=(float)k/10;
            cout<< "The rounded number is: "<<FinalResult<<endl;
            break;
        case 5:case 6:case 7:case 8:case 9:
            k=(int)x +1;
            FinalResult=(float)k/10;
            cout<< "The rounded number is: "<<FinalResult<<endl;
            break;
    }
    return 0;
}
