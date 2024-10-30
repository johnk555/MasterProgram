#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    float x;

    do {
        cout << "Please enter a number between [1,10]: ";
        cin >> x;
    } while (x>10 || x<1);
                                    // for example: 5.39
    x=x*10;                         // 53.9
    int y= x;                       // 53
    float result=x-y;               // 53.9-53 =0.9

    if(result>=0.5) {
        int k=(int)x +1;                    // 54
        float FinalResult=(float)k/10;      // 5.4
        cout<< "The rounded number is: "<<FinalResult<<endl;
    }
    else {                                  // if x=5.33 & x=x*10=53.3 & result = 0.3
        int k=(int)x;                       // k=53
        float FinalResult=(float)k/10;      // FinalResult = 5.3
        cout<< "The rounded number is: "<<FinalResult<<endl;
    }
    return 0;
}
