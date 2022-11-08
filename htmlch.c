#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct dynamic_array{
	int top;
	int capacity;
	int *array;
}stack_t;

stack_t *create();
void push();
void sizeadder();
char* peek();
void pop();
int isEmpty();

void listele();


int main(void){
	stack_t *html_stack = create();
	static char coc[100][10];
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
				if (!strcmp(coc[i],peek(html_stack)))
				{
					pop(html_stack);
				i++;

				}
				else
				{
				push(html_stack,coc[i]);
				i++;
				}
			}
			
			
		} 
		else 
		printf("yok"); 

		} 
		fclose(code);
		int a = -1; 
		//while(a != i)	
		//printf("%s\n",coc[++a]);


		//listele(html_stack);
		//printf("%d",!strcmp(coc[0],peek(html_stack)));
		if(isEmpty(html_stack))
		  printf("Hata Bulunmadi");
		else
		  printf("Kapatilmamis tag var kontrol ediniz");

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

void push(stack_t *S,char sarr[]){
	sizeadder(S);
	S -> array[++S -> top] = (int) sarr;

}

void sizeadder(stack_t *S){
	S -> capacity = S -> capacity + 1;
	S -> array = realloc(S -> array, sizeof(S -> array) * S -> capacity);
}

char* peek(stack_t *S){
	if(isEmpty(S))
	  return " ";
	else
	  return (char *) S -> array[S -> top];
}

void pop(stack_t *S){
	S -> top--;
}

int isEmpty(stack_t *S){
    return S -> top == -1;
}
void listele(stack_t *S){
        int temp = S -> top;
        while(temp != -1){
        	printf("%s ", S -> array[temp]);
        	temp = temp - 1;
		}
		printf("\n");
}
