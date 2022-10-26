#include "encryption.h"

char* encrypt_message(int method)
{
	if(method != 1)
		exit(1);
	char* message;
	message = (char*)malloc(sizeof(char));
	printf("Enter the message to be encrypted:\n");
	scanf("%s", message);
	switch(method)
	{
		case(1):
			return caesar(message);
			break;
	}
}

char* caesar(char* message)
{
	if(sizeof(message) < 1)
		exit(1);
	int shift;
	printf("Enter the length of the shift: ");
	scanf("%d", &shift);
	char* new_message;
	new_message = message;
	for(int i = 0; i < sizeof(new_message); i++)
	{
		new_message[i] += shift;
	}
	return new_message;
}