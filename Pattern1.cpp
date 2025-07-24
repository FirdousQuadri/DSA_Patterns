/* Basic rules while writing programs based on patterns
-for the outer loop count the number of lines
-for the innner loops, focus on the columns and conneect then somehow to the rows
-print them '*' inside the inner for loop
-observe symmetry(optional only for some patterns not all)*/

/* WAP to print ****
                ****
                ****
                ****    */

#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4;j++){
        cout<<"* ";
        }
        cout<<endl;
    }
}

// STRIVER'S WAY(by taking input from the user)

void print1(int n){
    for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           cout<<"* ";
       }
       cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);

}

// While using online coding platforms we just have to write the below program as int main() and all will be present in the backend by default

void nForest(int n){
for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           cout<<"* ";
       }
       cout<<endl;
    }
}