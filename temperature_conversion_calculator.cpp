#include<iostream>
using namespace std;
int main()
{
	int choice;
	float temperature,converted_temperature;
	cout<<"Temperature Conversion Menu"<<endl;
	cout<<"1.Celsius to Kelvin"<<endl;
	cout<<"2.Celsius to Fahrenheit"<<endl;
	cout<<"3.Kelvin to Celsius"<<endl;
	cout<<"4.Kelvin to Fahrenheit"<<endl;
	cout<<"5.Fahrenheit to Celsius"<<endl;
	cout<<"6.Fahrenheit to Kelvin"<<endl;
	cout<<"Please enter your choice:"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Please enter temperature in Celsius:"<<endl;
		cin>>temperature;
		converted_temperature=temperature+273.15;
		cout<<"The temperature in Kelvin is:"<<endl<<converted_temperature;
	}
	
	
	if(choice==2)
	{
		cout<<"Please enter temperature in Celsius:"<<endl;
		cin>>temperature;
		converted_temperature=temperature*(9/5)+32;
		cout<<"The temperature in Fahrenheit is:"<<endl<<converted_temperature;
	}
	
	if(choice==3)
	{
		cout<<"Please enter temperature in Kelvin:"<<endl;
		cin>>temperature;
		converted_temperature=temperature-273.15;
		cout<<"The temperature in Celsius is:"<<endl<<converted_temperature;
	}
	
	else if(choice==4)
	{
		cout<<"Please enter temperature in Kelvin:"<<endl;
		cin>>temperature;
		converted_temperature=(temperature-273.15)*9/5+32 ;
		cout<<"The temperature in Fahrenheit is:"<<endl<<converted_temperature;
	}
	
	else if(choice==5)
	{
		cout<<"Please enter temperature in Fahrenheit:"<<endl;
		cin>>temperature;
		converted_temperature=(temperature-32)*5/9;
		cout<<"The temperature in Celsius is:"<<endl<<converted_temperature;
	}
	else if(choice==6)
	{
		cout<<"Please enter temperature in Fahrenheit:"<<endl;
		cin>>temperature;
		converted_temperature=(temperature-32)*(5/9)+273.15;
		cout<<"The temperature in Kelvin is:"<<endl<<converted_temperature;
	}
	return 0;
	
}

