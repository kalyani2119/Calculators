//interest calculator
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

void showMenu()
{
	cout<<"***********Display Menu**********"<<endl;
	cout<<"1.Calculate simple interest"<<endl;
	cout<<"2.Calculte compound interest"<<endl;
	cout<<"3.Exit"<<endl;
	cout<<"**********************************"<<endl;
}

int main()
{
	int option;
	do{
	showMenu();
	cout<<"Please enter the option:";
	cin>>option;
	system("cls");
	
	switch(option)
	{
		case 1:cout<<"Simple interest";
		int p,r,t,i;
		cout << "\n\n Simple Interest Calculation :\n";
		cout << " -----------------------------------\n"; 	
	cout<<" Please enter the Principle value: ";
	cin>>p;
	cout<<" Please enter the Rate of Interest value: ";
	cin>>r;
	cout<<" Please enter the Time: ";
	cin>>t;
	i=(p*r*t)/100;
	cout<<" The Simple interest for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<i;
        cout << endl;
        break;
       case 2:cout<<"compound interest";
       float p1,r1,t1,cp,ci;
		cout << "\n\n Compound Interest Calculation :\n";
		cout << " -------------------------------------\n"; 	
	cout<<" Please enter the Principle value: ";
	cin>>p;
	cout<<" Please enter the Rate of Interest value: ";
	cin>>r;
	cout<<" Please enter the Time: ";
	cin>>t;	
    ci=p1*pow((1+r1/100),t1)-p1;	
    cp=p1*pow((1+r1/100),t1);
    cout<<" The Interest after compounded for the amount "<<p1<<" for "<<t1<<" years @ "<<r<<" % is: "<<ci;    
    cout << endl; 
	cout<<" The total amount after compounded for the amount "<<p1<<" for "<<t1<<" years @ "<<r<<" % is: "<<cp;    
    cout << endl; 
       cout << endl;
       break;
	}
    }while(option!=3);
	system("pause>0");
}

