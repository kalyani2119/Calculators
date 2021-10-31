#include<iostream>
using namespace std;
int main()
{
	float first_number,second_number;
	char operation;
	cout<<"Basic Calculator"<<endl;
	cin>>first_number>>operation>>second_number;
	switch(operation)
	{
		
		case '+':cout<<first_number<<operation<<second_number<<"="<<first_number+second_number;break;
		case '-':cout<<first_number<<operation<<second_number<<"="<<first_number-second_number;break;
		case '*':cout<<first_number<<operation<<second_number<<"="<<first_number*second_number;break;
		case '/':cout<<first_number<<operation<<second_number<<"="<<first_number/second_number;break;
		case '%':
			bool isFirst_numberInt,isSecond_numberInt;
			isFirst_numberInt = ((int)first_number==first_number);
			isSecond_numberInt=((int)second_number==second_number);
			if(isFirst_numberInt&&isSecond_numberInt)
			{
			cout<<first_number<<operation<<second_number<<"="<<(int)first_number%(int)second_number;
		}
			else
			cout<<"NOT VALID";
			break;
			
	}
system("pause>0");	
	
}
