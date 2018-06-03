#define LIBNAME lib1.so

#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char** argv) {
	void* handle;
	char* error;
	// open dynamic lib
	handle = dlopen("./lib1.so", RTLD_LAZY);
	// dlopen returns null on error, check and print error info.
	if (handle == NULL) {
		error = dlerror();
		printf("Can't load dynamic lib: %s\n", error); }
	// map function in the lib.
	typedef void (*FUN_PTR)();
	FUN_PTR funptr;
	funptr= dlsym(handle, "print");
	if (funptr == NULL) {
		error = dlerror();
		printf("Can't load function: %s\n", error);
	}
	funptr();
	// unload dlib, dlclose return nonzero on error
	if (dlclose(handle) != 0) {
		printf("Can't unload handle: %s\n", error);
	}
}
