#include<iostream> 
using namespace std;

//Lecture 5: Functions(Part 2 - Advanced)  // user defined

//Passing Arguments :   
//  Pass by Value
//  Pass by Reference
//Default Parameters  //opational par...
//Passing Arrays to Functions
//Static Variables  &  Global variable & local variable
//  
//Recursion :   
//  Base Case and Recursive Step
//  Factorial Implementation
//  Fibonacci Implementation
//  Performance Analysis : Recursion vs.Iteration
//Built - in Functions
//  math.h : sqrt, pow, abs, etc. 


//void swap(int , int);
//void swap(void);
//void swap(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void counter(int y, int z ,int x = 5)//Default
//{
//	x++;
//	cout << "Counter =" << x << endl;
//}

//int counter = 0;//gloable 
void increment()
{

	/*static int counter = 0;
	counter++;
	cout << counter << endl; */
}
//void ChangeValues(int arr[], int size) // pass by ref
//{
//	int x;//local 
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] += 2;
//	}
//
//}

int main() {

	cout << max(45, 56) << endl;
	cout << min(45, 56) << endl;
	cout << sqrt(45) << endl;
	cout << pow(2, 3) << endl;
	cout << sqrt(sqrt(81)) << endl;

	//increment();// 1  1
	//increment();// 2  1
	//increment();// 3  1
	//increment();// 4  1

	//ChangeValues(nums, 5);

	//cout << nums << endl;
	//cout << &nums << endl;

	//for (int i = 0; i < 5; i++)
	//{
	//	cout <<  nums[i] << endl;
	//} 


	//counter(2, 3);


	//int n1 = 4;
	//int n2 = 8;

	//cout << "Before Swap :   n1 : " << n1 << "  n2 : " << n2 << endl;//4 8 

	//swap(n1, n2);

	//cout << "After Swap  :   n1 : " << n1 << "  n2 : " << n2 << endl; //4 8
}
