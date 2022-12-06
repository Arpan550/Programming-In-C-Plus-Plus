//TAKING INPUT NAME AND ROLL AND PRINT
#include<iostream>
using namespace std;
 int main() {
 	char name[30];
 	int roll;
 	cout<<"Enter your name: ";
 	cin.get(name, 30);
 	cout<<"Enter roll: ";
 	cin>>roll;
 	cout<<endl<<"NAME : "<<name<<endl;
 	cout<<"Roll : "<<roll;
 	return 0;
 }
