#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "osapi.h"
#include <FreeRTOS.h>

const char * os_strchr(const char *str, int c)
{
	return strchr(str,c);
}

void * os_memset(void * s, int c, size_t n) 
{
	return memset(s,c,n);
}

int os_strncmp(const char * s1, const char * s2, size_t n)
{
	return strncmp(s1,s2,n);
}

int os_strcmp(const char * s1, const char * s2)
{
	return  strcmp(s1,s2);
}

char * os_strncpy(char *  s1, const char *  s2, size_t n)
{
	return strncpy(s1, s2, n);
}

char * os_strcpy(char * s1, const char *  s2)
{
	return strcpy(s1,s2);
}

char * c_strdup(const char * s)
{
	size_t len = strlen (s) + 1;
  void * ns = pvPortMalloc (len);

  if (ns == NULL)
    return NULL;

  return (char *) memcpy (ns, s, len);
}

size_t os_strlen(const char * s)
{
	return strlen(s);
}

void c_exit(int code)
{
	while(1);
}
void *os_memcpy(void * s1, const void *  s2, size_t n) 
{
	return memcpy(s1,s2,n);
}

char *os_strcat(char * s1, const char *  s2)
{
	return strcat(s1, s2);
}

int os_memcmp(const void * s1,const void * s2, size_t n)
{
	return memcmp(s1,s2,n);
}

void output_redirect(const char *str)
{
	printf(str);
}

