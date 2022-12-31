#include<stdio.h>
#include<conio.h>
#include<string.h>
	int writestory();
	int readstory();
	void writeToFile();
int main()

{  FILE *fp;
char str[100];
    strcpy(str, "Enter the name # 1: New Delhi\n");
    writeToFile(str);

printf("=================================\n");
printf("*********** Menu **************\n");
printf("=================================\n");
 while(1)
 {
 	printf("1. Write story using fput c\n");
 	printf("2. Read story using fgetc\n");
 	printf("3. Add names using fputs\n");
 	printf("4. Read story using fgets\n");
 	printf("5. Exit\n");
 	printf("Enter your option (1..5) : ");
 	int n;
 	scanf("%d",&n);
 	switch(n){
		
 		case 1:
 			writestory();
 			break;
 			case 2:
 				readstory();
 				break;
 				case 3:
 					writeToFile();
 					break;
 					case 4:
 						break;
 						case 5:
 							
 							break;
 							default:
 								printf("Invalid Input\n");
 								break;
 					}
	}
	return 0;
}
	int writestory()
	{int i = 0;
    FILE *fp = fopen("story.txt","w");
 
    // Return if could not open file
    if (fp == NULL)
      return 0;
 
    char string[] = "good bye\n", received_string[20];
 
    for (i = 0; string[i]!='\0'; i++)
 
        // Input string into the file
        // single character at a time
        fputc(string[i], fp);
 
    fclose(fp);
    fp = fopen("story.txt","r");
 
    // Reading the string from file
    fgets(received_string,20,fp);
 
    printf("%s", received_string);
 
    fclose(fp);
		
	}
int readstory()
{FILE *fp = fopen("story.txt","r");
 
    // Return if could not open file
    if (fp == NULL)
      return 0;
 
    do
    {
        // Taking input single character at a time
        char c = fgetc(fp);
 
        // Checking for end of file
        if (feof(fp))
            break ;
 
        printf("%c", c);
    }  while(1);
 
    fclose(fp);
    return(0);
}
	void writeToFile(char str[])
	{
		FILE* fp;
  
    // Name of the file
    // and mode of the file
    fp = fopen("story.txt", "w");
  
    // Write string to file
    fputs(str, fp);
  
    // Close the file pointer
    fclose(fp);
}
		
	

