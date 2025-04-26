#include<iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
float division(int a, int b);
float modl(int a, int b);

int main()
{
    int choice;
    int num1, num2;

    do
    {
    
        cout<<"Arithmetic Operations : "<<endl;
        cout<<"1 : Addition"<<endl;           
        cout<<"2 : Subtraction"<<endl;
        cout<<"3 : Multiplication"<<endl;
        cout<<"4 : Division"<<endl;
        cout<<"5 : Modulas"<<endl;
        cout<<"0 : For Exit"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;


        cout<<"Enter num1 : ";
        cin>>num1;

        cout<<"Enter num2 : ";
        cin>>num2;    



        switch (choice)
        {
            case 1:
                cout<<"Result : "<<add(num1,num2)<<endl;
                break;
            case 2:
                cout<<"Result : "<<sub(num1,num2)<<endl;
                break;
            case 3:
                cout<<"Result : "<<multiply(num1,num2)<<endl;
                break;
            case 4:
                cout<<"Result : "<<division(num1,num2)<<endl;
                break;
            case 5:
                cout<<"Result : "<<modl(num1,num2)<<endl;
                break;
            case 0:
                cout<<"Closing The Program";
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
    }
     while (choice != 0);
}   




int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
float division(int a, int b){
    return a/b;
}
float modl(int a, int b){
    return a%b;
}