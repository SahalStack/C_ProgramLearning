/*
 ============================================================================
 Name        : Break.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	for(i=0;i<=10;i++){
		printf("HII\n");
		if(i==5){
			break;
		}
		printf("HELLO\n");
	}
	printf("FINISHED\n");

	return EXIT_SUCCESS;
}
