/* WAP to print

*
**
***
****
*****
****
***
**
*                */


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=1; i<=5; i++){
        
        for(int j=1; j<=i; j++){
            cout<<"*";
            }
            cout<<endl;
        }    
        
        
    for(int i=4; i>=0; i--){
        
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    
    }
}

// By striver's way

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
   for(int i=1; i<=2*n-1; i++){
       int stars=i;
       if(i>n) stars=2*n-i;
       
   for(int j=1; j<=stars; j++){
          cout<<"*";
       }
       cout<<endl;
   }
     
} 

// By taking user input

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            cout<<"*";
            }
            cout<<endl;
        }    
        
        
    for(int i=n-1; i<=n; i--){
        
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    
    }
} 

// If the input is 10, then it will print the below pattern


// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// ********** being 10 *
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *
