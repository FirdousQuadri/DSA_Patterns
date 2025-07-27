/* WAP to print
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1         */

#include<bits/stdc++.h>
using namespace std;

    int a;
   for(int i=1; i<=5; i++){
       
       if(i%2==0){
           a=0;
       }
       else{
           a=1;
       }
       
   for(int j=1; j<=i; j++){
       cout<<a<<" ";
       
       if(a==0){
           a=1;
           
       }
       else{
           a=0;
       }
   }
   cout<<endl;
     
  }
}
 
// By taking user input

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    int a;
   for(int i=1; i<=n; i++){  /*just need to change it to n*/
       
       if(i%2==0){
           a=0;
       }
       else{
           a=1;
       }
       
   for(int j=1; j<=i; j++){
       cout<<a<<" ";
       
       if(a==0){
           a=1;
           
       }
       else{
           a=0;
       }
   }
   cout<<endl;
     
  }
}

// By striver's way and without spaces

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    int start=1;
    
    for(int i=0; i<n; i++){
        if(i%2==0) start=1;
        else start=0;
    
        for(int j=0; j<=i; j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
     
// Here if the input is 5, the output will be as below:

// 1
// 01
// 101
// 0101
// 10101
