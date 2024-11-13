#include <iostream>
using namespace std;

int main()
{
    int arr[5],i=0,sum=0;
    float avg;
    
    while(1)
    {
        if (i==5)
            break;
            
            
        cout<<"Dwse to "<<i<<" stoixeio: ";
        cin >>arr[i];
        
        if(arr[i]<0)
            {
                cout<<"Lathos eisodos"<<endl;
                arr[i]=0;
                continue;
            }
        sum+=arr[i];
        
        i++;
    }
    avg= (float)sum/i;
    cout<<"O mesos oros ton arithmwn einai: "<<avg<<endl<<endl;
    
    for(i=0; i<5; i++)
    {
        if(arr[i]>avg)
            cout << "To stoixeio "<<i<<" einai megalytero tou mesou orou!"<<endl;
    }
    return 0;
}
