#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	double pasta[3], juice[2];
	double result;

	for (int i = 0; i < 3; i++)
		cin >> pasta[i];
	for (int i = 0; i < 2; i++)
		cin >> juice[i];

	sort(pasta, pasta + 3);
	sort(juice, juice + 2);

	result = pasta[0] + juice[0];
	result += result * 0.1;

	printf("%.1lf", result);
	return 0;
}