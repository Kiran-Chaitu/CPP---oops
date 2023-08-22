#include<iostream>
using namespace std;
class rect{
	private:
		int n;
		n=10;
	public:
		int incrementer(){
			int val=n;
			return val++;
		}
		int len,bre;
		int area(){
			return len*bre;
		}
		int perimeter(){
			return 2*(len+bre);
		}
		
};
int main(){
	rect obj;
	cout<<"Enter rectangle length and breadth:"<<endl;
	cin>>obj.len>>obj.bre;
	cout<<"Area : "<<obj.area()<<endl<<"Perimeter : "<<obj.perimeter()<<obj.incrementer();	
	return 0;
}
