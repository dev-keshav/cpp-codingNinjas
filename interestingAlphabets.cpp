#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char ch=(n+1)-'A';
        for(int j=1; j<=i; j++){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
