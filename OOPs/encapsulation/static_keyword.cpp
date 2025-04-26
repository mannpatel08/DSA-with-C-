#include<iostream>
using namespace std;

class studant
{
    private:
        int grid;
        char studant_name[50];
        char course[50];
        int age;
        static char school[50];


    public:

        void setdata(){
            cout<<"Enter Studant grid : ";   cin>>this->grid;
            cout<<"Enter Studant Name : ";  cin>>this->studant_name;
            cout<<"Enter Studant Course : ";  cin>>this->course;
            cout<<"Enter Studant Age : ";  cin>>this->age;
        }

        void getdata(){
            cout<<"grid : " << this->grid
            <<", Studant Name : " << this->studant_name
            <<", Course : " << this->course
            <<", Age of Studant : " << this->age
            <<", School : "<< this->school << endl;
        }

};

char studant :: school[50] = "KV No1 Surat";

int main()
{
    int n;

    cout<<"Enter how many Studants are there : ";  
    cin>>n;

    studant studants[n];

    for (int i = 0; i < n; i++)
    {
        studants[i].setdata();
    }
    
    cout<<endl<<"=========================================================================================="<<endl<<endl;

    for (int i = 0; i < n; i++)
    {
        studants[i].getdata();
    }
    
    
}