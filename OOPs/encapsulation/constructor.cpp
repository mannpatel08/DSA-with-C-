#include<iostream>
using namespace std;

class studant
{
    private: 
        int grid;
        char name[50];
        int age;
        static char school[50];

    public:
        // Default Constructor
        studant()
        {
            cout<<"Enter Your Grid : ";  cin>>this->grid;
            cout<<"Enter Your Name : ";  cin>>this->name;
            cout<<"Enter Your Age : ";  cin>>this->age;
        }


        // Destructor
        ~studant()
        {
            cout<<"Thanks for Filling the Information"<<endl;
        }

        void getData()
        {
            cout<<"Grid : "<<this->grid
            <<", Name : "<<this->name
            <<", Age : "<<this->age
            <<", School : "<<this->school<<endl;
        }


};

char studant :: school[50] = "KV No1 Surat";

int main()
{
    studant s1;
    studant s2;
    studant s3;
    
    s1.getData();
    s2.getData();
    s3.getData();

}