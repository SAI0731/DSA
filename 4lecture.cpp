#include<iostream>
using namespace std;
//Patterns creations
//square pattern
/* 
   * * * *
   * * * *
   * * * *
   * * * *
*/

//star square pattern
void starSquare(int n){
   for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    } 
}

//number square pattern
void numberSquare(int n){
   
    for(int i = 0; i < n; i++){
        int a = 1;
        for(int j = 0; j < n; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

//Alphabets square pattern
void alphabetsSquare(int n){

    for(int i = 0; i < n; i++){
        char ch ='A';//at each line starting will be A
        for(int j = 0; j < n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

// number square with continue numbers
void numberContinue(int n){
    int a = 1; //only at the starting "a" will be 1
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

void alphabetContinue(int n){
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of symbol in a line : "<<endl;
    cin>>n;

    // starSquare(n);
    // cout<<endl;
    // numberSquare(n);
    // cout<<endl;
    // alphabetsSquare(n);
    // cout<<endl;
    // numberContinue(n);
    // cout<<endl;
    // alphabetContinue(n);
    // cout<<endl;


    return 0;
}