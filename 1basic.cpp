#include<iostream>
using namespace std;
//logic programs

//logic to find sum of two numbers
void total( int a ,int b)
{
    int c ;
    c = a + b;
    cout<<"sum of the digits is : "<<c;
}

//logic to find the minimum number
void min(int a , int b)
{
    if(a>b){
        cout<<b<<" is the min mumber";
    }else{
        cout<<a<<" is the min number";
    }
}

//logic to find the maximum number
void max(int a , int b)
{
    if(a>b){
        cout<<a<<" is the max number";
    }else{
        cout<<b<<" is the max number";
    }
}

//logic to find addition of number form 0 to any number
void addition(int a)

{
    int count = 0;
    int sum = 0;
    while(count<=a)
    {
        sum = sum + count;
        //sum += count;
        count = count + 1;
        //count++ ;
        //count += 1;
    }
    cout<<"The sum of the number is :"<<sum;
}

//logic to find even and odd numbers
void even_odd(int a)
{
    if(a%2==0)
    {
        cout<<"The number "<<a<<" is even";
    }else{
        cout<<" the number "<<a<<" is odd ";
    }
    
}

//logic to find if the number is prime or not
void prime_no(int a)
{
    if (a <= 1) {
        cout << "The number is non-prime number" << endl;
        return;
    }
    int count = 2;
    while (count < a) {
        if (a % count == 0) {
            cout << "The number is non-prime number" << endl;
            return; // exist the function once divisor = 0 is found
        }
        count++;
    }
    cout << "The number is prime number" << endl; // If no divisor is found
}

//logoc to find simple intrest
void simple_intrest(int a, int b, int c)
{
    int si = a * b * c;
    cout<<" The simple intrest is: "<<si;
}

//logic to find the factrorial of the number
void factorial( int a)
{
    int count = 1;
    int factorial = 1;
    while(count <= a){
        factorial = factorial * count;
        count = count + 1;
    }
    cout<<" the factorial of the number "<<a<<" is "<<factorial;
    
}

//logic to find if the person is eligibale for the lisence or not
void lisence(int age)
{
    if (age>=18)
    {
        cout<<" you are eligebale ";
    }else{
        cout<<" you are not eligebale ";
    }
}

int main(){
    int s,a,b,c;
    
    cout<<" 1.total "<<endl
    <<"2. minimum "<<endl
    <<"3. maximum "<<endl
    <<"4. addition to n "<<endl
    <<"5. Even Odd "<<endl
    <<"6. Prime number or not"<<endl
    <<"7. simple intrest "<<endl
    <<"8. Factorial "<<endl
    <<"9. Lisence check "<<endl;
    
    cout<<"Enter the choice ";
    cin>>s;

    switch(s){
        case 1:
        cout<<" Enter the numbers: ";
        cin>>a>>b;
        total(a,b);
        break;

        case 2:
        cout<<" Enter the numbers: ";
        cin>>a>>b;
        min(a,b);
        break;

        case 3:
        cout<<" Enter the numbers: ";
        cin>>a>>b;
        max(a,b);
        break;

        case 4:
        cout<<" Enter the number up to which to find the sum from 1 : ";
        cin>>a;
        addition(a);
        break;

        case 5:
        cout<<" Enter the number: ";
        cin>>a;
        even_odd(a);
        break;

        case 6:
        cout<<" Enter the number ";
        cin>>a;
        prime_no(a);
        break;

        case 7:
        cout<<" Enter the principal: ";
        cin>>a;
        cout<<"enter the rate: ";
        cin>>b;
        cout<<"enter the period in years: ";
        cin>>c;
        simple_intrest(a,b,c);
        break;

        case 8:
        cout<<" Enter the number: ";
        cin>>a;
        factorial(a);
        break;

        case 9:
        cout<<" Enter the age: ";
        cin>>a;
        lisence(a);
        break;

        default:
        cout<<"enter the correct choice between 1 to 9";
        break;
    }

}

