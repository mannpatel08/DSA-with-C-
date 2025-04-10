#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter Number: ";
    cin >> num;

    switch (num > 100)  // This will be either 1 (true) or 0 (false)
    {
    case 1:
        cout << "Number is greater than 100";
        break;

    case 0:
        cout << "Number is smaller than 100";
        break;
    }    
}
