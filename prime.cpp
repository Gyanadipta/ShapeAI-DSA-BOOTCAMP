//Q5. Write a program to check whether a number is Prime or Not.
#include <iostream>  
using namespace std;  
int main()  
{  
  int n,flag=0;  
  cout << "Enter the Number: ";  
  cin >> n;  
  int m=n/2;  
  for(int i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Not Prime"<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Prime"<<endl;  
  return 0;  
}  
