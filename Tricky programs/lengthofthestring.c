#include <stdio.h>
int main()
{

printf("Welcome to DataFlair tutorials!\n\n");

char String[50];
int count;
printf("Enter a string: ");
scanf("%s", String);

for(count = 0; String[count] != '\0'; count++);
printf("The length of string: %d\n", count);
return 0;
}
