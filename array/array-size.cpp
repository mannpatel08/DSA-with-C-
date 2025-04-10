#include<iostream>
using namespace std;

int main()
{

    // syntex :         Datatype arrayName[size] ;                      (Dynamic)
    //                  Datatype arrayName[size] = {1,2,3,4,5,6};       (Static)


    // int num = 10;

    // int dsa11[num] = {1,2,3,4,5,6,7,8,9,10};

    // for (int i = 0; i < num; i++)
    // {
    //     cout<<dsa11[i]<<endl;
    // }
    

    int size = 10;
    int dsa11[size];
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + dsa11[i];
        cout<<"array["<<i<<"] : ";
        cin>>dsa11[i];
    }
    cout<<sum;
    

}