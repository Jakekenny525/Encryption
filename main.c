#include "encryption.h"

int main()
{
	int encryption_method;
	int encrypt_or_decrypt; //1 = encrypt, 2 = decrypt
	printf("Please select the operation to perform:\n1. Encrypt\n2. Decrypt\n");
	scanf("%d", &encrypt_or_decrypt);
	printf("Please select the encryption method:\n1. Caesar\n");
	scanf("%d", &encryption_method);
	if(encrypt_or_decrypt == 1)
	{
		char* encrypted_message;
		encrypted_message = encrypt_message(encryption_method);
		printf("%s\n", encrypted_message);

	}
	else if(encrypt_or_decrypt == 2)
	{

	}
	else
	{

	}
	return 0;
}