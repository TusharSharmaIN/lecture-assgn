#include <stdio.h>
#include <ctype.h>

void toLow(char array[])
{
  int i;
  
  for( i = 0; array[i] != '\0'; i++)
  {
    array[i] = tolower(array[i]);
  }
}


int isAnagram(char array1[], char array2[])
{
    int num1[26] = {0}, num2[26] = {0}, i = 0;
 
    while (array1[i] != '\0')
    {
        	num1[array1[i] - 'a']++;        
      i++;
    }
    
    i = 0;
    
    while (array2[i] != '\0')
    {
        	num2[array2[i] - 'a']++;
      i++;
    }
    
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    
    return 1;
}


int main()
{
    char s[100], t[100];
    
    int count = 0, i;
    
    scanf("%s", s);
    scanf("%s", t);
  
  	toLow(s);
  	toLow(t);
    
    if(isAnagram(s, t))
    {
        for(i = 0; s[i] != '\0'; i++)
            if((s[i]) == (t[i]))
                count++;
        
        printf("%d", count);
    }
    else printf("-1");
    
    return 0;
}
