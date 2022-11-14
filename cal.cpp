#include<iostream>
using namespace std;
class Cal {
	private:
		int x,y;
	public:
		Cal() {
			x=0;
			y=0;
		}
		int add(int,int);
};
int Cal::add(int x,int y){
	return x+y;
}
int main(){
	Cal c;
	cout<<"add is "<<c.add(1,2)<<endl;
	return 0;
}
