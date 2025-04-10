#include<iostream>
using namespace std;

int main(){

    int marks;
    char grade;

    cout<<"Enter Marks : ";
    cin>>marks;


    (marks>=0 && marks<=100) ?
         (marks>=85 && marks<=100) ?
         grade='A' , cout<<"You Scored 'A' Grade"<<endl :
         (marks>=75 && marks<85) ?
         grade='B' , cout<<"You Scored 'B' Grade"<<endl :
         (marks>=60 && marks<75) ?
         grade='C' , cout<<"You Scored 'C' Grade"<<endl :
         (marks>=45 && marks<60) ?
         grade='D' , cout<<"You Scored 'D' Grade"<<endl :
         (marks>=33 && marks<45) ?
         grade='E' , cout<<"You Scored 'E' Grade"<<endl :
         (marks>=0 && marks<33) ?
         grade='F' , cout<<"You Failed 'F' the Exam"<<endl :
         cout<<"__"<<endl :
    cout<<"Invalid Score"<<endl;


    switch (grade)
    {
    case 'A':
            cout<<"Excellent Work !"<<endl;
        break;
    
    case 'B':
            cout<<"Well Done !"<<endl;
        break;

    case 'C':
            cout<<"Good Job !"<<endl;
        break;

    case 'D':
            cout<<"You Passed, but you could do better !"<<endl;
        break;

    case 'E':
            cout<<"You Just Passed the exam !"<<endl;
        break;

    case 'F':
            cout<<"Fail !"<<endl;
        break;
    
    default:
            cout<<"Invalid Grade Entered"<<endl;
        break;
    }



    if (grade>='A' && grade<='E')
    {
        cout<<"Congraulations You Cleared The Exam"<<endl;
    }else{
        cout<<"Better Luck Next Time !"<<endl;
    }
    
    


}