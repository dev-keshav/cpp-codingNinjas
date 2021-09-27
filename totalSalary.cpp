#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
    int basic;
    double totalSalary, allow;
    char grade;
    cin>>basic>>grade;
    double hra,da,pf;
    
    
    hra=(20.0/100.0)*basic;
    da=(50.0/100.0)*basic;
    pf=(11.0/100.0)*basic;
    if(grade=='A'){
        allow=1700.0;
    }
    else if(grade=='B'){
        allow=1500.0;
    }
    else{
        allow=1300.0;
    }
    
    totalSalary=basic+hra+da+allow-pf;
    cout<<fixed<<setprecision(0)<<totalSalary;
	return 0;
}
