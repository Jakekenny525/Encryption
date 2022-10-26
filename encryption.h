#include <stdio.h>
#include <stdlib.h>

#ifndef ENCRYPTION
#define ENCRYPTION

char* encrypt_message(int method);

//Shift the letters in the message by n (e.g. shifting by 1 turns "A" to "B")
//Providing a negative value will shift the letters backwards (e.g. shifting by -1 turns "A" to "Z")
char* caesar(char* message);

#endif
