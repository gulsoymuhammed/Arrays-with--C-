#include<iostream>

using namespace std;
float sum(float parameter[],int length);
void bubbleSort(int arr[], int n);
void printarray(int arr[], int n);
int main() {
	float numbers[4];

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter the side of four squares: " << endl;
		cin >> numbers[i];
		cout << "The perimeter of the square: " << 4 * numbers[i] << endl;
		cout << "The area of the square " << numbers[i] * numbers[i] << endl;

	}
	cout << "\n\n\n";
	float arr[] = { 1.2,12,43,21.3,45.5,15.5 };
	cout << "Summation of elements are: " << sum(arr, 6) << endl;
	cout << "Size of the array : " << sizeof(arr) / sizeof(arr[0]) << endl;

	int arr2[] = { 1,12,43,21,45,15 };
	cout << "Initial Array" << endl;
	printarray(arr2, 6);
	cout << "Ordered Array" << endl;
	bubbleSort(arr2, 6);

	return 0;
}

float sum(float parameter[],int length)
{
	float sum = 0.0;
	for (int i = 0; i < length; i++)
	{
		sum += parameter[i];
	}
	return sum;
}


void bubbleSort(int arr[], int n)
{
	int i, j;
	for ( i = 0; i < n-1; i++)
	{
		for (j = 0; j < n - i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j],&arr[j + 1]);
			}
		}
	}
}

void printarray(int arr[], int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}
