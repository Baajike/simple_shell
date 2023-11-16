#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>
#include <stdbool.h>
#define INTERACTIVE_MODE 1
#define NON_INTERACTIVE_PIPE 2
#define NON_INTERACTIVE_MODE 0
#define ERROR -1
#define TOK_D " \t\r\n\a\""

#define NOT_FOUND 127
#define PERMISSION_DENIED 126
#define EXIT_ERROR 2
#define TRUE 1
#define FALSE 0

struct BuiltInParams
{
    char *command;
    char **command_array;
    struct list_paths *current;
    char *shell_name;
    int count;
    int *rank_status;
    struct list_paths *env_list;
    char **command_lines;
    char **argv;
};

typedef struct list_paths
{
        char *path;
        unsigned int len;
        struct list_paths *next;
} list_paths;

int _strlen(char *s);
char *_strndupa(char *str);
int _strncmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int convert(char *s);
void _env_prints(int *rank_status);
int checks_termnl_mode(int argc);
char *_access(char *line, list_paths *path_list);
char *prompt(list_paths *present);
void free_mem_array(char **argv);
void free_allc_mem(char *command, char **command_array);
void _executer_commands(char *path, char **av, char **env, int *rank_status);
void scan_cmd_file(char *data);
char *check_inputs_files(char *data);
void free_lists(list_paths *head);
char **_vector_to_lines(char *line, int rank_status);
char *num_to_char(int num);
void _error_print(char *name_shell, int tally,
char *command_array, int type_of_error);
char *gets_rank_status(int n);
char *get_id_process();
char *_getenv_var(const char *name);
int builtin(char *command, char **command_array, list_paths *present,
char *name_shell, int tally, int *rank_status,
list_paths *env_list, char **command_lines, char **argv);
void non_builtins_handlers(char **command_array, char *env[], int *rank_status,
int tally, list_paths *present, char *argv[]);
extern char **environ;
list_paths *linkedlist_to_paths();
size_t prints_lists(const list_paths *h);
void free_lists(list_paths *head);
list_paths *adds_node(list_paths **head, char *path);
unsigned int _chars_tally(char *strings, char character);
int _tallys_line(char *line);
char **allocate_vector(int size);
void free_vector_mem(char **vector);
char *token_mapping(char *item_token, int rank_status);
int tokenize_command(char *command, int rank_status, char **argument_vector);
char *handler_flags_(char *item_token, char *command,
char **argument_vector, int rank_status);
char *_strtok(char *str, const char *delimiters);
void _frees_whole(char **command_lines, int tally, list_paths *env,
list_paths *present, char *command, char **command_array);
void exits_handler_(char *command, char **command_array, list_paths *present,
char *name_shell, int tally, int *rank_status, list_paths *env,
char **command_lines);
void comments(char *value);
int _directory(char **command_array, char **argument_vector);
void _setenv(char *key, char *value, list_paths *present);
char **catscan_command_files(int op_mode, char *data_name, char *name_shell);
char **non_interactive_files_handlers(char *data_name, char *name_shell);
int checks_directory(char *command, char **argument_vector, int tally,
char **command_array, int *rank_status, char *command_line_before);
char *characters_to_numbers(int number);
char **split(char *text);
void errors(char *name, int tally, char *data_name);
unsigned int piped_characters_tally(char *strings, char c);
char **non_interactive_pipes_handlers();
char *get_non_interactive_command(char **command_lines, int tally);
void permission_handler(char **command_array, int tally,
char *executable, int *rank_status, char *command);
void process_command(char *command, int *rank_status, char ***command_array);

#endif

