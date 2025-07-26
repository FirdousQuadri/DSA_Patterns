/* WAP to print  

********* 
 ******* 
  *****
   ***
    *    */
    

// By taking input from user, here input is 5 as its 5 rows 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){
            cout<<" ";
        }

        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }

        for(int j=0; j<i; j++){
            cout<<" ";
        }

       cout<<endl; 
    }
}

// By using two loops and having space in between

int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        
        //for printing space 
        for(int j=1; j<=i-1; j++){
            cout<<"  ";
        }
        
        // for printing star
        for(int j=1; j<=2*n-2*i+1; j++){   
            // can also write like the above loop as-  for(int j=1; j<=2*(n-i)+1; j++)
            cout<<"* ";
        }
        cout<<endl;
    }
}    