// count down by specified seconds

#include <unistd.h>
#include <stdio.h>

void fun2(int _second) {
	for(; _second >= 0; _second--) {
		printf("Counting down: %d...\n", _second);
		sleep(1);
	}
}
