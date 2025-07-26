/*WAP to print 

    *    
   ***   
  *****  
 ******* 
********* 
********* 
 ******* 
  *****
   ***
    *             */

// If we want space between stars 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        
        //for printing space
        for(int j=1; j<=n-i; j++){
            cout<<"  ";  
        }
        
        // for printing star 
        for(int j=1; j<=2*i-1; j++){
            cout<<"* ";   
        }
        cout<<endl;
        
    }
    
    for(int i=1; i<=n; i++){
        
        //for space printing
        for(int j=1; j<=i-1; j++){
            cout<<"  ";
        }
        
        // for star printing
        for(int j=1; j<=2*(n-i)+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}    

// If we dont want space between stars

int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        
        //for printing space
        for(int j=1; j<=n-i; j++){
            cout<<" ";  /*here we are adding a single space so that we can get no space between stars*/
        }
        
        // for printing star 
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";   /*here no need to add space as in the above code*/
        }
        cout<<endl;
        
    }
    
    for(int i=1; i<=n; i++){
        
        //for space printing
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        
        // for star printing
        for(int j=1; j<=2*(n-i)+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}    
     
