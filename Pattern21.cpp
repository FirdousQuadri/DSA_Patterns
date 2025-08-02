/*WAP to print

****
*  *
*  *
*  * 
****    */

// By taking user input

#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n;
     cout<<"Enter number: ";
     cin>>n;
    
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-1; j++){
            
            if(i==1 || i==n){
               cout<<"*";
            }
            
            else{
                if(j==1 || j==n-1){
                    cout<<"*";
                }
                
                else{
                    cout<<" ";
                }
                
            }
        }
        
           cout<<endl;
    }
 }
    
    
// By using only 1 if-else condition:

int main(){
    
     int n;
     cout<<"Enter number: ";
     cin>>n;
    
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-1; j++){
            
            if(i==1 || i==n || j==1 || j==n-1){
               cout<<"*";
            }
          
            else{
                    cout<<" ";
                }
    
            }
            cout<<endl;
        }
          
    }




    
    
    
    
    
    


    
    
    
    
    
    
    

    
    
    
    


