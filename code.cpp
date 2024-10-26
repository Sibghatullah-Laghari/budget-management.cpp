#include<iostream>

using namespace std;

int main(){
	
	double income,expense,groceries, entertainment, education,texpense,saving;
	
	cout <<"Enter your total Income in this formate (1930000): ";
	
	cin >> income;
	
	cout << "Enter your expenses of groceries, entertainment, and education respectively, and your total  expenses must be less than or equal to income:  "<<endl;
	
	cin >> groceries >> entertainment >> education;
	
	
	texpense = groceries+entertainment+education;
	
	cout <<"Your total expense is: "<< texpense << endl;
	
	saving = income-texpense;
	
	cout <<"Your are saving: "<< saving << endl;
}
