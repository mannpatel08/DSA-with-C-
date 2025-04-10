#include<iostream>
using namespace std;

int main()
{
    int array[5];
    int size = sizeof(array) / sizeof(array[0]);

    // create

    for (int i = 0; i < size; i++)
    {
        cout<<"array["<<i<<"] : ";
        cin>>array[i];
    }

    // read

    for (int i = 0; i < size; i++)
    {
        cout<<"array["<<i<<"] : "<<array[i]<<endl;
    }
    
    // update

    int index;
    int value;

    cout<<"Enter the index you want to update : ";
    cin>>index;

    cout<<"Enter the updated value : ";
    cin>>value;

    array[index] = value;

    // read

     for (int i = 0; i < size; i++)
    {
        cout<<"array["<<i<<"] : "<<array[i]<<endl;
    }

    // delete

    int delete_index;

    cout<<"Enter te index you want to delete : ";
    cin>>delete_index;

    for (int i = delete_index; i < size; i++)
    {
        array[i] = array[i+1];
    }

    // read

      for (int i = 0; i < size-1; i++)
    {
        cout<<"array["<<i<<"] : "<<array[i]<<endl;
    }
    

}