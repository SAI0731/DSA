#include<iostream>
using namespace std;
// Hollow Diamond Pattern
/*
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/

void hollowDiamond(int n){
    //for top part
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        cout<<"*";

        //spaces
        if(i != 0){

            for(int j=0; j<2*i-1;j++){
                cout<<" ";
            }
            //stars
            cout<<"*";
        }
        cout<<endl;
    }

    //bottom logic
    for(int i=0; i<n-1; i++){
        //spaces
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        //star
        cout<<"*";

        if(i!=n-2){
            //spaces
            for(int j=0; j<2*(n-i)-5; j++){
                cout<<" ";
            }
            //star
            cout<<"*";
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cout<<"enter the lines: ";
    cin>>n;

    hollowDiamond(n);

    return 0;
}