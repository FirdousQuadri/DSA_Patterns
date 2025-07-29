/*WAP to print
   A
  ABA
 ABCBA
ABCDCBA   */

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    for(int i=1; i<=n; i++){
        
       char ch='A';
     
       
    //    for printing space

     for(int j=1; j<=n-i; j++){
         cout<<" ";
     }
     

    //  for printing alphabets

     for(int j=1;j<2*i;j++){
         
         if(j<=i){
            cout<<ch;
    
              if(j==i){
                  ch=ch-1;
                  
              }
              else{
                  ch=ch+1;
              }
         }
         else{
             cout<<ch;
             ch=ch-1;
         }
     }
     

    //  for printing space

     for(int j=1; j<=n-i; j++){
         cout<<" ";
     }
     cout<<endl;
    }        
      
}
       
//2nd way - Striver's way

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    
    for(int i=0; i<n; i++){
        
        // for printing space

     for(int j=0; j<n-i; j++){
         cout<<" ";
     }
     
     char ch='A';
     int breakpoint=(2*i+1)/2;
     
    //  for printing alphabets

     for(int j=1;j<=2*i+1;j++){
         cout<<ch;
         
         if(j<=breakpoint) ch++;
         else ch--;
         
     }
     
     // for printing space 
     for(int j=0; j<n-i; j++){
         cout<<" ";
     }
     cout<<endl;
    }        
      
}
      
      
    
 
     



