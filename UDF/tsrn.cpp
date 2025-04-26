#include<iostream>
using namespace std;

// tsrn (take something , return nothing)

void addition(int a,int b){
    cout<<"addition of "<<a<<" and "<<b<<" is : "<< a+b <<endl;
}

int main()
{
    cout<<"start"<<endl;

    addition(50,50);
    addition(5,15);
    addition(29,21);


    cout<<"end"<<endl;
}