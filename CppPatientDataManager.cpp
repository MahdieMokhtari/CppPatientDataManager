#include <iostream>
#include <string.h>
using namespace std;

struct date
{
	int y , m , d;
};
struct patient
{
	char Fname [20];
	char Lname [20];
	date birth;
	int age;
	char gender [10];
	int blood_sugar;
};

void print (patient );

int main ()
{
	patient a[100];
	int n; 
	cin >> n;
	for (int i=0 ; i<n ; i++)
	{
		cin>>a[i].Fname>>a[i].Lname;
		cin>>a[i].birth.y>>a[i].birth.m>>a[i].birth.d;
		cin>>a[i].age>>a[i].gender>>a[i].blood_sugar;
	}

	patient min_age=a[0];
	for (int i=0 ; i<n ; i++)
		if (a[i].age < min_age.age)
			min_age=a[i];
		print (min_age);
	
	int men=0 , women=0;
	for (int i=0 ; i<n ; i++)
	{
		if (a[i].gender=="men")
		men++;
		
		if (a[i].gender=="women")
		women++;
	}
	cout<<"number of men: "<<men<<'\n';
	cout<<"number of women: "<<women<<'\n';	

	int x=0,z=0;
	int longchar=strlen(a[0].Fname);
	for (int i=0 ; i<n ; i++)
	{
		if (a[i].blood_sugar > 100)
		x++;
		
		if (strlen(a[i].Fname) > 10)
		z++;
		
		if (a[i].birth.y == 1380)
		print (a[i]);
	}
	cout<<"number of high blood sugar: "<<x<<'\n';
	cout<<"number of longchar: "<<z<<'\n';

	for (int i=0 ; i<n ; i++)
	print (a[i]);
	
}

void print (patient a)
{
	cout<<'\n'<<a.Fname<<'\t'<<a.Lname<<'\n';
	cout<<a.birth.y<<'\t'<<a.birth.m<<'\t'<<a.birth.d<<'\n';
	cout<<a.age<<'\t'<<a.gender<<'\t'<<a.blood_sugar<<'\n';
}
