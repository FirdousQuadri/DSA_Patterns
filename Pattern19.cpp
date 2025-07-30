/*WAP to print

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********         */

// By taking user input

#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n;
     cout<<"Enter number: ";
     cin>>n;
     
     
    //  FOR UPPER HALF OF THE PATTERN
    
    // For first *
     for(int i=1; i<=n; i++){
         
         
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        
    // For mid-space

        for(int j=1; j<=2*i-2; j++){   /*can also write by optimizing it as j<=2(n-i)*/
            cout<<" ";
        }
        
        // For last *

        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
        
        
     }
        

     
    // FOR LOWER HALF OF THE PATTERN
    
     for(int i=1; i<=n; i++){
      
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        
    // // For mid-space

        for(int j=1; j<=2*n-2*i; j++){   /*can also write by optimizing it as j<=2(n-i)*/
            cout<<" ";
        }
        
    //     // For last *

        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        
        cout<<endl;
     }          

}

// 2nd way - Striver's way

int main(){
    
     int n;
     cout<<"Enter number: ";
     cin>>n;
     
    //  For upper half
    
    // For first *
     int iniS=0;
     for(int i=0; i<n; i++){
         
         
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        
    // For mid-space

        for(int j=0; j<iniS; j++){   /*can also write by optimizing it as j<=2(n-i)*/
            cout<<" ";
        }
        
        // For last *

        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
        
        
     }
        

     
    // For lower half
    
     iniS=8;
     for(int i=1; i<=n; i++){
      
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        
    // // For mid-space

        for(int j=0; j<iniS; j++){   /*can also write by optimizing it as j<=2(n-i)*/
            cout<<" ";
        }
        
    //     // For last *

        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        
        iniS-=2;
        cout<<endl;
     }          

}

     


       
      
      
    
 
     
