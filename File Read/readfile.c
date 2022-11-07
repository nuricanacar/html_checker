#include <stdio.h> 
#include <stdlib.h> 
  
  
  
 int main(void) 
 { 
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
      printf("%s\n",coc[a++]);

      printf("%d \n",!strcmp(coc[6],"<p"));
    return 0;
}