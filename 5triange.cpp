#include<iostream>
using namespace std;
//Triangular Pattern

//star triangle *
//              * *
//              * * *

void starTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/* Number triangle same in row
1
2 2
3 3 3
*/
void numberTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j =0; j<i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

/* same row Alphabet traimgle pattern
A
B B
C C C
*/
void alphabetTriangle(int n){
    char ch ='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}

/* continue number triangle pattern
1
1 2
1 2 3
*/
void continueNumber(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

/* Reverse triangle
1
2 1
3 2 1
*/
void reverseTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void reverseCharacter(int n){
    for(int i=0; i<n; i++){
        char ch='A';
        ch = ch + i;
        for(int j=i+1; j>0; j--){
            cout<<ch<<" ";
            ch--;
            
        }    
        cout<<endl;
    }
}

/* Floyds triangle pattern
1
2 3
4 5 6
7 8 9 10
*/
void floydsTriangle(int n){
    int a = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

void floydsCharacter(int n){
    char ch ='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

/* Inverse triangle 
1 1 1 1
  2 2 2
    3 3
      1
*/
void invertedTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){      //for printing spaces
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){    //for printing numbers
            cout<<(i+1);
        }
        cout<<endl;
    }
}

void invertedCharacter(int n){
    char ch ='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){      //for spaces
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){    // for printing characters
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter the numbers of lines "<<endl;
    cin>>n;

   //starTriangle(n);
   //numberTriangle(n);
   //alphabetTriangle(n);
   //continueNumber(n);
   //reverseTriangle(n);
   //floydsTriangle(n);
   //floydsCharacter(n);
   //reverseCharacter(n);
   //invertedTriangle(n);
   //invertedCharacter(n);

    return 0;
}