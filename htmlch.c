#include <stdio.h>

typedef struct dynamic_array{
	int top;
	int capacity;
	int *array;
}stack_t;

stack_t *create()

int main(){
	stack_t *html_stack = create();
}

stack_t *create(){
	new = (stack_t *)malloc(sizeof(stack_t));
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
