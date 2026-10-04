#include<iostream>
using namespace std;

int main()
{
    //A program that reads users information..

    int no_users;

    cout<<"Enter the number of users available in the area."<<endl;
    cin>>no_users;

    string address[no_users], name[no_users];

    cout<<"Enter the name and regional address of each user:"<<endl;

    for(int i=0;i<no_users;i++)
    {
        cout<<"Name of User["<<i+1<<"]:";
        cin>>name[i];

        cin.ignore();

        cout<<"Address of "<<name[i]<<":";
        getline(cin,address[i]);
    }

    for(int j=0;j<no_users;j++)
    {
        cout<<"User["<<j+1<<"]:"<<name[j]<<endl;
        cout<<"Regional Address of "<<name[j]<<" is "<<address[j]<<endl;

    }
}
