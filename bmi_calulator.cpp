//body mass index calculator
#include<iostream>
using namespace std;
int main()
{
	float weight,height,BMI;
	cout<<"Please enter your height in meters";
	cin>>height;
	cout<<"Please enter your weight in kilograms";
	cin>>weight;
	BMI=weight/(height*height);
	cout<<"BMI is:"<<BMI;
	if(BMI<18.5)
	cout<<"Underweight";
		else if(BMI>25)
		cout<<"Overweight"<<endl;
		else
		cout<<"Normal";

	
}
