#include<iostream>
#define size 20
using namespace std;

int main() {
	int arr[size];
	int i,min,max,SIZE;
	cout<<"Enter the Size of Array:: ";
	cin>>SIZE;
	cout<<"Enter elements: "<<endl;
	for(i=0;i<SIZE;i++){
		cin>>arr[i];
	}
	max=arr[0];
	for(i=0;i<SIZE;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	min=arr[0];
	for(i=0;i<SIZE;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	
	cout<<"Max value: "<<max<<endl;
	cout<<"Min value: "<<min;
}
