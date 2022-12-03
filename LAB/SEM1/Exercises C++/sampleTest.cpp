#include <iostream>

using namespace std;

typedef signed int sint;
#define N 100
static int n = N;

inline int f(const int n, int& i, int* j, int t[2], int p=11)
{
	i*=i;
	(*j)--;
	
	if ( n<=0 )
	{
		cout << ::n << ">\n";
		return t[0];
	}
	else return f(n-1, i, j, t) + t[n];
}

int main()
{
	int n = 4;
	int x = 1U;
	sint y = 10;
	int (*fptr)(const int, int&, int*, int*, int) = f;

	int* t = new int[n];
	int& r = *(t+3);
	(*t) = 1;
	*(t+1) = 2;
	t[2] = 3;
	r = 4;

	int z = (*fptr)(5, x, &y, t, 12);	

	for(int i = 0; i < 2*n; i++)
	{
		if( i == n )
			continue;
		if( i > n )
			break;
		cout << t[i] << "\n";
	};
	cout << x << ", " << y << ", " << z << "\n";
	
	delete[] t;
}