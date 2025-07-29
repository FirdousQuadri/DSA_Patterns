/*WAP to print
A
B B
C C C
D D D D
E E E E E     */

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    char a='A';
    for(int i=1; i<=n; i++){

        for (int j=1; j<=i; j++){
            cout<<a<<" ";
        }   
        a=a+1;
        cout<<endl;
       } 
  }   
     
  
// 2nd way - Striver's way

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    for(int i=0; i<n; i++){
        char ch='A'+i;
    
    
       for(int j=0; j<=i; j++){
          cout<<ch<<" ";
    }
    cout<<endl;
  }
}    
        

   