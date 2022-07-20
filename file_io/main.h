#ifndef MAIN_H
#define MAIN_H

#define SFNO STDOUT_FILENO
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters);

#endif /*MAIN_H*/
