#include <stdio.h>
#include <math.h>

float max(float x, float y) 
{
	return (x > y) ? x : y; //Использовал тернарный оператор потому что лень писать условия для if
}
float func(float x, float y, float z)
{
	return max(pow(z,1/3),x+y);
}
int main()
{
	for(float x = 0;x<=2.0f;x+=2)
	{
		for(float y = 0.1;y<=1.0f;y+=0.9f)
		{
			float z;
			if (x - y <= 1)
				z = sqrt(x) + sin(y);
			else
				z = sqrt(x) / y;
			printf("x=%f y=%f z=%f U=%f\n", x, y, z, func(x, y, z));
		}
	}
	return 0;
}