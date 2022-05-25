#include  "shell.h"

void loop() {
	char * sting_entered;
	char * * args;
	int return_value = 1;

	do {
		printf("\n $");
		string_entered = read_line();
		flag = 0;
		args = split_lines(string_entered);
		return_value= dash_launch(args);
		free(string_entered);
		free(args);
	} while (return_value);
}
