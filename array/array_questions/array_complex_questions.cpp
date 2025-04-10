#include<iostream>
using namespace std;

int main()
{

/*
    1 : Avg all the values present in array.
        (SUM OF ALL THE VALUE)/TOTAL NO. OF VALUE

        requirement : 
        1 : length of array : 

            size = sizeof(array)/sizeof(array[0]) 
            sum of all the value


*/



//  Average of Arrey 

    // int array[ ] = {1,2,3,4,5,6,7,8,9};
    // int size = sizeof(array) / sizeof(array[0]);
    // float sum = 0;
    // float avg;

    // for (int i = 0; i < size; i++)
    // {
    //     sum = sum + array[i];
    // }
    
    // avg = sum/size;

    // cout<<"The Average of Array is : "<<avg;


// Finding the minimum age in the array

    // int age[] = {19,26,21,16,29};
    // int length = sizeof(age) / sizeof(age[0]);
    // int lowest_age = age[0];

    // for (int i = 1; i < length; i++)
    // {
    //     if (lowest_age > age[i])
    //     {
    //         lowest_age = age[i];
    //     }
        
    // }
    
    // cout<<"Lowest/Minimum Age : "<<lowest_age;


// Finding Maximum Value an array

    int array[] = {10,20,150,30,70,120,40};
    int size = sizeof(array) / sizeof(array[0]);
    int max_value = array[0];

    for (int i = 0; i < size; i++)
    {
        if (max_value < array[i])
        {
            max_value = array[i];
        }
        
    }

    cout<<"Maximum Value : "<<max_value;



// Revere the Number line

    // int array[] = {1 , 2, 23, 67,5,34,53,64};   // reverse 64 53 34 5 67 23 2 1

    // int size = sizeof(array)/sizeof(array[0]);  // 8 


    
}



