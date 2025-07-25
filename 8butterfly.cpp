#include<iostream>
using namespace std;
//Butterfly pattern

void butterfly(int n){
    //top part
    for(int i=0; i<n; i++){
        //for first set of stars
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        //for spaces
        for(int j=0; j<2*(n-i-1);j++){
            cout<<" ";
        }
        //for next set of stars
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //bottom part
    for(int i=0; i<n; i++){
        //first set of stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        //for spaces
        for(int j=0; j<2*i; j++){
            cout<<" ";
        }
        //next set of stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}


int main(){
    int n;
    cout<<"Enter the number of lines: "<<endl;
    cin>>n;
    butterfly(n);
    return 0;
}