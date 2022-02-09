#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
int i,size,size1;
char c,c1;
char *store="cat ";
FILE *source, *target;
char *source_file,*target_file;
for(i=1; i<argc; i++)
{
//To get the file names from the CLA
if(i==1)
source_file=argv[i];
else
target_file=argv[i];
}
source = fopen(source_file, "a+");
 if ((target = fopen(target_file, "r+"))==0)
    {
//If the 2nd file not exist in the directory
        printf("File Not Exist...\n");
        exit(0);
    }
else if(0== ftell(target) && target == NULL)
	{
//If the data is not present in the 2nd file
        printf("No data present in the File...\n");
        exit(0);
    }
	else if((strcmp(source_file,target_file)==0))
	{
//If the two file names are same
        printf("Both file names are same...\n");
        exit(0);
    }
	else
{
//It starts printing of two file data  
     printf("%s Data: ",source_file);
    // Read contents from file
    c = fgetc(source);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(source);
    }
	printf("\n%s Data: ",target_file);
    // Read contents from file
    c1 = fgetc(target);
    while (c1 != EOF)
    {
//It will be Appending the data from 2nd file to 1st file
	fseek( source, 0, SEEK_END );
	fprintf(source,"%c",c1);
        printf ("%c", c1);
        c1 = fgetc(target);
    }
 printf("\nFile Copied Successfully...\n");
//printf("\nAfter file data Appended Executing with Linux Commands\n");
//printf("qwe %s",store);
}
   fclose(source);
   fclose(target);
//system(store);
}