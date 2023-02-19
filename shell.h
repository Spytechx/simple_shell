#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stddef.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <limits.h>
#include <time.h>


typedef struct info{
	char *program_name;
	char *input_line;
	char *commadn_name;
	int exec_counter;
	int file_descriptor;
	char **tokens;
	char **env;
	char **alias_list;
} data_of_program;

typedef struct builtins
{
	char *builtin;
	int (*function)(data_of_program *data);
} builtins;


int _putchar(char c);

/*shell*/

int main(int argc, char *argv[], char *env[]);
void initialize_data(data_of_program *data, int argc, char *argv[], char **env);
void infinito(char *prompt, data_of_program *data);
void handle_ctrl_c(int opr UNUSED);


/*this prints the
 * current woking environment
 */

int  builtin_env(data_of_program *data);
int builtin_set_env(data_of_program *data);
int builtin_unset_env(data_of_program *data);

/*exit builtin*/

int builtin_exit(data_of_program *data);
int builtin_cd(data_of_program *data);
int set_work_directory(data_of_program *data, char *new_dir);
int builtin_help(data_of_program *data);
int builtin_alias(data_of_program *data);
int builtins_list(data_of_program *data);

#endif
