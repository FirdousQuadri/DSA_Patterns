/* WAP to print *****
                ****
                ***
                **
                *   */

// Different ways of solving the above pattern

// 1st Way:

#include<bits/stdc++.h>
using namespace std;


int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=6-i; j++){
           cout<<"* ";
        }
        cout<<endl;
    }
}                
                
// 2nd Way:

int main(){
    for(int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
           cout<<"* ";
        }
        cout<<endl;
    }
}

// 3rd Way:

