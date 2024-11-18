#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int a,b;
    cout<<"Dwse tis grammes poy theleis na exoyn oi dyo pinakes: ";
    cin>>a;
    cout<<"Dwse tis stiles poy theleis na exoyn oi dyo pinakes: ";
    cin>>b;
    int array1[a][b];
    int array2[a][b];
    cout<<endl;
    
    //Arxikopoiisi prwtoy pinaka
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cout<<"Dwse to stoixeio ["<<i<<"]["<<j<<"] toy prwtoy pinaka: ";
            cin>>array1[i][j];
        }
    }
    cout<<endl;
    
    //Arxikopoiisi deyteroy pinaka
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cout<<"Dwse to stoixeio ["<<i<<"]["<<j<<"] toy deyteroy pinaka: ";
            cin>>array2[i][j];
        }
    }
    cout<<endl;
    
    //Prosthesi pinakwn
    int finalArray[a][b];
    cout<<"O pinakas poy einai i athroisi twn dyo pinakwn einai: "<<endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            finalArray[i][j] = array1[i][j] + array2[i][j];
            cout<<"\t"<<finalArray[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
