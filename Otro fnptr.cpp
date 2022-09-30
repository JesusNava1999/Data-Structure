#include <iostream>
#include <stdio.h>
float mult(float x, float y) { return x * y; }
float div(float x, float y) { return x / y; }
float sum(float x, float y) { return x + y; }
float rest(float x, float y) { return x - y; }

void resultado(const char *mssg, float (*fn)(float, float), float x, float y)
{
	printf("%s %.5f\n", mssg, fn(x, y));
}

int menu()
{
	int op;
	printf("[1] suma\n");
	printf("[2] resta\n");
	printf("[3] multiplicacion\n");
	printf("[4] division\n");
	printf("[5] terminar\n");
	scanf("%i", &op);
	return op;
}

int main()
{

	float (*fn)(float, float), a, b;

	scanf("%f%f", &a, &b);

	switch (menu())
	{
	case 1:
		resultado("Suma: ", sum, a, b);
		break;
	case 2:
		resultado("Resta: ", rest, a, b);
		break;
	case 3:
		resultado("Multiplicacion: ", mult, a, b);
		break;
	case 4:
		resultado("Division: ", div, a, b);
		break;
	default:
		fn = NULL;
	}

	if (fn != NULL)
	{
		printf("%.5f", fn(a, b));
	}
}
