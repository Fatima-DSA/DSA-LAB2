#include<iostream>
using namespace std;
int main() {
	
	int* Array;
	int N;
	cout << "Enter The Size Of An Array : ";
	cin >> N;
	Array = new int[N];
	cout << "Enter Number Of Elements : ";
	for (int i = 0; i < N; i++) {
		cin >> Array[i];
	}
	for (int i = 0; i < N - 1; i++) {
		int SmallSub = i;
		for (int j = i + 1; j < N; j++) {
			if (Array[j] < Array[SmallSub]) {
				SmallSub = j;
			}
		}
		swap(Array[i], Array[SmallSub]);
	}cout << "The Sorteed Array Become  : ";
	for (int i = 0; i < N; i++) {
		cout << Array[i] << endl;
	}
	return 0;
}