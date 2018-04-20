#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>

int	main()
{
	setlocale(LC_ALL, "");
	int	l = 5;
	int	ret;
	int	ret_mine;
	wchar_t	yo[100] = L"черт побери!";
	wchar_t ok[100] = L"かんわ";



	printf("----------WCHAR_T----------------\n");
	
	//TEST WCHAR

	ret = printf("VRAI : %S\n", ok);
	ret_mine = ft_printf("MIEN : %S\n", ok);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("VRAI : %S\n", yo);
	ret_mine = ft_printf("MIEN : %S\n", yo);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("VRAI : %S\n", NULL);
	ret_mine = ft_printf("MIEN : %S\n", NULL);
	printf("ret printf : %d\nret mine : %d\n", ret, ret_mine);
	ret = printf("💩\n", ok);
	ret_mine = ft_printf("💩\n", ok);
	printf("ret printf : %d\nret mine : %d\n", ret, ret_mine);

	printf("\n\n---------CHAR----------------\n\n");

	//TEST CHAR

	ret = ft_printf("%c\n",'c');
	ret_mine = ft_printf("%c\n", 'c');
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = ft_printf("%c\n",NULL);
	ret_mine = ft_printf("%c\n", NULL);
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = ft_printf("test %c test\n",NULL);
	ret_mine = ft_printf("test %c test\n", NULL);
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = ft_printf("%lc\n",ok[0]);
	ret_mine = ft_printf("%lc\n", ok[0]);
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);

	printf("\n\n-----------STRING---------------\n\n");

	//TEST STRING

	ret = printf("1 : %s\n", "Salut je t'aime bien");
	ret_mine = ft_printf("1 : %s\n", "Salut je t'aime bien");
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = printf("2 : %50s\n", "Salut je t'aime bien");
	ret_mine = ft_printf("2 : %50s\n", "Salut je t'aime bien");
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = printf("3 : %-50s\n", "Salut je t'aime bien");
	ret_mine = ft_printf("3 : %-50s\n", "Salut je t'aime bien");
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = printf("4 : %.50s\n", "Salut je t'aime bien");
	ret_mine = ft_printf("4 : %.50s\n", "Salut je t'aime bien");
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = printf("5 : %10.10s\n", "Salut je t'aime bien");
	ret_mine = ft_printf("5 : %10.10s\n", "Salut je t'aime bien");
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = printf("6 : %s\n", NULL);
	ret_mine = ft_printf("6 : %s\n", NULL);
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = printf("7 : %30.10s\n", "Salut je t'aime bien");
	ret_mine = ft_printf("7 : %30.10s\n", "Salut je t'aime bien");
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = printf("8 : %15.s\n", "Salut je t'aime bien");
	ret_mine = ft_printf("8 : %15.s\n", "Salut je t'aime bien");
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = printf("9 : %1.15s\n", "Salut je t'aime bien");
	ret_mine = ft_printf("9 : %1.15s\n", "Salut je t'aime bien");
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);
	ret = printf("10 : %-+#50.s\n", "Salut je t'aime bien");
	ret_mine = ft_printf("10 : %-+#50.s\n", "Salut je t'aime bien");
	printf("ret printf : %d\nret mine : %d\n\n",ret,ret_mine);

	//TEST INT

	printf("\n\n-------------INT-------------\n\n");

	ret = printf("%d\n",123456);
	ret_mine = ft_printf("%d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("% d\n",MB_CUR_MAX);
	ret_mine = ft_printf("% d\n",MB_CUR_MAX);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("% 010.8d\n",42);
	ret_mine = ft_printf("% 010.8d\n",42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%.15d\n",123456);
	ret_mine = ft_printf("%.15d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%015d\n",123456);
	ret_mine = ft_printf("%015d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%-10.15d\n",123456);
	ret_mine = ft_printf("%-10.15d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%.2d\n",123456);
	ret_mine = ft_printf("%.2d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%+#d\n",123456);
	ret_mine = ft_printf("%+#d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%-60d\n",-123456);
	ret_mine = ft_printf("%-60d\n",-123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%-060.15d\n",123456);
	ret_mine = ft_printf("%-060.15d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%.d\n",0);
	ret_mine = ft_printf("%.d\n",0);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%.d\n",1);
	ret_mine = ft_printf("%.d\n",1);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%+d\n",-42);
	ret_mine = ft_printf("%+d\n",-42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%15.d\n",0);
	ret_mine = ft_printf("%15.d\n",0);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%+40d\n",-123456);
	ret_mine = ft_printf("%+40d\n",-123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%0 +40d\n",123456);
	ret_mine = ft_printf("%0 +40d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("% +015d\n",123456);
	ret_mine = ft_printf("% +015d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%+040d\n",123456);
	ret_mine = ft_printf("%+040d\n",123456);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%ld\n",12345678901);
	ret_mine = ft_printf("%ld\n",12345678901);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%lld\n",1234567891011);
	ret_mine = ft_printf("%lld\n",1234567891011);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("%0d\n",-42);
	ret_mine = ft_printf("%0d\n",-42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);


	printf("\n\n-------------x et X HEXA--------------\n\n");

	//TEST HEXA

	ret = printf("Real : %#07lx\n", -42);
	ret_mine = ft_printf("Mine : %#07lx\n", -42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("Real : %#08x\n", 42);
	ret_mine = ft_printf("Mine : %#08x\n", 42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("Real : %#X\n", 2147483647);
	ret_mine = ft_printf("Mine : %#X\n", 2147483647);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("Real : %0.7x\n", -42);
	ret_mine = ft_printf("Mine : %0.7x\n", -42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("Real : %20x\n", -42);
	ret_mine = ft_printf("Mine : %20x\n", -42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("Real : %#+0.7x\n", -42);
	ret_mine = ft_printf("Mine : %#+0.7x\n", -42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("Real : %#8x\n", 42);
	ret_mine = ft_printf("Mine : %#8x\n", 42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);
	ret = printf("Real : %#015.10X\n", 2147483647);
	ret_mine = ft_printf("Mine : %#015.10X\n", 2147483647);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("Real : %#.3x\n", 0);
	ret_mine = ft_printf("Mine : %#.3x\n", 0);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("Real : %#3x\n", 0);
	ret_mine = ft_printf("Mine : %#3x\n", 0);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("Real : %#-08x\n", 42);
	ret_mine = ft_printf("Mine : %#-08x\n", 42);
	printf("ret printf : %d\nret mine %d\n\n",ret, ret_mine);

	printf("\n\n-------------LONG-----------\n\n");

	//TEST LONG

	int	i = -2147483647;
	ret = printf("%D\n", i);
	ret_mine = ft_printf("%D\n",i);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%d\n", i);
	ret_mine = ft_printf("%d\n",i);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);

	printf("\n\n-------------LONG LONG-----------\n\n");

	//TEST LONG	LONG

	long long int		j = 9223372036854775807;
	ret = printf("%ld\n", (unsigned long)j);
	ret_mine = ft_printf("%ld\n",(unsigned long)j);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%lld\n", j);
	ret_mine = ft_printf("%lld\n",j);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);

	printf("\n\n------------Octal o------------\n\n");

	//TEST OCTAL o

	ret = printf("%#o\n",5555555);
	ret_mine = ft_printf("%#o\n",5555555);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);

	printf("\n\n--------------Octal O----------\n\n");

	//TEST OCTAL O

	ret = printf("%#O\n",1555555);
	ret_mine = ft_printf("%#O\n",1555555);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%#+50O\n",1555555);
	ret_mine = ft_printf("%#+50O\n",1555555);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);

	printf("\n\n-------------UNSIGNED INT-----------\n\n");

	//TEST UNSIGNED INT

	ret = printf("%u\n",155555);
	ret_mine = ft_printf("%u\n",155555);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%15U\n",155555);
	ret_mine = ft_printf("%15U\n",155555);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	
	printf("\n\n------------Octal p------------\n\n");

	//TEST hexa p

	ret = printf("%p\n",&ret);
	ret_mine = ft_printf("%p\n",&ret);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%.p\n",0);
	ret_mine = ft_printf("%.p\n",0);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%-13p\n",&printf);
	ret_mine = ft_printf("%-13p\n",&printf);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);


	printf("\n\n------------PERCENT %%------------\n\n");

	//TEST percent

	ret = printf("%%\n");
	ret_mine = ft_printf("%%\n");
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%.%\n");
	ret_mine = ft_printf("%.%\n");
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("aa%%bb\n");
	ret_mine = ft_printf("aa%%bb\n");
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%%%%%%%%%%%%%%%%\n");
	ret_mine = ft_printf("%%%%%%%%%%%%%%%%\n");
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf(".%%.%%.%%.%%.%%.%%.%%.%%\n");
	ret_mine = ft_printf(".%%.%%.%%.%%.%%.%%.%%.%%\n");
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);


	printf("\n\n------------UNDEFINED BEHAVIOR------------\n\n");

	ret = printf("%\n");
	ret_mine = ft_printf("%\n");
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%Z\n");
	ret_mine = ft_printf("%Z\n");
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%10R\n");
	ret_mine = ft_printf("%10R\n");
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%.5p\n",0);
	ret_mine = ft_printf("%.5p\n",0);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%05p\n",0);
	ret_mine = ft_printf("%05p\n",0);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%05.%\n",0);
	ret_mine = ft_printf("%05.%\n",0);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);
	ret = printf("%#.5x\n",1);
	ret_mine = ft_printf("%#.5x\n",1);
	printf("ret printf : %d\nret mine : %d\n\n", ret, ret_mine);

	return (0);
}
