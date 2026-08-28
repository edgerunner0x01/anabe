
#include <stdio.h>

int main(int argc, char **argv) {

	if ( argc < 2 ){
		printf("Usage : mermaid <file>\n");
		return 1; 	
	}

	FILE *fptr; 
	char content[100]; 


	fptr = fopen(argv[1], "r"); 
	fgets(content, 100, fptr); 

	printf("%s", content);

	fclose(fptr);
	return 0; 
}

