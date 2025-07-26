/*WAP to print  
 
    *    
   ***   
  *****  
 ******* 
*********         */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=0; i<5; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
       cout<<endl; 
    }
}

// By taking user input and using just 2 loops

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        
        //for printing space 
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        
        // for printing star 
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
} 

// And if we want space between stars but the pattern has to remain the same


int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        
        //for printing space
        for(int j=1; j<=n-i; j++){
            cout<<"  ";  /*here we are adding two spaces so that we can get space on the left side too*/
        }
        
        // for printing star 
        for(int j=1; j<=2*i-1; j++){
            cout<<" *";   /*here we are adding a space before star*/
        }
        cout<<endl;
    }
}  

// In this case if the input is 6 the pattern will be as below with spaces 
//            *
//          * * *
//        * * * * *
//      * * * * * * *
//    * * * * * * * * *
//  * * * * * * * * * * *

