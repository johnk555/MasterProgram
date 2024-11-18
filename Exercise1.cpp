#include <iostream>
using namespace std;

void func1(int city1,int city2);
void func2(int choice);
void func3(void);
void func4(int number);


int array[6][6]={        {0   , 501 , 217 , 354 , 703 , 328 },
                         {501 , 0   , 467 , 152 , 205 , 208 },
                         {217 , 467 , 0   , 337 , 670 , 314 },
                         {354 , 152 , 337 , 0   , 354 , 64  },
                         {703 , 205 , 670 , 354 , 0   , 411 },
                         {328 , 208 , 314 , 64 , 411  , 0   }
        
    };

int main()
{
    
    int choice;
    cout<<"Menou epilogwn"<<endl<<"--------------"<<endl;
    cout<<"1-Apostasi dyo polewn"<<endl;
    cout<<"2-Mesi apostasi mias polis apo tis ypoloipes"<<endl;
    cout<<"3-Mesi xiliometriki apostasi olwn twn polewn apo oles tis ypoloipes"<<endl;
    cout<<"4-Dwse arithmo se xiliometra gia na soy pw poies apostaseis einai megalyteres"<<endl<<endl;
    cin>>choice;
    
    switch(choice){
        case 1:
            int city1;
            int city2;
            cout<<endl;
            cout<<"Dwse poli-1:";
            cin>>city1;
            cout<<"Dwse poli-2:";
            cin>>city2;
            func1(city1,city2);
            break;
            
        case 2:
            int city;
            cout<<endl;
            cout<<"Dwse poli: ";
            cin>>city;
            func2(city);
            break;
            
        case 3:
            cout<<endl;
            func3();
            break;
            
        case 4:
            cout<<endl;
            int number;
            cout<<"Dwse arithmo: ";
            cin>>number;
            func4(number);
            break;
    }

    return 0;
}

void func1(int city1,int city2)
{
    cout<<"I apostasi twn dyo polewn einai: "<<array[city1][city2]<<endl;
}
void func2(int choice)
{
    int i,sum=0;
    switch(choice){
        case 0:
            for(i=0; i<6; i++)
                sum+=array[0][i];
                
            cout<<"H mesi apostasi einai: "<<(float) sum/6<<endl;
            break;
        case 1:
            for(i=0; i<6; i++)
                sum+=array[1][i];
                
            cout<<"H mesi apostasi einai: "<<(float) sum/6<<endl;
            break;
        case 2:
            for(i=0; i<6; i++)
                sum+=array[2][i];
                
            cout<<"H mesi apostasi einai: "<<(float) sum/6<<endl;
            break;
        case 3:
            for(i=0; i<6; i++)
                sum+=array[3][i];
                
            cout<<"H mesi apostasi einai: "<<(float) sum/6<<endl;
            break;
        case 4:
            for(i=0; i<6; i++)
                sum+=array[4][i];
                
            cout<<"H mesi apostasi einai: "<<(float) sum/6<<endl;
            break;
        case 5:
            for(i=0; i<6; i++)
                sum+=array[5][i];
                
            cout<<"H mesi apostasi einai: "<<(float) sum/6<<endl;
            break;
    }
}

void func3(void){
    
    int i,j,sum=0;
    
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            sum+=array[i][j];
        }
        cout<<"I mesi apostasis tis polis "<<i<<" apo tis ypoloipes einai: "<<(float)sum/6<<endl;
        sum=0;
    }
}

void func4(int number){
    int i,j;
    
    for(i=0; i<6; i++){
        for(j=0; j<i; j++){
            if(array[i][j] > number)
                cout<<"I apostasis tis polis "<<i<<" apo tin poli "<<j<<" einai megalyteri apo aytin poy edwses "<<endl;
        }
    }
}

