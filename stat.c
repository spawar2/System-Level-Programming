#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

#define MAX_FILENAME 50

void displayFileInfo(const char * filename){
    struct stat statbuf;
    stat(filename, &statbuf);
    printf("[%s]: %ld, %s\n", filename, (long)statbuf.st_size, ctime(&(statbuf.st_mtime)));
}

int main (int argc, char *argv[]) {
    printf("%s\n", argv[0]);
    displayFileInfo(argv[1]);
}
