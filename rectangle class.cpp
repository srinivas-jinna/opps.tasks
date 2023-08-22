#include<iostream>
using namespace std;
class rectangle{
	private:
		int a1=10,a2=20;
	public:
		int getarea(int length,int breath)
		{
			return length*breath;
		}
		int getperimeter(int length,int breath)
		{
			return 2*(length+breath);
		}
		void change_value(int a,int b)
		{
			a1=a;
			a2=b;
		}
		void display()
		{
			cout<<"area:"<<a1<<" "<<"perimeter:"<<a2<<endl;
		}
};
int main(){
	int a,b;
	cin>>a>>b;
	rectangle r1;
	int k=r1.getarea(a,b);
	int l=r1.getperimeter(a,b);
	cout<<k<<" "<<l<<endl;
	r1.change_value(k,l);
	r1.display();
	return 0;
}
