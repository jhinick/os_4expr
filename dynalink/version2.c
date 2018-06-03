#define PLUGINDIR "./plugin2"
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
int main() {
	DIR* dir;
	dir = opendir(PLUGINDIR);	
	if (dir == NULL) printf("Can't open dir.\n");
	struct dirent* ptr;
	while ((ptr = readdir(dir)) != NULL) {
	//todo: handle every file in *.so	
	}	
	if (closedir(dir) == -1) perror("Failed closing dir.");
}
