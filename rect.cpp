#include<iostream>
using namespace std;
class rect{
	public:
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
	cout<<"Enter rectangle lenght and breadth:"<<endl;
	cin>>obj.len>>obj.bre;
	cout<<"Area : "<<obj.area()<<endl<<"Perimeter : "<<obj.perimeter();	
	return 0;
}
