/*
 * CSE 330 Spring 21'
 * User space program for project 2-1 
 * This program creates 8 processes with different scheduling policies
 * There are 1 default policy (TS), 1 FIFO policy (FF), 2 Round Robin policy (RR) 
 * and 4 Batch policy (B).
 */
#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int ret, ret_child_1, ret_child_2, ret_child_3;

	/*
	 * Call fork() to create a child process. You now have two processes. 
	 */
	ret_child_1 = fork();

	/*
	 * The fork() system call returns 0 to the child process and the pid to the 
	 * parent process.
	 */
	if (ret_child_1 == 0){
		printf("Child 1-%d. My pid is %d and my parent's pid is %d\n", getpid(), 
			getpid(), getppid());
		
	}

	/*
	 * Call fork() to create a child process. You now have four processes. 
	 */
	ret_child_2 = fork();

	if (ret_child_2 == 0){
		printf("Child 2-%d. My pid is %d and my parent's pid is %d\n", getpid(), 
			getpid(), getppid());
	
	}

	/*
	 * Finally, we call fork() again. You now have eight processes.
	 */
	ret_child_3 = fork();
	if (ret_child_3 == 0){
		printf("Child 3-%d. My pid is %d and my parent's pid is %d\n", getpid(), 
			getpid(), getppid());
	}
	
	/*
	 * Sleep for 30 seconds so that you can check the result with another 
	 * terminal.
	 */
	sleep(30);
	
	return 0;
}
