#include <iostream> 
using namespace std;
int main()
{
	// =========================================================
	// PART 1: 1D Arrays Definitions & Initialization
	// =========================================================
	// int nums[5];                 
	// int nums[5] = {};            
	// int nums[5] = {10, 20, 30};  

	// int nums[] = {1, 2, 3, 4, 5}; 
	// int nums[];                  // Error
	// int nums[3] = {1, 2, 3, 4};  // Error

	// Static Array 
	
	cout << "--- Section 1: Static Array Definition & Input ---\n";
	int nums[5] = { 1, 2, 4, 5, 6 };

	/* // To enter values from user:
	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
	}
	*/

	// =========================================================
	// PART 2: Sum & Average
	// =========================================================
	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += nums[i];
	}
	cout << "Sum = " << sum << " | Avg = " << sum / 5 << endl;

	// =========================================================
	// PART 3: Find Maximum & Minimum
	// =========================================================
	int max = nums[0], min = nums[0];
	for (int i = 1; i < 5; i++)
	{
		if (nums[i] > max) max = nums[i];
		if (nums[i] < min) min = nums[i];
	}
	cout << "Max is: " << max << " | Min is: " << min << endl;

	// =========================================================
	// PART 4: Linear Search
	// =========================================================
	cout << "\n--- Section 4: Linear Search ---\n";
	int searchList[] = { 2, 32, 3, 4, 5, 6, 4, 5, 2, 3 };
	int target = 2;
	int index = -1;

	for (int i = 0; i < 10; i++)
	{
		if (searchList[i] == target)
		{
			index = i;
			// break; // Optional: to find the FIRST occurrence
		}
	}

	if (index != -1)
		cout << "Value " << target << " found at index: " << index << endl;
	else
		cout << "Value not found" << endl;

	// =========================================================
	// PART 5: Reverse Array (In-Place Method)
	// =========================================================
	cout << "\n--- Section 5: Reverse Array ---\n";
	int arrToReverse[] = { 2, 3, 4, 5, 6 };
	int n = 5;
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = arrToReverse[i];
		arrToReverse[i] = arrToReverse[n - i - 1];
		arrToReverse[n - i - 1] = temp;
	}

	cout << "Array after Reverse: ";
	for (int i = 0; i < n; i++)
	{
		cout << arrToReverse[i] << " ";
	}
	cout << endl;

	// =========================================================
	// PART 6: Reverse using Help Array (Newnums)
	// =========================================================

	/*	
		int Newnums[5];
		for (int i = 0; i < 5; i++)
		{
			Newnums[i] = nums[4 - i];
		}
		cout << "nums after Reverse \n";
		for (int i = 0; i < 5; i++)
		{
			cout << Newnums[i];
		}
		for (int i = 0; i < 5; i++)
		{
			nums[i] = Newnums[i];
		}
	*/

}
