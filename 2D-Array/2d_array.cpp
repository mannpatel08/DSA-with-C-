#include<iostream>
using namespace std;

int main()
{
    int row_size, col_size;

    cout<<"Enter Row Size : ";
    cin>>row_size;

    cout<<"Enter Col Size : ";
    cin>>col_size;

    int array[row_size][col_size];  
    
    int i, j;


// To create
    cout<<"Enter Array Elements : "<<endl;
    for (i = 0; i < row_size; i++)
    {
        for ( j = 0; j < col_size; j++)
        {
            cout<<"array["<<i<<"]["<<j<<"] : ";
            cin>>array[i][j];
        }
        
    }

// To read
    cout<<"Array is : "<<endl;
    for (i = 0; i < row_size; i++)
    {
        for ( j = 0; j < col_size; j++)
        {
            cout<< array[i][j]<<"   ";
        }
        cout<<endl;
    }

    
// print diagonal elements
    cout<<"print broundry elements : "<<endl;

    for (i = 0; i < row_size; i++)
    {
        for ( j = 0; j < col_size; j++)
        {
            if (i==j)
            {
                cout<<array[i][j] << "  ";
            }
            else{
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }
    
    
// print boundary elements 
    
    cout<<"Print Boundary Elements : "<<endl;

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            if (i==0 || i==2 || j==0 || j==2)
            {
                cout<<array[i][j]<<"  ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    




}