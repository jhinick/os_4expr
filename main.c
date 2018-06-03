#include "cal.h"

#include <stdio.h>

int main(int argc, char** argv) {
	{
	int x = 6;
	int y = 222;
	int z = 0;
	for (z = 0; z < 3; z++) {
		x++;
	}
	
	
	}
	int i = 9, j = 6;
	int _sum, _sub, _multipy;
	float _divide;
	_sum = sum(i, j);
	_sub = sub(i, j);
	_multipy = multipy(i, j);
	_divide = divide(i, j);
	printf("i = %d, j = %d \n", i, j);
	printf("The sum of i and j is :%d\n", _sum);
	printf("The sub of i and j is :%d\n", _sub);
	printf("The multipy of i and j is :%d\n", _multipy);
	printf("The devide of i and j is :%f\n", _divide);
	return 0;
}
