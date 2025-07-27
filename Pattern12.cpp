/*WAP to print

1             1
1 2         2 1
1 2 3     3 2 1 
1 2 3 4 4 3 2 1        */

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    // For first numbers

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        
    // For mid-space

        for(int j=1; j<=2*n-2*i; j++){   /*can also write by optimizing it as j<=2(n-i)*/
            cout<<"  ";
        }
        
        // For last numbers

        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        
        cout<<endl;
     }   
}  

// If you dont want space in between numbers:


int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    // For first numbers

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;   /*remove extra spaces as in they are in above*/
        }
        
    // For mid-space

        for(int j=1; j<=2*n-2*i; j++){
            cout<<" ";  /*just need one space*/
        }
        
        // For last numbers

        for(int j=i; j>=1; j--){
            cout<<j;  /*remove extra spaces as in they are in above*/
        }
        
        cout<<endl;
     }   
}
  
// Here if the n is 4, the output will be s below without the space in between numbers:

// 1      1
// 12    21
// 123  321
// 12344321
     
       

