//Q1. Write a program to Swap to two numbers.
#include <iostream>  
using namespace std;  
int main()  
{  
int a=7, b=15;      
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
a=a+b;   
b=a-b;    
a=a-b;    
cout<<"After swap a= "<<a<<" b= "<<b<<endl;      
return 0;  
}  
