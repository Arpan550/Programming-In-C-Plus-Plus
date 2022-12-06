#include<iostream>
using namespace std;

class circle{
	public:
		float radius;
		void area() {
			cout<<"Area="<<3.14*radius*radius<<endl;
		}
		void perimeter() {
			cout<<"Perimeter="<<2*3.14*radius;
		}
};

int main() {
	circle ob;
	cout<<"Enter Radius: ";
	cin>>ob.radius;
	ob.area();
	ob.perimeter();
	return 0;
}
