#include "../Vector.hpp"
#include <stdio.h>

void PrintVector(const Vector& v)
{
	printf("[");
	for (unsigned int i = 0; i < v.GetSize(); ++i)
	{
		if (i != 0) printf(", ");
		printf("%f", v.GetVector()[i]);
	}
	printf("]\n");
}

int main()
{
	double tab1[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double tab2[2] = { 9.0, 10.0 };
	Vector v1(tab1, 5);

	v1.AddVector(tab2, 2);
	printf("v1=");
	PrintVector(v1);

	return 0;
}
