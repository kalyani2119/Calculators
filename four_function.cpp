/*four function calculators*/
#include<iostream>
#include<stdlib>
using namespace std;
int main()
{
  system("cls");
  char choice;
  float number1,number2,result;
  cout<<"Please enter two numbers"<<endl;
  cin>>number1>>number2;
  cout<<"Enter the operator (+,-,*,/):"<<endl;
  cin>>choice;
  if(choice=='+')
    result=number1+number2;
  if(choice=='-')
    result=number1-number2;
  if(choice=='*')
    result=number1*number2;
  if(choice=='/')
    result=number1/number2;
  else
  {
    cout<<"Wrong operator!"<<endl;
    goto lb;
  }
  cout<<"The computed result is : "<<endl<<result;
  lb:
  return 0;
}
  
  

