//BUBBLE SORT
#include<iostream>
using namespace std;
int main(){
	int n,i,j,temp;
	cout<<"Enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements::\n";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Your array is ::  ";
	for(i=0;i<n;i++){		
	    cout<<arr[i]<<" ";
	}
//sorting
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
			    temp=arr[j];
			    arr[j]=arr[i];
			    arr[i]=temp;	
			}
		}
	}
		cout<<endl<<"After sorting your array is ::  ";
		for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
