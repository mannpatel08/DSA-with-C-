#include<iostream>
using namespace std;

class car
{
    private:
        char brand[50];
        char car_name[50];
        char color[50];
        int year;

    public:

        void setdata(){
            cout<<"Enter Brand Name : ";  cin>>brand;
            cout<<"Enter Car Name : ";  cin>>car_name;
            cout<<"Enter Color of the Car : ";  cin>>color;
            cout<<"Enter Year of Manufacturing : ";  cin>>year;
        }

        void getdata(){
            cout<<"Brand : "<<brand<<", Car Name : "<<car_name<<", Color of Car : "<<color<<", Year of Manufacturing : "<<year;
        }

};

int main()
{
    car car1;
    car car2;

    car1.setdata();
    car2.setdata();

    cout<<endl<<"=================================================================="<<endl;

    car1.getdata();
    cout<<endl;
    car2.getdata();
    
}