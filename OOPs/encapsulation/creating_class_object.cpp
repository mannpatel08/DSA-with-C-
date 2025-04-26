#include<iostream>
#include<string.h>
using namespace std;

class car{
    public:
        char brand[50];
        char car_name[50];
        char color[50];
        char model[50];
        int year_of_manufacture;
};

int main()
{
    car car1;

    cout<<"Enter car1 Details : "<<endl<<endl;

    cout<<"Enter Brand Name : ";           
    cin>>car1.brand;

    cout<<"Enter Car Name : ";              
    cin>>car1.car_name;

    cout<<"Enter Color of the Car : ";      
    cin>>car1.color;
    
    cout<<"Enter Model of the Car : ";      
    cin>>car1.model;

    
    
    cout<<"Enter Year of Maunfacturin : ";  
    cin>>car1.year_of_manufacture;


    cout<<endl<<"=====================================";


}