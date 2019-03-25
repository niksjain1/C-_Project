#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
struct Set_Budget
{	
	double set_housing;
	double set_utilities;
	double set_household_expenses;
	double set_transportation;
	double set_food;
	double set_medical;
	double set_insurance;
	double set_entertainment;
	double set_clothing;
	double set_miscellaneous;
};
struct ask_Budget
{
	double ask_housing;
	double ask_utilities;
	double ask_household_expenses;
	double ask_transportation;
	double ask_food;
	double ask_medical;
	double ask_insurance;
	double ask_entertainment;
	double ask_clothing;
	double ask_miscellaneous;
	
};
	void amounts(struct ask_Budget &a);
	void compare_budgets(struct ask_Budget student);
	void budget_alert(double);
int main()
{
	int a;
	double alert;
struct ask_Budget student;
ofstream outfile("nikhil",ios::out);
amounts(student); 
compare_budgets(student); 
budget_alert(alert);
outfile.write((char*)&student,sizeof(student));
outfile.close();
cout<<"\n\n\t\tif u want to see your previous month expense"<<endl;
cout<<"\n\n\t\tpress 1   =";
cin>>a;
switch(a)
{

case 1:
{

ifstream infile("nikhil",ios::binary|ios::in);

while(infile.read((char*)&student,sizeof(student)));
{
	cout<<"the last month expense for housing\t"<<student.ask_housing<<endl<<"the last month expense for utilities"<<student.ask_utilities<<endl<<"the last month expense for household expenses\t"<<student.ask_household_expenses<<endl<<"the last month expense for transportation\t"<<student. ask_transportation<<endl<<"the last month expense for food\t"<<student.ask_food<<endl<<"the last month expense for medical\t"<<student.ask_medical<<endl<<"the last month expense for insurance\t"<<student.ask_insurance<<endl<<"the last month expense for entertainment\t"<<student.ask_entertainment<<endl<<"the last month expense for clothing\t"<<student.ask_clothing<<endl<<"miscellaneous expenses\t"<<student.ask_miscellaneous<<endl;
	
}
}
}
getch();
}
void amounts (ask_Budget &amount) 
{
system("color 57");
system("cls");
cout<<"================================================================"<<endl;
cout<<"\n\n\t\t\t!!! Welcome To Niks Budget Calculator and tracker !!!\n\n";
cout<<"\n\t\t\t Developer    : NIKHIL JAIN  ";
cout<<"\n\t\t\t University   : LOVELY PROFESSIONAL UNIVERSITY";
cout<<"\n\t\t\t Registration No.   : 11505144 ";
cout<<"\n\t\t\t Section      : K1505";
cout<<"\n\t\t\t Email ID     : nikhiljain1222@gmail.com";
cout<<"\n\t\t\t Group        : 1"<<endl;
cout<<"================================================================"<<endl;
cout<<"\n\tENTER YOUR MONTHLY HOUSING EXPENSE :  ";
cin>>amount.ask_housing;
cout<<"\n\tENTER YOUR MONTHLY UTILITIES EXPENSE :  ";
cin>>amount.ask_utilities;
cout<<"\n\tENTER YOUR MONTHLY HOUSE-HOLD EXPENSES : ";
cin>>amount.ask_household_expenses;
cout<<"\n\tENTER YOUR MONTHLY TRANSPORTATION EXPENSE :";
cin>>amount.ask_transportation;
cout<<"\n\tENTER YOUR MONTHLY FOOD EXPENSE :";
cin>>amount.ask_food;
cout<<"\n\tENTER YOUR MONTHLY MEDICAL EXPENSE : ";
cin>>amount.ask_medical;
cout<<"\n\tENTER YOUR MONTHLY INSURANCE EXPENSE :  ";
cin>>amount.ask_insurance;
cout<<"\n\tENTER YOUR MONTHLY ENTERTAINMENT EXPENSE :  ";
cin>>amount.ask_entertainment;
cout<<"\n\tENTER YOUR MONTHLY CLOTHING EXPENSE :";
cin>>amount.ask_clothing;
cout<<"\n\tENTER YOUR MONTHLY MISCELLANEOUS EXPENSE : ";
cin>>amount.ask_miscellaneous;
}
void compare_budgets (ask_Budget amount)
{
Set_Budget monthly= { 1000.00, 3000.00, 650.00, 500.00, 250.00, 300.00, 1000.00, 150.00, 750.00, 500.00};
double result_housing;
double result_utilities;
double result_household_expenses;
double result_transportation;
double result_food;
double result_medical;
double result_insurance;
double result_entertainment;
double result_clothing;
double result_miscellaneous;
double result_budget = 0;
					result_housing = monthly.set_housing - amount.ask_housing;
					result_utilities = monthly.set_utilities - amount.ask_utilities;
					result_household_expenses = monthly.set_household_expenses - amount.ask_household_expenses; 
					result_transportation = monthly.set_transportation - amount.ask_transportation;
					result_food  = monthly.set_food- amount.ask_food;
					result_medical = monthly.set_medical - amount.ask_medical;
					result_insurance = monthly.set_insurance - amount.ask_insurance;
					result_entertainment = monthly.set_entertainment - amount.ask_entertainment;
					result_clothing = monthly.set_clothing- amount.ask_clothing;
					result_miscellaneous = monthly.set_miscellaneous - amount.ask_miscellaneous;

					cout<<"\n\n\tRESULTING BUDGET FOR Housing IS"<<" - $"<<result_housing;
					budget_alert ( result_housing);
					cout<<"\n\n\tRESULTING BUDGET FOR Utilities"<<"- $"<<result_utilities;
					budget_alert(result_utilities);
					cout<<"\n\n\tRESULTING BUDGET FOR Household expenses"<<" - $"<<result_household_expenses;
					budget_alert(result_household_expenses);
					cout<<"\n\n\tResulting Budget for Transport"<<"- $"<<result_transportation;
					budget_alert(result_transportation);
					cout<<"\n\n\tResulting Budget for Fooding"<<" -$"<<result_food;
					budget_alert(result_food);
					cout<<"\n\n\tRESULTING BUDGET FOR Medical"<<" -$"<<result_medical;
					budget_alert(result_insurance);
					cout<<"\n\n\tRESULTING BUDGET FOR Entertainment"<<" -$"<<result_entertainment;
					budget_alert(result_entertainment);
					cout<<"\n\n\tRESULTING BUDGET FOR Clothes"<<" - $"<<result_clothing;
					budget_alert(result_clothing);
					cout<<"\n\n\tRESULTING BUDGET FOR Miscellaneous"<<" - $"<<result_miscellaneous;
					budget_alert(result_miscellaneous);
					result_budget=result_housing+result_utilities+result_household_expenses + result_transportation + result_food 
                	+ result_medical+result_insurance + result_entertainment + result_clothing + result_miscellaneous + result_budget;
                   	cout<<"\n\n\t\t YOUR RESULT FOR THIS MONTH'S BUDGET IS : "<<"- $"<<result_budget<<endl;
                	budget_alert(result_miscellaneous);
                	getch();
}
void budget_alert ( double alert)
{
if ( alert == 0 )
{ 

    cout << " \n\n\n\t\t\t\t  ( RIGHT AT BUDGET ) "; 
}

else if ( alert > 0 )
{   
    
    cout << " \n\n\n\t\t\t\t  ( UNDER BUDGET ) ";
    
}

else if ( alert < 0 )
{   
    
    cout << " \n\n\n\t\t\t\t   ( OVER BUDGET ) " ;
    getch();
}
}
