#include <stdio.h>
#include <string.h>


int input (char *userinput)
{
	char buffer[200];
	strcpy(buffer, userinput);
	printf("%s\r\n", buffer);
}

int main(int argc, char *argv[])
{
	//error here is > instead of >=
	//this will print buffer overflow if the input is higher than 200
	//it will continue with no error if input is 200
	//but 200 + null terminator is 201 
	if(strlen(argv[1])>=200)
	{
		printf("buffer overflow\r\n");
		//return 1;
	}
	
	input(argv[1]);
} 
