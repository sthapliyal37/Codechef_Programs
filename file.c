#include <stdio.h> 
int main() 
{ 
      FILE *fPtr;
	char c; 
	fPtr = fopen("Sample.txt", "r"); 
      if (fPtr == NULL) 
	{ 
		printf("Could not open file Sample.txt"); 
		return 0; 
	} 
      int chr=0,conso=0,vowel=0;
	for (c = fgetc(fPtr); c != EOF; c = fgetc(fPtr)) 
	{	
             
            if (c == 'a' || c == 'e' || c == 'i' ||c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
       	     vowel++;
            else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
       	     conso++;
            else
       	     chr++;
      }
	fclose(fPtr); 

      printf("Other Characters: %d",chr);
      printf("\nVowels: %d",vowel);
      printf("\nConsonants: %d",conso);    
      return 0; 
}
