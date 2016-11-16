/*
 * =====================================================================================
 *
 *       Filename:  startPoint.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年11月16日 16时14分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  strrstr
 *  Description:  
 * =====================================================================================
 */
	char *
strrstr (char *dest,char* src )
{
	char * first=NULL;
	char * second=NULL;
	char * str1=dest;
	char * str2=src;
	assert(dest);
	assert(src);
	while(*str1!='\0')
	{
		first=str1;
		while((*str1!='\0')&&(*str2!='\0')&&(*str1==*str2))
		{
			str1++;
			str2++;
		}
		if(*str2=='\0')
			second=first;			
		str1=first+1;
		str2=src;
	}
	if(*str1=='\0')
		return second;
	return second;
}		/* -----  end of function strrstr  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  abstract
 *  Description:  
 * =====================================================================================
 */
	void
abstract (char *buf,int start,int end)
{
	printf("buf=%s\n",buf);
	char * startBuf=strstr(buf,"bcd");
	printf("startbuf=%s\n",startBuf);
	char * endBuf=strrstr(startBuf,"ij");
	printf("endbuf=%s\n",endBuf);
	printf("%d\n",strlen(startBuf));
	printf("%d\n",strlen(endBuf));
	char * finalBuf=(char *)malloc(sizeof(char)*10);
	strncpy(finalBuf,startBuf,(int)(strlen(startBuf)-strlen(endBuf)));
	printf("final=%s\n",finalBuf);
	return ;
}		/* -----  end of function abstract  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	char * string="abcdefghijk";
	int start=0;
	int end =0;
	printf("%s\n",string);
	printf("%c\n",*string);
	abstract(string,start,end);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
