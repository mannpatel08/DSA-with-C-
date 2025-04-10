#include<iostream>
using namespace std;

int main()
{
    int array[] = {20,40,10,40,80,90,30,40};
    int size = sizeof(array) / sizeof(array[0]);
    int max = array[0];

    
    for (int i = 0; i < size ; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    
    cout<<max;
    

}