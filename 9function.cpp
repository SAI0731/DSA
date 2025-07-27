#include<iostream>
using namespace std;

//funtions in cpp
/*
returntype name(parameters){
body
}
*/

//function to calculate the sum of digits in a number
int digitSum(int n){
    int digitSum = 0;
    while(n>0){
        int lastdigit = n % 10;
        n = n / 10;

        digitSum += lastdigit;

    }
    return digitSum;
}

//function to calculate the binomial coefficient
int factorial(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r); //n minus r

    return fact_n / (fact_r*fact_nmr);
}

//function to check number is prime or not
void primeNumber(int n){
    if(n<2){
        cout<<"The number is non-prime \n";
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"The number is a non-prime number \n";
            return;
        }
    }
    cout<<"The number is a prime number \n";
}

//function to display prime numbers 
int primeCheck(int n){
    if(n<2){
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void prime(int n){
    cout<<"The prime numbers are: "<<endl;
    for(int i=0; i<n; i++){
        if(primeCheck(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//function to display fibonacci series
void fibonacci(int n){
    int a=0,b=1,next;

    for(int i=0; i<n; i++){
        cout<<a<<" ";
        next = a+b;
        a = b;
        b = next;
    }
    cout<<endl;
}

int main(){
    
    int choice;
    int n,r;
    cout<<"1.Sum of digits \n"
    "2.Binomial coefficient\n"
    "3.Prime number check\n"
    "4.Display prime number between 2 to \n"
    "5.Display Fibonacci series\n";
    cout<<"Enter the choice : \n";
    cin>>choice;
    
    switch(choice){
        case 1:
        cout<<"Enter the number :"<<endl;
        cin>>n;
        cout<<"The Sum of the digits is: "<<digitSum(n)<<endl;
        break;

        case 2:
        cout<<"Enter the value of n"<<endl;
        cin>>n;
        cout<<"Enter the value of r"<<endl;
        cin>>r;
        cout<<"Binomial Coefficient is: "<<nCr(n,r)<<endl;
        break;

        case 3:
        cout<<"Enter the number to check: \n";
        cin>>n;
        primeNumber(n);
        break;

        case 4:
        cout<<"Enter the number up to which to print prime numbers: \n";
        cin>>n;
        prime(n);
        break;

        case 5:
        cout<<"Enter the nth term up to which to print fibonacci series: \n";
        cin>>n;
        fibonacci(n);
        break;

        default:
        cout<<"Enter the correct choice between 1 to 5 \n";
        break;
    }

    return 0;
}