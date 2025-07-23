#include<iostream>
using namespace std;

//use of the conditional statement and loops

//using for loop find the sum of odd number from 1 to n
void sumOdd(int n){
    int sum = 0;
    for(int i = 1; i <= n; i= i+2){
        if(i%2!=0){
            sum = sum + i;//sum += i;
        }
    }
    cout<<"Sum of Odd number using for loop : "<<sum<<endl;
    /*
    for(int i= 1; i<= n; i = i + 2){
    sum = sum + i;
    }*/
}

//using while loop to find the sum of the odd numbers from 1 to n
void sumOfodd(int n){
    int i = 1;
    int sum = 0;
    while(i<= n){
        sum = sum + i;
        i += 2;
    }
    cout<<"Sum of Odd number using while loop : "<<sum<<endl; 
}

//using for loopto find the sum of even numbers from 1 to n
void evenSum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i%2==0){
            sum += i;
        }
    }
    cout<<"the sum of even numbers from 1 to "<<n<<" is :" <<sum<<endl;
}

//using while loop to find the sum of even numbers from 1 to n
void sumEven(int n){
    int i = 1;
    int sum = 0;
    while(i <= n){
        if(i%2==0){
            sum = sum + i;
        }
        i++;
    }
   cout<<"The sum of even numbers from 1 to "<<n<<" is :" <<sum<<endl;
}

//using for loop finding the the sum of number divisible by 3 from 1 to n
void divisible(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i%3==0){
            sum = sum + i;
        }
    }
    cout<<"The sum of the numbers divisible by 3 using for loop : "<<sum<<endl;
}

//using while loop finding the sum of numbers divisible by 3 from 1 to n
void threeDivisible(int n){
    int i = 1;
    int sum = 0;
    while(i <= n){
        if(i % 3 == 0){
            sum = sum + i;
           
        }
         i++;
    }
    cout<<"The sum of the Numbers Divisible by 3 using while loop : "<<sum<<endl;
}

int main()
{
    int n;
    int s;

    cout<<"1.sum of odd numbers using for loop"<<endl
    <<"2.sum of odd numbers using while loop"<<endl
    <<"3.sum of even numbers using for loop"<<endl
    <<"4.sum of even numbers using while loop "<<endl
    <<"5.sum of numbers divisible by 3 using for loop "<<endl
    <<"6.sum of numbers divisible by 3 using whle loop "<<endl;

    cout<<"Enter the choice"<<endl;
    cin>>s;

    switch(s){
        case 1 :
        cout<<"Enter the number upto which find the sum "<<endl;
        cin>>n;
        sumOdd(n);
        break;

        case 2:
        cout<<"Enter the number upto which find the sum "<<endl;
        cin>>n;
        sumOfodd(n);
        break;

        case 3:
        cout<<"Enter the number upto which find the sum "<<endl;
        cin>>n;
        evenSum(n);
        break;

        case 4:
        cout<<"Enter the number upto which find the sum "<<endl;
        cin>>n;
        sumEven(n);
        break;

        case 5:
        cout<<"Enter the number upto which find the sum "<<endl;
        cin>>n;
        divisible(n);
        break;

        case 6:
        cout<<"Enter the number upto which find the sum "<<endl;
        cin>>n;
        threeDivisible(n);
        break;

        default:
        cout<<"enter the correct choice between 1 to 6 "<<endl;
        break;

        
    }
    
    return 0;
}
