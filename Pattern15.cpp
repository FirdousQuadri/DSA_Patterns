/*WAP to print

A B C D E
A B C D
A B C
A B
A    */

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char a='A';
     
     for(int i=1; i<=5; i++){
         for(int j=5; j>=i; j--){
             cout<<a<<" ";
             a=a+1;
         }
         a='A';
         cout<<endl;
     }

}

// 2nd way without using an extra variable

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    for(int i=1; i<=n; i++) {
        
        for(int j=65; j<=65+n-i; j++){  /*here if we would'nt have added n-i then it would have not exceeded its value and would have kept on running even after E if the input is 5*/
            cout<<char(j)<<" ";
            
        }
        cout<<endl;
    }
}

// 3rd way by declaring j as character and without using extra variable

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    
    for(int i=1; i<=n; i++) {
        
        for(char j='A'; j<='A'+n-i; j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
}

// 4th way - striver's way

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    
    for(int i=0; i<n; i++) {
        
        for(char ch='A'; ch<='A'+(n-i-1); ch++){
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }
       
}