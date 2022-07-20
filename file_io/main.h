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
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void readFunc(char *a, char *b);
int checkFIle(char *a);
/*void appendFUnc(char *a, char *b);*/
void truncateFunc(/*char *a, */char *b, char *c);



#endif /*MAIN_H*/
