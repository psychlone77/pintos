#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

#define CMD_ARGS_DELIMITER " "
#define CMD_ARGS_MAX 30
#define CMD_LENGTH_MAX 100

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);

#endif /* userprog/process.h */
