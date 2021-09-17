#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void del_duplicate_letter (char*);
void space_checker (char*);



int main()
{
	char string[1000];

	printf("Enter a string that you want to fix it");
	gets(string);

	del_duplicate_letter (string);
    space_checker (string);

    printf(" \n Final version of the string:\n");
   puts(string);

    return 0;
}


void del_duplicate_letter (char *string)
{

	int i,j,leng,new_leng;
	int a=0,b=0;
  	char space[1000];


	leng=strlen(string);


    new_leng=0;


    for(i=0; i<(leng-new_leng);)
    {



        if((string[i]==string[i+1]) || (tolower(string[i]) == tolower(string[i+1])))
        {

            for(j=i;j<(leng-new_leng);j++)

				string[j]=string[j+1];

            new_leng++;
    	}

		else
        {
            i++;
        }

    }

 while (string[a] != '\0')
   {
      if (!(string[a] == ' ' && string[a+1] == ' ')) {
        space[b] = string[a];
        b++;
      }
      a++;
   }



 	space[b] = '\0';
 	strcpy(string, space);
    printf("\n Fixed duplicates:\n");
	puts(string);

}


void space_checker (char *string)
{

	int i,j,leng,new_leng;
	char temp_str[1000];
	leng=strlen(string);


	for(i=0; i<(leng-new_leng);)
    {
        if(ispunct(string[i+1]) && string[i]==' ')
        {

            for(j=i;j<(leng-new_leng);j++)
                string[j]=string[j+1];

            new_leng++;
        }
        else if(ispunct(string[i]) && string[i+1]!=' ')
		{

			strcpy(temp_str,string);
			string[i+1]=' ';

			for(j=i;j<(leng-new_leng);j++)
                string[j+2]=temp_str[j+1];

            new_leng++;




		}
		else
        {
            i++;
        }
    }





	printf("\n Fixed spaces:\n");
	puts(string);
}
