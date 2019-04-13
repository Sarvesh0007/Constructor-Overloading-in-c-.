#include<iostream>
using namespace std;
class B
{
	private:
		int a,b;
		public:
			A(float m)
			{
				b=m;
				cout<<b<<endl;
				cout<<"Hello"<<endl;
			}
			A(int l)
			{
				a=l;
				cout<<a<<endl;
			}
			A(int k,int m)
			{
				int res=k*m;
				cout<<"Result is ="<<res<<endl;
			}
};
int main()
{
	 B a1;
	a1.A(6);
	a1.A(2);
	a1.A(6,6);
}
