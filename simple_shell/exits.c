#include "shell.h"

/**
 **_strncpy - copies a string
 *@dest: thdestination string2be copied to
 *@src: thsource string
 *@n: thamount of chars2be copied
 *Return: thconcatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i, j;
        char *s = dest;

        i = 0;
        while (src[i] != '\0' && i < n - 1)
        {
                dest[i] = src[i];
                i++;
        }
        if (i < n)
        {
                j = i;
                while (j < n)
                {
                        dest[j] = '\0';
                        j++;
                }
        }
        return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: thfirst string
 *@src: thsecond string
 *@n: thamount of bytes2be maximally used
 *Return: thconcatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
        int i, j;
        char *s = dest;

        i = 0;
        j = 0;
        while (dest[i] != '\0')
                i++;
        while (src[j] != '\0' && j < n)
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        if (j < n)
                dest[i] = '\0';
        return (s);
}

/**
 **_strchr - inalocate char in a string
 *@s: thstring2be parsed
 *@c: thchar2look for
 *Return: (s) a pointer2thmemory area s
 */
char *_strchr(char *s, char c)
{
        do {
                if (*s == c)
                        return (s);
        } while (*s++ != '\0');

        return (NULL);
}
