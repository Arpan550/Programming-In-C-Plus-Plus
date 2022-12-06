//CHECK PRIME NUMBERS

#include<iostream>
using namespace std;
int main()
 {
 	int num,i,c=0;
 	cout<<"Enter a num: ";
 	cin>>num;
 	for(i=1;i<=num;i++) {
 		if(num%i==0){
 			c++;
		 }
	 }
	 if(c==2){
	 	cout<<num<< " is PRIME";
	 }
	 else{
	 	cout<<num<<" IS NOT PRIME";
	 }
 	return 0;
 }

