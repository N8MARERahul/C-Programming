//1. Write a C Program to list all files and sub-directories in a directory.

#include <stdio.h>
#include <dirent.h>
int main() {
	struct dirent *files;
	DIR *dir = opendir(".");
	if (dir == NULL) {
    	printf("Directory cannot be opened!" );
    	return 0;
	}
	while ((files = readdir(dir)) != NULL)
		printf("%s\n", files->d_name);
	closedir(dir);
	return 0;
}
