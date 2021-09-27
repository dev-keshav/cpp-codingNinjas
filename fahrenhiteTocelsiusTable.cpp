#include<iostream>
using namespace std;


int main(){

    int S,W,E,i;
    int cel;
    cin>>S;
    cin>>E;
    cin>>W;
    for(i=S; i<=E; i=i+W){
        cel=5*(i-32)/9;
        
        cout<<i<<"\t";
        cout<<cel<<endl;
    }
    
}


