#include<iostream>
using namespace std;

int main()
{
    int array[] = {20,40,10,40,80,90,30,40};
    int size = sizeof(array) / sizeof(array[0]);

    float sum = 1;
    float avg;


    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }

    avg=sum/size;

    cout<<"Average of the following Value is : "<<avg;
    

}