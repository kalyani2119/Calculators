/*2.Car pool savings calculator*/
#include<iostream>
using namespace std;
int main()
{
  float miles,gasoline_cost,average,p_fees,TPD,total_cost,
  cout<<"Please enter the total miles driven per day"<<endl;
  cin>>miles;
  cout<<"Please enter the cost per gallon of gasoline"<<endl;
  cin>>gasoline_cost;
  cout<<"Please enter the average miles per gallon"<<endl;
  cin>>average;
  cout<<"Please enter the parking fees per day"<<endl;
  cin>>p_fees;
  cout<<"Please enter tolls per day"<<endl;
  cin>>TPD;
  total_cost=TPD+p_fees+(miles/average)*gasoline_cost;
  cout<<"The user's cost per day of driving to work is:"<<total;
  system("pause>0");
}
  
