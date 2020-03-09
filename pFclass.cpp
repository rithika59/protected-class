#include<iostream>
using namespace std;

class Calculator
{
	protected:
		Calculator()
		{
		};
	

	virtual int add(int& a, int& b)
		{
			return a+b;
		}
	virtual int mul(int& a, int& b)
		{
			return a*b;
		}
	int sub(int& a, int& b)
		{
			return a-b;
		}
	float div(int& a, int& b)
		{
			return a/b;
		}
};

class Pair: protected Calculator
{
	protected:
		int i1;
		int i2;
	public:
		Pair():i1(0),i2(0){}
		Pair(int a, int b):i1(a),i2(b){}
		int getFirst()
		{
			return i1;
		}
		int getSecond()
		{
			return i2;
		}
		
		int add()
		{
			return Calculator::add(i1,i2);
		}
		int mul()
		{
			return Calculator::mul(i1,i2);
		}
};

int main()
{
	Pair p1(3,4);
	Pair p2(2,5);
	cout<<"sum of "<<p1.getFirst()<< "and"<<p1.getSecond()<<endl;
	int res1 = p1.add();
	cout<<res1<<endl;
	cout<<"product of "<<p2.getFirst()<< "and"<<p2.getSecond()<<endl;
	int res2 = p2.mul();
	cout<<res2<<endl;
	return 0;
}
