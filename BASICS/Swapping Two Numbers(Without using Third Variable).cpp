//Swapping two num without using third variable
#include<iostream>
using namespace std;
int main()
 {
 	int num1,num2;
 	cout<<"Enter first num: ";
 	cin>>num1;
 	cout<<"Enter second num: ";
 	cin>>num2;
 	num1=num1+num2;
 	num2=num1-num2;
 	num1=num1-num2;
 	cout<<"Now,"<<endl<<"First num: "<<num1<<endl<<"and Second num: "<<num2;
 	return 0;
 }

