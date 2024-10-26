#include<iostream>

using namespace std;

int main(){
	
	double income,expense,gro, ent, education,texpense,profit;
	
	//income=total income, expense= expense, gro=grocry, texpense= total expenses
	
	cout<<"Enter your total Income in this formate (1930000): \n";
	
	cin>>income;
	
	cout<<"Enter your expensis of grocries, entertanment, and education respectivly, and your total  expensis must be less than or equal to income:  "<<endl;
	
	cin>>gro>>ent>>education;
	
	
	texpense=gro+ent+education;
	
	cout<<"Your total expense are: \n"<<texpense<<endl;
	
	profit= income-texpense;
	
	cout<<"Your are saving: \n"<<profit;
}
