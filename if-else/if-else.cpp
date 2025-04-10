#include<iostream>
using namespace std;

int main()
{
    int age = 11;

    if(age > 18){
        cout<<"Person is Elegable for Voting";
    }
    else if (age < 18)
    {
        cout<<"Person is not Elegable for Voting";
    }
    else if (age > 0)
    {
        cout<<"Invalid Age";
    }
    else if (age > 120)
    {
        cout<<"Invalid Age";
    }
    
    
}