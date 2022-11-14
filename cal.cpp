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
		int sub(int,int);
};
int Cal::add(int x,int y){
	return x+y;
}
int Cal::sub(int x,int y){
        return x-y;
}

int main(){
	Cal c;
	cout<<"add is "<<c.add(1,2)<<endl;
	cout<<"sub is "<<c.sub(5,1)<<endl;

	return 0;
}
