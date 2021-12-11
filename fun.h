#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
//1 задание 
/*void arr(int* mas, const int n) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 41 - 20;
	}
}
void print_matrix(int* mas, int n) {
	for (int i = 0; i < n; i++) {
		cout << setw(4) << mas[i];
	}
	cout << endl;
}
int col(int* mas, int n) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 2 != 0) {
			k += mas[i];
		}
	}
	return k;
}*/
//2 задание 
/*void arr(int* mas, int n) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 121 - 60;
	}
}
void print_matrix(int* mas, int n) {
	for (int i = 0; i < n; i++) {
		cout << setw(4) << mas[i];
	}
	cout << endl;
}
int col(int* mas, int n) {
	int k = 1;
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0) {
			k *= mas[i];
		}
	}
	return k;
}*/
//3 задание
/*void fill_random(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 31 - 0;
		}
	}
}
void print_matrix(int** mas, int n,int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}
double srgeom(int** mas, int n, int m) {
	double sred=1.0;
	for (int i = 0; i < n; i++) {
		sred *= sqrt(mas[i][i]);
	}
	return sred;
}*/
//4 задание
void fill_random(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 81 - 40;
		}
	}
}
void print_matrix(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}
int col(int** mas, int n, int r) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i][r] >= 0) { k++; }
	}
	return k;
}