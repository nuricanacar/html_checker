#include <stdio.h>
#include <stdlib.h> 

typedef struct dynamic_array{
	int top;
	int capacity;
	int *array;
}stack_t;

stack_t *create();

int main(void){
	stack_t *html_stack = create();
	char coc[100][100];
		int i = 0;
		char chr; 
		FILE *code; 
		code=fopen("html.html","r"); 
		while(chr!=EOF){ 
			if(code != NULL){ 
			chr = fgetc(code); 
			while (chr == '<')
			{
			int a = 0;
			while( chr != '>' && chr != ' ')
			{
					if ( chr != '/')
					{
						coc[i][a++] = chr;
						chr = fgetc(code); 
					}
					else
					{
						chr = fgetc(code); 
					}
				}
				i++;
			}
			
			
		} 
		else 
		printf("yok"); 

		} 
		fclose(code);
		int a = -1; 
		while(a != i)	
		printf("%s\n",coc[++a]);
}

stack_t *create(){
	stack_t *new = (stack_t *)malloc(sizeof(stack_t));
	if(!new)
	  return NULL;
	new -> top = -1;
	new -> capacity = 1;
	new -> array = malloc(new -> capacity * sizeof(stack_t));
	return new;
	if(!new -> array)
	  return NULL;
	return new;
}
