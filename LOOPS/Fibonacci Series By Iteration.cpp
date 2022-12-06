//FIBONACCI SERIES(ITERATION APPROACH)

#include<iostream>
using namespace std;
int main()
 {
    int i,num,s=0,c1=0,c2=1,c3;
    cout<<"Enter no of elements: ";
    cin>>num;
    cout<<"Fibonacci series upto "<<num<<" terms:: ";
    if(num==1){
    	cout<<c1<<" ";
	}
	else if(num==2){
		cout<<c2<<" ";
	}
	else if(num>2){
	    cout<<c1<< " "<< c2<< " ";
        for(i=2;i<num;i++){
            c3=c1+c2;
	        c1=c2;
	        c2=c3;
	        cout<<c3<<" ";	
        }
	}
 	return 0;
 }
