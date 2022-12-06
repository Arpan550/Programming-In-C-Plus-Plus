#include<iostream>
#define MAX 5
using namespace std;
int stack[MAX];
int TOP=-1;

class STACK{
	public:
		void push(int value){
	        if(TOP==MAX-1){
		        cout<<"STACK IS OVERFLOW!!@!"<<endl;
	        }
	        else{
	        	TOP++;
	        	stack[TOP]=value;
	        }
        	cout<<"\nTop Index: "<<TOP<<endl;
	        cout<<"Top Element: "<<stack[TOP]<<endl;
        }
		
		void pop(){
	        int p;
	        if(TOP==-1){
		        cout<<"STACK IS UNDERFLOW!!@!"<<endl;
	        }
	        else{
	        	p=stack[TOP];
		        TOP--;
		        cout<<"\nTop Index: "<<TOP<<endl;
    	        cout<<"Top Element: "<<stack[TOP]<<endl;
	        }
        }
        
        void isEmpty(){
	        if(TOP==-1){
		       cout<<"Stack is EMPTY!!@!"<<endl;
	        }
	        else{
	        	cout<<"Stack is not EMPTY!!@!"<<endl;
			}
        }
        
        void isFULL(){
        	if(TOP==MAX-1){
		        cout<<"Stack is Full"<<endl;
	        }
	        else{
	        	cout<<"Stack is not Full"<<endl;
			}
        }
        
        void count(){
	        cout<<"No. of Element in the STACK:: "<<TOP+1<<endl;
        }
        
        void peek(){
	        if(TOP==-1){
	        	cout<<"\nSTACK IS EMPTY!!@!\n";
			}
			else{
				cout<<"\nTop Index: "<<TOP<<endl;
    	        cout<<"Top Element: "<<stack[TOP]<<endl;
			}
        }
        
        void display(){
    	    int i;
    	    cout<<"\nSTACK::::\n";
    	    for(i=TOP;i>=0;i--){
    		    cout<<stack[i]<<"\n----\n";
		    }
	    }
	    
	    void change(int val){
	    	stack[TOP]=val;
		}
};



int main(){
	STACK ob;
	char choice;
	int value;
	while(1){
		cout<<"Do you want to Enter:  y/n?  ";
		cin>>choice;
		if(choice=='y' || choice=='Y'){
			cout<<"Enter num to insert: ";
			cin>>value;
			ob.push(value);
		}
		else{
			break;
		}
	}
	
	while(1){
		cout<<"Do you want to Delete:  y/n?  ";
		cin>>choice;
		if(choice=='y' || choice=='Y'){
			ob.pop();
		}
		else{
			break;
		}
	}
	
	while(1){
	int v, new_val;
	cout<<"\nEnter::\n0.Exit\n1.stack is empty or not!\n2.stack is full or not!\n3.change the top value\n4.count the no. of elements in the stack\n5.Display the stack"<<endl;
	cin>>v;
	switch(v){
		case 0:
			exit(1);
			getchar();
		case 1:
			ob.isEmpty();
			break;
			case 2:
				ob.isFULL();
				break;
				case 3:
					cout<<"Enter new value: ";
					cin>>new_val;
					ob.change(new_val);
					break;
					case 4:
						ob.count();
						break;
						case 5:
							ob.display();
							break;
							default:
								break;
	}
   }
   return 0;
}
