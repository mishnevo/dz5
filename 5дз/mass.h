#pragma once
#include <iostream>
using namespace std;
double* memory_all(int n, double *arr) {
	return new double[n];
}
void filling(int n, double* arr) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 41 - 20;
	}
}
void show(int n, double* arr) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " | ";
	}
	cout << endl;
}
void del(double* arr) {
	delete[] arr;
}


