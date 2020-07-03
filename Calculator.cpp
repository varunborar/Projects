#include <iostream>
#include <conio.h>

using namespace std;

//Function Declaration
int calc(int ,char , int);
int flag=1;


int main()
{   
    system("cls");

    int operand1, operand2, result;
    char OP;
    cout << "\t\t\t\t\t\t Calculator" << endl;
    cout << "Type Expression (a * b)|(a / b)|(a - b)|(a + b) : ";
    cin >> operand1;
    cin >> OP;
    cin >> operand2;
    
    result = calc(operand1, OP, operand2);
    if(flag == 1)
      cout<<"\n"<<operand1<<" " << OP<<" "<<operand2<<" = "<<result;
    return 0;
    
}

//Function definations

int calc(int operand1, char OP, int operand2)
{
    switch(OP)
    {
        case '+': return (operand1 + operand2) ;
         break;
        case '-': return (operand1 - operand2) ;
         break;
        case '*': return (operand1 * operand2) ;
         break;
        case '/': return (operand1 / operand2) ;
         break;
        default: cout <<"Invalid Choice";
                 flag = 0;
                 return 0;
         break;
    }
}
