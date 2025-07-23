#include<iostream>
using namespace std;
//use of the variables , typecasting and operators in cpp  

void addition(int a, int b)
{
    cout<<"The addition of the numbers is : "<<(a+b)<<endl;
}

void subtraction(int a, int b)
{
    cout<<"The difference between the numbers is : "<<(a-b)<<endl;
}

void product(int a, int b)
{
    cout<<"The product of the numbers is : "<<(a * b)<<endl;
}

void division(int a, int b)
{
    cout<<"The quotiont of the numbers is : "<<(a / (float)b)<<endl;    //typecasting----->(flaot)b the integer is converted into float.
}

void modulo(int a, int b)
{
    cout<<"The remainder is : "<<(a % b)<<endl;
}

void calulator(int a, int b)
{
    addition(a,b);
    subtraction(a,b);
    product(a,b);
    division(a,b);
    modulo(a,b);

}

int main()
{
    int a ,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;

    // addition(a,b);
    // subtraction(a,b);
    // product(a,b);
    // division(a,b);
    // modulo(a,b);

    calulator(a,b);

    return 0;
}