#include<iostream>
using namespace std;
//Pyramid Pattern
/*    1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

void numberPyranid(int n){
  for(int i=0; i<n; i++){
    // spaces : n-i-1
    for(int j=0; j<n-i-1; j++){
      cout<<" ";
    }
    //for number set 1: i+1
    for(int j=1; j<=i+1; j++){
      cout<<j;
    }
    //for number set 2: 
    for(int j=i; j>=1; j--){
      cout<<j;
    }
    cout<<endl;
  }
}


int main(){
  int n;
  cout<<"Enter the lines: "<<endl;
  cin>>n;
  numberPyranid(n);


  return 0;
}
