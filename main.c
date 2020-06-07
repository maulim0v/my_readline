#include "my_readline.h"

#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stdio.h>

void test_1();

int main( int argc, const char* argv[] )
{
    test_1();
    freeStorage(big_storage);
    return 0;
}

void test_1() {
    int fd;
    char* str;

    system("echo 'line1' > file.txt");
    system("echo 'line2' >> file.txt");
    system("echo 'line3' >> file.txt");
    system("echo 'line4' >> file.txt");
    system("echo 'line5' >> file.txt");
    system("echo 'line6' >> file.txt");
    system("echo 'line7' >> file.txt");

    fd = open ("file.txt", O_RDONLY);
    int i = 0;
    while ( (str = myReadline(fd)) != NULL) 
    {   
        printf("%s\n", str);
        free(str);
        ++i;
    }
    close(fd);
}