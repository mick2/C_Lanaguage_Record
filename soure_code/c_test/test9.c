#include <stdio.h>
#include <string.h>

const char *envmatch(const char *s1, const char *s2)
{
	printf("==> UDEBUG s1 = %s\n", s1);
	printf("==> UDEBUG s2 = %s\n", s2);
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s2 == '=')
			return (s2+1);
	}

	if (*s1 == '\0' && *s2 == '=')
		return (s2+1);

	return NULL;
}

unsigned long long int xtoq(const char *dest)
{
    unsigned long long int  x = 0;
    unsigned int digit;

    if ((*dest == '0') && (*(dest+1) == 'x')) dest += 2;

    while (*dest) {
	if ((*dest >= '0') && (*dest <= '9')) {
	    digit = *dest - '0';
	    }
	else if ((*dest >= 'A') && (*dest <= 'F')) {
	    digit = 10 + *dest - 'A';
	    }
	else if ((*dest >= 'a') && (*dest <= 'f')) {
	    digit = 10 + *dest - 'a';
	    }
	else {
	    break;
	    }
	x *= 16;
	x += digit;
	dest++;
	}

    return x;
}

unsigned int xtoi(const char *dest)
{
    unsigned int x = 0;
    unsigned int digit;

    if ((*dest == '0') && (*(dest+1) == 'x')) dest += 2;

    while (*dest) {
	if ((*dest >= '0') && (*dest <= '9')) {
	    digit = *dest - '0';
	    }
	else if ((*dest >= 'A') && (*dest <= 'F')) {
	    digit = 10 + *dest - 'A';
	    }
	else if ((*dest >= 'a') && (*dest <= 'f')) {
	    digit = 10 + *dest - 'a';
	    }
	else {
	    break;
	    }
	x *= 16;
	x += digit;
	dest++;
	}

    return x;
}

int main()
{
	int longaddr = 0;
	long newaddr;
	const char *str = envmatch("Board_Version", "Board_Version=1");
	longaddr = strlen(str);
	if (memcmp(str, "0x", 2) ==0)
		longaddr -= 2;
	longaddr = (longaddr > 8) ? 1 : 0;

	if (longaddr)
		newaddr = (unsigned int) xtoq(str);
	else
		newaddr = (unsigned int) xtoi(str);

	printf("==> UDBEUG newaddr = %ld\n", newaddr);
	printf("==> UDBEUG sizeof(unsigned long) = %d\n", sizeof(unsigned long));

	return 0;
}

