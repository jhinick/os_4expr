#define HELP_FILE "verrsion3helpfile"
#define BUFFSIZE 128

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void printHelpInfo();

int main(int argc, char** argv) {
	if (argc == 0 || argc > 1) {
		printHelpInfo();
	}
	if (argv[1] == "help") {
		printHelpInfo();
	}	
	int i = atoi(argv[1]);
	switch(i):
	case 1:
	case 2:
	case 3:

}

void printHelpInfo() {
	int fd = open(HELP_FILE, O_RDONLY);
	if (fd == -1) printf("Open file error\n");
	char* buf[BUFFSIZE];
	int temp;
	while ((temp = read(fd, buf, BUFFSIZE)) != 0) {
		write(stdout, buf, temp);
	}
}
