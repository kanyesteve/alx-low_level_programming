#ifndef MAIN_H
#define MAIN_H

/*
 * File: holberton.h
 * Auth: Godswill Kalu
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x14-file_io directory.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

<<<<<<< HEAD
#endif /* MAIN_H */
=======
#endif /* MAIN_H *
>>>>>>> d224ba83566b875b7e5de2a157b9b32387d50d3e
