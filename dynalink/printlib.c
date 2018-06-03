
#include <stdio.h>

#define step1
//#define step2

// define step1, print "hello world"
#ifndef step1
void print() {
	printf("Hello World!\n");
}
#endif


// define step1, print "hello china"
#ifndef step2
void print() {
	printf("Hello China!\n");
}
#endif
