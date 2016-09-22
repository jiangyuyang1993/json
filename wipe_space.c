#include <stdio.h>
#include <stdlib.h>
char* wipe_space(char * p)
{   
    int i=0,j=0;
    char *t = NULL;
    t=malloc(sizeof(char *)*100);
    while(p[i]!='\0')
    {
	if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n' || p[i] == '\r')
	   { i++;}
	else if(p[i]== '\"')
	{
	    t[j]=p[i];
	    j++;
	    i++;
	    while(p[i]!='\"')
	    {
		t[j]=p[i];
		j++;
		i++;
	    }
	    t[j]=p[i];
	    j++;
	    i++;
	}
	else
	    {
		t[j]=p[i];
		i++;
		j++;
	    }
	
 
   }
   	free(t);
	return t;
}

int main()
{
	char * case1="{    }";
	char * case2="   {    \"a\":12,   \"b\":\"t u r\" }";
//	wipe_space(case1);
	printf("%s\n",wipe_space(case1));
//	wipe_space(case2);
	printf("%s\n",wipe_space(case2));
	return 0;	
}
