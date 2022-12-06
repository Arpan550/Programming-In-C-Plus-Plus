#include<iostream>
using namespace std;

class rectangle {
	private:
		int l,b;
		
	public:
	   rectangle(int x,int y){
	   	l=x;
	   	b=y;
	   }	
	   
	   void area() {
	   	cout<<"Area of rectangle:: "<<l*b<<endl;
	   }
	   void perimeter() {
	   	cout<<"Perimeter of rectangle:: "<<2*(l+b);
	   }
};
int main() {
	int length,breadth;
	cout<<"Enter the length and breadth of rectangle:\n";
	cin>>length>>breadth;
	rectangle ob(length, breadth);
	ob.area();
	ob.perimeter();
	return 0;
}
