#include <iostream>
#include <string>
using namespace std;


void Sorting(int *arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int k = 0; k < n - i - 1; k++) {
			if (*(arr + k) > *(arr + k + 1)) {
			
				int placeholder = *(arr + k);
				*(arr + k) = *(arr + k + 1);
				*(arr + k + 1) = placeholder;
			
			
			
			
			}
		
		
		
		}
	
	
	
	
	
	}





};






int main() {
	cout << "Student Name: Jacob Kyeyune \n";
	cout << "Student ID: 900875857 \n \n";

	int arr[10];
	int* arr2 = new int[10];


	cout << "Please enter 10 integer numbers separated by spaces: ";
	for (int i = 0; i < 10; i++) {
	
		cin >> arr[i];
	
	}

	Sorting(arr, 10);

	for (int i = 0; i < 10; i++) {
		arr2[9 - i] = arr[i];
	
	}

	cout << "The first array displayed in ascending order is: ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ", ";
	
	}

	cout << "\nThe second array displayed in descending order is: ";
	for (int i = 0; i < 10; i++) {
		cout << arr2[i] << ", ";

	}
	delete[] arr2;


	cin.get();
	cin.ignore();
	return 0;
}