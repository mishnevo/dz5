#include "mass.h"
int main()
{
	int n;
	do {
		cin >> n;
		double* arr = 0;
		arr = memory_all(n, arr);
		filling(n, arr);
		show(n, arr);
		del(arr);
	} while (n != 0);
	
	
}

