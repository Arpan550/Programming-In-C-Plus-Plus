#include<iostream>
using namespace std;

int main() {
	int i,j,c=0,range;
	cout<<"Enter the last range:: ";
	cin>>range;
	cout<<"Prime numbers between 1 and "<<range<<" ::"<<endl;
	for(i=1;i<=range;i++) {
		c=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				c++;
				}
		}
		if(c==2){
		cout<<i<<endl;
	}
	}
	
	return 0;
}
