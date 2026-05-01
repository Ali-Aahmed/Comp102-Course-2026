#include<iostream>
using namespace std;
void starLine();// Declartion

int maxNumbers(int x, int  y);
int Fact(int x)
{
	int f = 1;
	for (int i = 1; i <= x; i++)
	{
		f = f * i;   // f*=i; 
	}
	return f;
}

void main() {
	 

	starLine();
	cout << "Minia University" << endl;
	starLine();
	cout << "Computer Science" << endl;
	starLine();

	cout << Fact(4);
	//4!= 4*3*2*1   24    === 5!=5*4*3*2*1  = 120
	//pass by values
	int x = 10, y = 20;
	int res = maxNumbers(x, y); 
	cout << res;
}

void starLine()
{
	for (int j = 0; j < 20; j++)
		cout << "#";
	cout << endl;
}
double maxNumbers(double x, int  y, int  z)
{
	if (x >= y)
		return x;
	else
		return y;
}
double maxNumbers(int x, double  y)
{
	if (x >= y)
		return x;
	else
		return y;
}
double maxNumbers(double x, int  y)
{
	if (x >= y)
		return x;
	else
		return y;
}
int    maxNumbers(int x, int  y)
{
	/*int max;
	if (x>=y)
	{
		max = x;
	}
	else {
		max = y;
	}
	return max;*/

	if (x >= y)
		return x;
	else
		return y;
}
