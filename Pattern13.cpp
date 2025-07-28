/* WAP to print
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15    */


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n; 
    
    int num=1;
    for(int i=1; i<=n; i++) {
        
        for(int j=1; j<=i; j++){
            cout<<num<<" ";   /*here space is needed so that we cn have spaces between numbers*/
            num=num+1;    /*so that the numbers gets increased at every row by 1 as we want in the pattern above*/
        }
        cout<<endl;
    }
       
}

/* if we dont add space then the output will be the same but without space it will turn out to be something else as below 
Here the input is 6 and output came out to be
1
23
456
78910
1112131415
161718192021    */
  
