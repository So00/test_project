#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main()
{
	setlocale(LC_ALL, "");
	wchar_t	s[4];

	s[0] = 'S';
	s[1] = 254;
	s[2] = 'u';
	s[3] = '\0';
	int retmine = ft_printf("%S\n",s);
	int ret = printf("%S\n",s);
	printf("Real : %d\nMine : %d\n",ret,retmine);
	ft_printf(NULL);
}
