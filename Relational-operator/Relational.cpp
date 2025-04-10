#include<iostream>
using namespace std;

int main()
{
    cout<<"Relational / Conditional Operator (> , < , >= , <= , == )"<<endl;

    int num1 = 10 < 0; //10 is greater the 0
    cout<<num1<<endl;
    
    int num2 = 10 > 0; // 0 is lesser then 10
    cout<<num2<<endl;

    int num3 = 20 <= 10; // 20=10 ==>false   20<10 ==>false  
    cout<<num3<<endl;

    int num4 = 10 >= 10; //10=10 ==>true   10>10 ==>false
    cout<<num4<<endl;

    int num5 = 10 == 0; // 10==0 ==>false
    cout<<num5<<endl;


    int result = 10 >= 0; /// false 10 ==0   10>0true
    cout<<result<<endl;
}