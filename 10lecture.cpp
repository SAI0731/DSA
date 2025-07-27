#include<iostream>
using namespace std;
//number systems

//function to convert decimal number into binary number
void decimalTobinary(int num){
    int ans=0;
    int power=1;

    while(num>0){
        int remainder = num % 2;
        num = num/2;
        ans = ans + (remainder*power);
        power*=10;

    }
    cout<<"The binary for is "<<ans<<endl;
}

//function to convert binary to decimal number;
void binaryTodecimal(int num){
    int ans = 0;
    int power = 1;
   
    while(num>0){
        int remainder = num % 10;
        ans = ans + (remainder*power);
        num = num / 10;
        power = power * 2;

    }
    cout<<"The decimal form of the number is : "<<ans<<endl;
}

int main(){
    int num,n;
    cout<<"Enter the number :\n";
    cin>>num;
    decimalTobinary(num);
    cout<<"Enter the binary number : \n";
    cin>>n;
    binaryTodecimal(n);
    return 0;

}