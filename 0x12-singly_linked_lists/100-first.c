#include <stdio.h>
/**
  *my_startup_function-hence- fine
  *return: always 0
  */
void my_startup_function(void) __attribute__((constructor));

void my_startup_function(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

