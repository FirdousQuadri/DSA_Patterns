/*WAP to print

* * * * 
*     * 
*     * 
* * * *       */

// By keeping space in between stars
/* For eg: if n is 5 then the output will be as below

* * * * * 
*       * 
*       * 
*       * 
* * * * *     */


#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n;
     cout<<"Enter number: ";
     cin>>n;
    
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n; j++){
            
            if(i==1 || i==n || j==1 || j==n){
               cout<<"* ";
            }
          
            else{
                    cout<<"  ";
                }
    
            }
            cout<<endl;
        }
          
    }

/* Striver's way by taking user input but without space in between stars
 For eg: if n is 5, the output will be as below
 
   *****
   *   *
   *   *
   *   *
   *****     */


int main(){
    
     int n;
     cout<<"Enter number: ";
     cin>>n;
    
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n; j++){
            
            if(i==0 || i==n-1 || j==0 || j==n-1){
               cout<<"*";
            }
          
            else{
                    cout<<" ";
                }
    
            }
            cout<<endl;
        }
          
    }

    
    
    
    
    
    
    


    
    
    
    
    
    
    

    
    
    
    
    
    


    
    
    
    
    
    
    

