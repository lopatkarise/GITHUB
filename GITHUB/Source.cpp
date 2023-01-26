#include<iostream>
using namespace std;
int func(int x) {
	return x + 10;
}
void fill(int arr[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = size;
	}
}
int arr[10];
int main() {
	fill(arr, 10);
	cout << "Hello world!" << func(20);
}