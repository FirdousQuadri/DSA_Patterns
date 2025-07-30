/*WAP to print 
E 
D E 
C D E 
B C D E 
A B C D E    */

// If we want to print the same pattern as it is

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=1; i<=5; i++){
        
       char a='E'-i+1;
        
       for(int j=1; j<=i; j++){
          cout<<a<<" ";
          a=a+1;
          
       }
       cout<<endl;
       
    }      
      
}
 

//2nd way by taking user input

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    
    for(int i=1; i<=n; i++){
        
       char a='A'+n-i;
        
       for(int j=1; j<=i; j++){
          cout<<a<<" ";
          a=a+1;  
       }
       cout<<endl; 
    }          
}

// 3rd way - Striver's way but we can only enter n till 5, because we are tarting j loop from E so if we enter n more than 5 then it will not print F rather the character before A that is @

int main(){
    
    for(int i=0; i<5; i++){
        
       for(char j='E'-i; j<='E'; j++){
          cout<<j<<" ";
       }
       cout<<endl;
    }      
}