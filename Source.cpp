#include "fun.h"
int main() {
	//1 задание
	/*const int n = 20;
	int mas[n];
    arr(mas, n);
	print_matrix(mas, n);
	cout << col(mas, n) << endl;*/
	//2 задание
	/*const int n = 15;
	int mas[n];
	arr(mas, n);
	print_matrix(mas, n);
	cout << col(mas, n) << endl;*/
	//3 задание
	/*int n = 3;
	int m = 3;
	int** mas;
	mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	fill_random(mas, n,m);
	print_matrix(mas, n,m);
	cout << srgeom(mas, n, m) << endl;*/
	//4 задание
	const int n = 3;
	const int m = 5;
	int** mas;
	mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	fill_random(mas, n, m);
	print_matrix(mas, n, m);
	int r;
	cin >> r;
	cout << col(mas, n,r) << endl;
}