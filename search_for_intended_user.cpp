#include<iostream>
using namespace std;

int main()
{
    string users[10]={"Abdul","Ally","Aboubakar","Bahati","Brian","Baraka","Caren","Cristiano","David","Dauda"};

    int start,endPoint;

    cout<<"The following are the available users: "<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<i+1<<"] "<<users[i]<<endl;
    }

    cout<<"Choose users you want from a certain range( Beginning/End or in between"<<endl;
    cout<<"Starting point: "<<endl;
    cin>>start;
    cout<<"Ending point: "<<endl;
    cin>>endPoint;

    cout<<"The users are: "<<endl;

    for(int j=start-1;j<endPoint;j++)
    {
        cout<<j+1<<"] "<<users[j]<<endl;
    }




    return 0;
}
