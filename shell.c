#include "shell.h"
/**
 * main - This is a simple shelll created by
 * Daniel Nwankwo and Gabriel Shoderu
 * for 0x16 Task
 *
 * Return: 0 if success
 */

int main(void)
{
	ssize_t bytes_rd = 0;
	size_t by_size = 0;
	char *entry = NULL, *arguments[20];
	int counter = 1, vf_stat = 0, exist_stat = 0, blt_stat = 0;

	_printp("$ ", 2);
	bytes_rd = getline(&entry, bf_size, stdin);
	while (bytes_rd != -1)
	{
		if (*entry != '\n')
		{
			fill_args(entry, arguments);
			if (arguments[0] != NULL)
			{
				exist_stat = exist(argument[0]);
				if (exist_stat != 0)
				{
					vf_stat = verify_path(arguments);
					if (vf_stat == 0)
						exit_stat = exec(arguments), free(entry), free(*arguments);
					else
					{
					blt_stat = verify_blt(arguments, exit_stat;
					if (blt_stat != 0)
						exit_stat = print_not_found(arguments, counter), free(entry);
					}
				}
				else
					exit_stat = exec(arguments), free(entry);
			}
			else
				free(entry);
		}
		else if (*entry == '\n')
			free(entry);
		entry = NULL, counter++;
		_printp("$ ", 2), bytes_rd = getline(&entry, &bf_size, stdin);
		}
		last_free(entry);
		return (exit_stat);
}
