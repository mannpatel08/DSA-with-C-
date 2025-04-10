#include<iostream>
using namespace std;

int main()
{

/*
    CRUD  :
        C : Create
        R : Read / Retrive (Display)
        U : Update
        D : delete

*/

    int size = 5;   //size-1
    int array[size];
    int index;
    int update_value;
    int delete_value;

    cout<<"Enter Values : "<<endl;

// Dynamic - user input (create)

    for (int i = 0; i < size; i++)
    {
        cout<<"array["<<i<<"] : ";
        cin>>array[i];
    }

    cout<<"Array before Update"<<endl;

// Read

    for (int i = 0; i < size; i++)
    {
        cout<<"array["<<i<<"] : "<<array[i]<<endl;
    }

// //  Update

    cout<<"Array after Update"<<endl;

    cout<<"Enter Index that you want to Update: ";
    cin>>index;

    cout<<"Enter The Updated Value: ";
    cin>>update_value;

    array[index] = update_value;

// Reread after Update

    for (int i = 0; i < size; i++)
    {
        cout<<"array["<<i<<"] : "<<array[i]<<endl;
    }

// //  Delete

//     cout<<"Enter Index you wnat to Delete : ";
//     cin>>delete_value;

//     for (int i = delete_value; i < size; i++)
//     {
//         array[i] = array[i+1];
//     }
    
// // Reread after Delete

//     for (int i = 0; i < size-1; i++)
//     {
//         cout<<"array["<<i<<"] : "<<array[i]<<endl;
//     }
    
    

    

    


}