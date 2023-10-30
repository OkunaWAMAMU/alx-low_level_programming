#ifndef _MAIN_H
#define _MAIN_H
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#define BUFFER_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_with_message(int code, const char *message);
int open_source_file(const char *source_file);
int create_destination_file(const char *destination_file);
void copy_file(int fd_from, int fd_to);
int main(int argc, char *argv[]);

#endif
