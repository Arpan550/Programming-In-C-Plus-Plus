#include<iostream>
#include<cmath>
using namespace std;

class calculator{
	public:
		int a,b;
		void sum(){
		   cout<<"\nEnter a and b: "<<endl;
		   cin>>a;
		   cin>>b;
		   cout<<"\nSum= "<<a+b<<endl;	
		}
		void diff(){
			cout<<"\nEnter a and b: "<<endl;
		    cin>>a;
		    cin>>b;
			cout<<"\nDifference="<<a-b<<endl;
		}
		void mul() {
			cout<<"\nEnter a and b: "<<endl;
		    cin>>a;
		    cin>>b;
			cout<<"\nMultiplication= "<<a*b<<endl;
		}
		void div(){
			cout<<"\nEnter a and b: "<<endl;
		    cin>>a;
		    cin>>b;
			cout<<"\nDivision= "<<a/b<<endl;
		}
		void power(){
		    cout<<"\nEnter a and b: "<<endl;
		    cin>>a;
		    cin>>b;
			cout<<a<<" to the power "<<b<<" : "<<pow(a,b)<<endl;	
		}
		
};
int main(){
    calculator ob;
    int p;
    while(1){
        cout<<"Enter which operation you want to perform: "<<endl;
        cout<<"0.Exit\n1.Addition"<<endl<<"2.Substraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"5.Power\n";
        cin>>p;
        switch(p){
        	case 0:
        		exit(1);
        		getchar();
            case 1:
 	            ob.sum();
 	            break;
 		        case 2:
 			        ob.diff();
 			        break;
 			        case 3:
 				        ob.mul();
 				        break;
 				        case 4:
 					        ob.div();
 					        break;
 					        case 5:
 					        	ob.power();
 					        	break;
 					            default:
 						            break;
        }
    }
 return 0;
 }
