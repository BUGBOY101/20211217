#define	_CRT_SECURE_NO_WARNINGS 1

//¿ìËÙÅÅÐò
// 
void quicksort(int a[], int left, int right) {
	if (left > right)
		return;
	int i, j, temp = a[left];
	i = left;
	j = right;
	while (i != j) {
		while (a[j] >= temp && i < j)
			j--;
		while (a[i] <= temp && i < j)
			i++;
		if (i < j) {
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(a, left, i - 1);
	quicksort(a, i + 1, right);
}
#include<iostream>
using namespace std;
int main() {
	int a[10] = { 1,3,42,45,6,7,8,0,5,6 };
	quicksort(a, 0, 9);
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
}

//#include<iostream>
//using namespace std;
//int main() {
//	int i, j;
//	for (i = 1; i <= 4; i++) {
//		for (j = 1; j <= 4 - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2*i-1; j++)
//			printf("*");
//		printf("\n");
//	}
//}