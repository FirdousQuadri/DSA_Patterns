/* WAP to print  12345
                 1234
                 123
                 12
                 1   */

#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=1; j<5-i+1; j++){
           cout<<j;
        }
        cout<<endl;
    }
}

// By taking input from user

#include<bits/stdc++.h>
using namespace std;

void print(int n){
     for(int i=0; i<n; i++){
        for(int j=1; j<n-i+1; j++){
           cout<<j;
        }
        cout<<endl;
    }
}

int main(){
  int n;
  cin>>n;
  print(n);
    }
