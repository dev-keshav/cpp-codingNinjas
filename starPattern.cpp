#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space!=0){
            cout<<" ";
            space--;
        }
        int j=2*i-1;
        while(j!=0){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
  
}


