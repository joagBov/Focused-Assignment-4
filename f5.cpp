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

}
int main() {
	const int size = 10;
	int num[size] = {};
	int index = 0;
	int min = -1;
	modifyArrayValues(num,size);
	index = minArrayValue(num, size);
	cout << "The lowest v" << min << " at index " << index;
}

}