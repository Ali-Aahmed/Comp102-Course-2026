// Lect7_Pointers.cpp 

#include <iostream>
#include <string>
using namespace std;

// Recursion مراجعة لل
bool IsPalindrome(string str, int f, int l) {

	if (f >= l)
	{
		return true;
	}
	if (str.length() <= 1)
	{
		return true;
	}
	if (str[f] != str[l]) // f != l 
	{
		return false;
	}
	// f = 0  l = 4
	// f = 1  l = 3
	// f = 2  l = 2

	// 0 1 2 3 4
	// r a d b r  
	return IsPalindrome(str, f + 1, l - 1);
}

int main()
{
	string str;
	for (size_t i = 0; i < 6; i++)
	{
		cout << "Enter a string: ";
		getline(cin, str);
		cout << IsPalindrome(str, 0, str.length() - 1) << endl;
	}
	/// Pointers :
	//  Pointer Basics : Address-of Operator (&) and Dereference Operator (*)
		//  Pointer Types : int*, double*, char*, etc.
		//  Pointer Arithmetic : Incrementing and Decrementing Pointers
		//  Dynamic Memory Allocation : new and delete Operators
	/// strings :
		//  C-style Strings : Character Arrays and Null Terminator
		//  String Literals and String Initialization 
		//  std::string Class : Introduction and Basic Operations

	//int x = 10;
	//int* ptr = &x;  // Pointer to an integer

	//cout << "Value of x: " << x << endl;          // Output: 10
	//cout << "Address of x: " << &x << endl;      // Output: (address of x)
	//cout << "Value of ptr: " << ptr << endl;    // Output: (address of x)
	//cout << "Dereferenced value of ptr: " << *ptr << endl;  // Output: 10


	//*ptr = 7;
	//cout << "Updated value of x: " << x << endl;

	//*ptr += 3;
	//cout << "After incrementing pointer value: " << x << endl;
	//cout << "pointer value: " << ptr << endl;

	//int n;
	//cout << "Enter the size of the array: ";
	//cin >> n;
	//int* arr = new int[n];  // Dynamic array of integers

	//for (int i = 0; i < n; ++i) {
	//	arr[i] = i * 2;  // Initialize array elements  0 2 4 6 8 
	//}

	////int x = 1;
	//
	////++x;
	////x++;

	////int y = x++;  // 1    2 
	////int z = ++x;  // 2    3



	//cout << ++ * arr << endl;  //1
	//cout << *(arr + 1) << endl;  //2 


	////cout << "Dynamic array values: ";
	////for (int i = 0; i < n; ++i) {
	////	cout << *(arr + i) << " "; // 100 -  104 - 108
	////	//cout << arr[i] << " ";  
	////}
	////cout << endl;

	//delete[] arr;  // Deallocate dynamic array memory



	//Example for length,find ,substring,replace,at ,append,insert,erase
	//string str = "5";
	//string str2 = "2";

	//cout << str2 + " " + str << endl;

	//str.append(" World");
	//cout << "Length of str: " << str.length() << endl;			// Output: 11
	//cout << "Find 'World' in str: " << str.find("World") << endl;  // Output: 6	
	//cout << "Substring of str (0, 5): " << str.substr(0, 5) << endl;  // Output: Hello
	//str.replace(6, 5, "C++");										// Replace "World" with "C++"
	//cout << "After replacement: " << str << endl;			 // Output: Hello, C++!
	//cout << "Character at index 1: " << str.at(1) << endl;  // Output: e
	//str.append(" Welcome");									// Append to the string
	//cout << "After appending: " << str << endl;					// Output: Hello, C++! Welcome!

	//str.erase(9, 8);  // Erase "Welcome"
	//cout << "After erasing: " << str << endl;  // Output: Hello, C++!





}
