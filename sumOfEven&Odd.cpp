#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int even, odd, nu, a;
    cin>>nu;
    // int count=0;
    int evensum=0;
    int oddsum=0;
    while(nu!=0){
        a=nu%10;
        if(nu%2==0){
            evensum=evensum+a;
        }
        else{
            oddsum=oddsum+a;
        }
        nu=nu/10;
        
    }
    cout<<evensum<<" "<<oddsum;
    return 0;  
}
