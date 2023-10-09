#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void mang1chieu(float[], int&);
void xuatMang(float[], int);
float TongCucTieu(float[], int);

int main()
{
	float b[500];
	int k;
	mang1chieu(b, k);
	cout << "Mang 1 chieu la: \n";
	cout << "a[";
	xuatMang(b, k);
	cout << "]";
	cout << endl;
	cout << "Tong cac gia tri nho hon cac gia tri xung quanh la: ";
	cout << TongCucTieu(b, k);
	cout << endl;
}

void mang1chieu(float b[], int& k)
{
	cout << "Nhap n: ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i < k; i++)
	{
		b[i] = (rand() / (RAND_MAX / (100)));
	}
}

float TongCucTieu(float b[], int a)
{
	float S = 0;
	if (a == 1)
	{
		S += b[0];
		for (int i = 1; i <= a - 2; i++)
		{
			if (b[i] < b[i + 1] && b[i] < b[i - 1])
				S += b[i];
		}
		if (b[a - 1] < b[a - 2])
			S += b[a - 1];
	}
	return S;
}

void xuatMang(float b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << ",";
	}
}