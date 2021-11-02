#include <iostream>

using namespace std;

void InArr(int Arr[], const int size, int i)
{
	if (i < size)
	{
		Arr[i] = -10 + rand() % 18;
		InArr(Arr, size, i + 1);
		return;
	}
}

void PrArr(const int* const Arr, const int size, int i)
{
	if (i < size)
	{
		if (i == 0)
			cout << "{";
		cout << Arr[i];
		if (i != size - 1)
			cout << ", ";
		else cout << "}" << endl;
		PrArr(Arr, size, i + 1);
		return;
	}
}

int SumArr(int* Arr, const int size, int i)
{
	if (i < size)
	{
		if (Arr[i] % 2 == 0)
			return Arr[i] + SumArr(Arr, size, i + 1);
		else
			return SumArr(Arr, size, i + 1);
	}
	else
		return 0;
}

int main()
{
	srand((unsigned) time(NULL));
	const int n=5;
	int Arr[n];

	InArr(Arr, n, 0);
	PrArr(Arr, n, 0);
	SumArr(Arr, n, 0);
	cout << "Sum = " << SumArr(Arr,n,0) << endl;
 
return 0;
}