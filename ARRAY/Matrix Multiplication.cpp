//Matrix Multiplication
#include<iostream>
using namespace std;
int main(){
   int m1,m2,n1,n2,i,j,k;
    cout<<"Enter the details of 1st matrix"<<endl;
    cout<<"Rows: ";
    cin>>m1;
    cout<<"Col: ";
    cin>>n1;
    cout<<"Enter the details of 2nd matrix"<<endl;
    cout<<"Rows: ";
    cin>>m2;
    cout<<"Col: ";
    cin>>n2;
    int arr[m1][n1],brr[m2][n2],crr[m1][n2];
    cout<<"Enter elements for 1st matrix:"<<endl;
    for(i=0;i<m1;i++){
	    for(j=0;j<n1;j++){
		    cin>>arr[i][j];
	    }
    }  

    cout<<"Enter elements for 2nd matrix:"<<endl;
    for(i=0;i<m2;i++){
	    for(j=0;j<n2;j++){
		    cin>>brr[i][j];
	    }
    }
    //printing 1st
    cout<<"\nYour 1st matrix is :\n"<<endl;
    for(i=0;i<m1;i++){
	    for(j=0;j<n1;j++){
		    cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
    }
    //printing 2nd
    cout<<"\nYour 2nd matrix is :\n"<<endl;
    for(i=0;i<m2;i++){
	    for(j=0;j<n2;j++){
		    cout<<brr[i][j]<<" ";
	    }
	    cout<<endl;
    }
    if(n1!=m2){
	    cout<<endl<<"Matrix multiplication not possible.";
    }
    else{
        for(i=0;i<m1;i++){
	        for(j=0;j<n2;j++){
		        crr[i][j]=0;
		        for(k=0;k<n1;k++){
			        crr[i][j]+=arr[i][k]*brr[k][j];
		        }
	        }
        }
        //printing multiplication
        cout<<"\nAfter multiplicaton, your resultant matrix is :\n"<<endl;
        for(i=0;i<m1;i++){
	        for(j=0;j<n2;j++){
		        cout<<crr[i][j]<<" ";
     	    }
	        cout<<endl;
        }
    }
	return 0;
}
