// print current time

#include <time.h>
#include <stdio.h>

void fun1() {
	time_t _time;
	struct tm* timeinfo;
	time(&_time);
	timeinfo = localtime(&_time);
	printf("Current time and date:%s.\n", asctime(timeinfo));
}
