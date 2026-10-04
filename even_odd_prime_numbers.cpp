#include<iostream>
using namespace std;

int main()
{
    //A program to show even and odd numbers available in the array.

    int numbers[10]= {1,2,3,4,5,6,7,8,9,10};

    //To check for even numbers.

    cout<<"The even numbers are: ";
    for(int i=0; i<10; i++)
    {
        if(numbers[i]%2 == 0)
        {
            cout<<numbers[i]<<" ";
        }

    }
    cout<<endl;

    cout<<"The odd numbers are: ";
    for(int j=0; j<10; j++)
    {
        if(numbers[j]%2 !=0)
        {
            cout<<numbers[j]<<" ";
        }

    }

    cout<<endl;

    cout<<"The prime numbers are: ";
    for(int k=0; k<10; k++)
    {
        if( numbers[k] == 2 || numbers[k] == 3 || numbers[k] == 5 || numbers[k] == 7)
        {
            cout<<numbers[k]<<" ";
        }
    }

    return 0;
}
