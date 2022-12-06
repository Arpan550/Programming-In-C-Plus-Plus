#include<iostream>
#define MAX 20
using namespace std;
int queue[MAX];
int rear=-1;
int front=-1;

class QUEUE{
	public:
		int c;
		void enqueue(int value){
	        if(rear==MAX-1){
		        cout<<"Queue IS OVERFLOW!!@!"<<endl;
	        }
	        else{
	        	rear++;
	        	queue[rear]=value;
	        	c++;
	        }
        }
		
		void dequeue(){
	        int p;
	        if(front==-1){
	        	front=0;
			}
	        if(rear==-1){
		        cout<<"queue IS UNDERFLOW!!@!"<<endl;
	        }
	        else{
		        p=queue[front];
		        front++;
		        c--;
		        cout<<"\nDeleted element: "<<p<<endl;
	        }
        }
        
        void isEmpty(){
	        if(front=-1 &&rear==-1){
		       cout<<"Queue is EMPTY!!@!"<<endl;
	        }
	        else{
	        	cout<<"Queue is not EMPTY!!@!"<<endl;
			}
        }
        
        void isFULL(){
        	if(rear==MAX-1){
		        cout<<"Queue is Full"<<endl;
	        }
	        else{
	        	cout<<"Queue is not Full"<<endl;
			}
        }
        
        void count(){
	        cout<<"No. of Element in the QUEUE:: "<<c<<endl;
        }
        
        void display(){
    	    int i;
    	    cout<<"\nQUEUE::  ";
    	    for(i=front;i<=rear;i++){
    		    cout<<queue[i]<<"  ";
		    }
	}
};



int main(){
	QUEUE ob;
	char choice;
	int value;
	while(1){
		cout<<"Do you want to Enter:  y/n?  ";
		cin>>choice;
		if(choice=='y' || choice=='Y'){
			cout<<"Enter num to insert: ";
			cin>>value;
			ob.enqueue(value);
		}
		else{
			break;
		}
	}
	
	while(1){
		cout<<"Do you want to Delete:  y/n?  ";
		cin>>choice;
		if(choice=='y' || choice=='Y'){
			ob.dequeue();
		}
		else{
			break;
		}
	}
	
	while(1){
	int v;
	cout<<"\nEnter:\n0.Exit\n1.queue is empty or not!\n2.queue is full or not!\n3.count the no. of elements in the queue\n4.Display the queue"<<endl;
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
					ob.count();
					break;
					case 4:
						ob.display();
						break;
						default:
							break;
	}
   }
   return 0;
}
