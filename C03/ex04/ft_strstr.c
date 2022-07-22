#include<stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void){
    char fonte[20] = "hello world", str[20] = "ell";
    
    printf("%s", ft_strstr(fonte, str));
    return 0;
}

char *ft_strstr(char *str, char *to_find){
   int i = 0, j = 0;

   if(!to_find){
        return str;
   }

   for(; str[i]; i++){
        
        for(;str[i+j] == to_find[j]; j++){
            
            if(to_find[j+1] == '\0'){
                
                return (str + i);
            }
        }
        j = 0;
   }
   return 0;
}     