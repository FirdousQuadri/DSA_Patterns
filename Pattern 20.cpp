/*WAP to print

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *        */



// By taking user input here it is 5 to print the above pattern
#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n;
     cout<<"Enter number: ";
     cin>>n;
     
    //  For first half
    
     for(int i=1; i<=n; i++){
        
        // For printing stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        
        // For printing spaces
        for(int j=1; j<=2*n-2*i; j++){
            cout<<" ";
        }

        // For printing stars
          for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    

    // For 2nd half of the pattern

    for(int i=n-1; i>=1; i--){

        // For printing stars
       for(int j=1; j<=i; j++){
           cout<<"*";
       }
       
       // For printing spaces
      for(int j=1; j<=2*n-2*i; j++){
          cout<<" ";
      }
       
      // For printing stars
       for(int j=1; j<=i; j++){
           cout<<"*";
       }
       cout<<endl;
  
    }
  
}











