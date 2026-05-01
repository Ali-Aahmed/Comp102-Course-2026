// Lect6_Function_Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
#include <iostream>  
#include<string>
using namespace std;

/// <summary> 
/// Recursion :   
		//  Base Case and Recursive Step
		//  Factorial Implementation
		//  Fibonacci Implementation
//  Performance Analysis : Recursion vs.Iteration
/// </summary>
/// <returns></returns>
/// 
 //function calling itself
int fact(int num)
{
	//5!  =  5 * 4! 
	//4!  =  4 * 3!
	//3!  =  3 * 2!
	//2!  =  2 * 1!
	//1!  =  1 
	//0!  =  1
	if (num == 0 || num == 1)
	{
		return 1;
	}
	return num * fact(num - 1);


}
int sum(int n) {

	if (n <= 1)
	{
		return n;
	}
	return n + sum(n - 1);
}

int power(int x, int y)  //x^y   2  3  = 8
{
	if (y == 0)
	{
		return 1;
	}
	if (y == 1)
	{
		return x;
	}
	return x * power(x, y - 1);
}
// 0 1 2 3 4 5 6 7  8
// 0 1 1 2 3 5 8 13 21 
int fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

void main()
{ 
 
	//cout << fact(4) << endl;//  24 

	//cout << sum(4) << endl;//  10
	//cout << sum(3) << endl;//  6
	//cout << sum(0) << endl;//  

	//cout << power(2, 0) << endl;  // 1 
	//cout << power(2, 3) << endl;  // 8 
	//cout << power(3, 2) << endl;  // 9
	//cout << power(5, 2) << endl;  // 25


		//cout << fib(0) << endl; //0
		//cout << fib(2) << endl; //1
		//cout << fib(3) << endl; //5
		//cout << fib(7) << endl; //13
		//cout << fib(10) << endl;//55
	  
}
