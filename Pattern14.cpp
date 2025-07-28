/*WAP to print
A
AB
ABC
ABCD
ABCDE   */

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    char a;
    for(int i=1; i<=n; i++) {
        a='A';  /* can also write as a=65 because while giving output it will turn it into char form as we have declared the data type of a as char in line 17*/
        for(int j=1; j<=i; j++){
            cout<<a;
            a=a+1; /*here we are increasing because we want to increase it in every row*/
        }
        cout<<endl;
    }
       
}

// 2nd way without using an extra variable
 
int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    for(int i=1; i<=n; i++) {
        
        for(int j=65; j<65+i; j++){  /*here if we would'nt have added j<65=i then it would have not exceeded its value and would have kept on running till i that is 5*/
            cout<<char(j);
            
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
        
        for(char j='A'; j<'A'+i; j++){
            cout<<j;
            
        }
        cout<<endl;
    }
       
}

// 4th way - Striver's Way:

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    for(int i=0; i<n; i++){ /*just the difference is that he took i as 0*/
        
        for(char ch='A'; ch<='A'+i; ch++){  /*and thus here we wrote ch<='A'+i */
            cout<<ch<<" ";
        }
        cout<<endl;
    }
} 