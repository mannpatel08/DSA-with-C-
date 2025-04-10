#include<iostream>
using namespace std;

    /* 
         Ternary Operator :
        condition ? true : false ;
    */

int main(){

    // if (40>10)
    // {
    //     cout<<40-10<<" True "<<endl;
    // }else{
    //     cout<<10-40<<" False "<<endl;
    // }

    // 40<10 ? cout<<40-10<<" True " : cout<<10-40<<" False ";


    int score;
    char grade;

    cout<<"Enter Your Score : ";
    cin>>score;

    /* ternary operator :  
        A(90-100) B(80-89) C(70-79) D(60-69) E(0-59)
    */

   (score>=0 && score<=100) // Score Range
   ?(score<=100 && score>=90)
    ? grade='A', cout<<"You Scored Grade A"<<endl
        : (score<90 && score>=80)
            ?grade='B', cout<<"You Scored Grade B"<<endl
            :   (score <80 && score>=70)
                ?grade='C', cout<<"You Scored Grade C"<<endl
                : (score<70 && score>=60)
                    ?grade='D', cout<<"Yo Scored grade D"<<endl
                    :(score<60 && score>=0)
                        ?grade='E', cout<<"You Scored Grade E"<<endl
                        : cout<<""


    :cout<<"Invalid Credentials"<<endl;

    switch (grade)
    {
        case 'A':
            cout<<"Excellent Work"<<endl;
        break;

        case 'B':
            cout<<"Well Done"<<endl;
        break;

        case 'C':
            cout<<"Good Job"<<endl;
        break;

        case 'D':
            cout<<"You have passed but you could do better"<<endl;
        break;

        case 'E':
            cout<<"Sorry you failed"<<endl;
        break;
    
    default:
        break;
    }


    if (grade>='A' && grade<='D')
    {
        cout<<"Congratulations You Successfully Cleared Round 1";
    }else{
        cout<<"Better Luck Next Time";
    }
    

    
    
   
    
}