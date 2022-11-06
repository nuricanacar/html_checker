#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    char chr;
    FILE *code;
    code=fopen("html.html","r");
    while(chr != EOF){
   		 if(code != NULL){
   		 	chr =  fgetc(code);
    		printf("%c",chr);
    }
    	else
     	 printf("yok");
    
    }
    fclose(code);
    
        return 0;
}

