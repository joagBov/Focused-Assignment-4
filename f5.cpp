/*
  By: Elijah Atta-Konadu
  Filename: F5.cpp
  Student ID: 872260
  Description: A program that gets users input and finds the lowest number
*/
#include <iostream>
using namespace std;

int modifyArrayValues(int num[], const int kSize) {
	for (int i = 0; i < kSize; i++) {
		//Asks the user to enter a value for each line.
		cout << "Enter a number ";
		cin >> num[i];
	}
	return 0;
}
int minArrayValue(int num[],const int kSize) {
 int min = 0;
 int index = 0;
	for (int i = 0; i < kSize; i++) {
		if (num[i] < min) {
			//If it it the smallest switch the min with the new one.
			min = num[i];
			//Keep track of the min index.
			index = i;
		}
	}
	return index;
}
int main() {
	const int kSize = 10;
	int num[kSize] = {};
	int index = 0;
	int min = -1;
	modifyArrayValues(num,kSize);
	index = minArrayValue(num, kSize);
	cout << "The lowest v" << min << " at index " << index;
 }
