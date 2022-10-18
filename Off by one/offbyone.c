#include <stdio.h>


//input function
//get user input and store array
//to detect the vulnerability, review code and check if the loop is correct
//check if there is any implementation to check the input length
void input(char *userinput)
{
	char array[100];
	
	int i;
	
	//the vulnerability is i <= 100, in the for loop
	//i < 100 will store 99 bytes plus the null terminator, which is correct
	//i <= 100 will store 100 plus the null terminator, then it becomes 101
	//this means the last byte will replace the register base point
	for(i = 0; i <= 100; i++) 
	{
		array[i] = userinput[i];
	}
	
} 

//calling the input function
int main(int argc, char *argv[])
{
	
	input(argv[1]);
}

