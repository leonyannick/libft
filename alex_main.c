#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <fcntl.h>
#include "libft.h"

char	test1(unsigned int i, char c)
{
	return c + i;
}

void	test2(unsigned int i, char *c)
{
	*c += i;
}

void	print_string_arr(char **arr)
{
	if(arr == 0)
	{
		printf("Empty arr\n");
		return;
	}
	printf("[");
	while(*arr != 0)
	{
		printf("%s, ", *arr);
		arr++;
	}
	printf("] \n");
}

int main(void)
{
	//ft_isalpha
	/* printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('A'));har
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum('/'));
	printf("%d\n", ft_isalnum(':'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('@'));
	printf("%d\n", ft_isalnum('['));
	printf("%d\n", ft_isalnum('`'));
	printf("%d\n", ft_isalnum('{')); */

	//ft_isascii
	/*  printf("%d\n", ft_isascii(-1));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii('9'));
	printf("%d\n", ft_isascii('/'));
	printf("%d\n", ft_isascii(':'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('z'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('Z'));
	printf("%d\n", ft_isascii('@'));
	printf("%d\n", ft_isascii('['));
	printf("%d\n", ft_isascii('`'));
	printf("%d\n", ft_isascii('{')); */ 

	//ft_isprint
	/* printf("%d\n", ft_isprint(-1));
	printf("%d\n", ft_isprint(128));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(31));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('9'));
	printf("%d\n", ft_isprint('/'));
	printf("%d\n", ft_isprint(':'));
	printf("%d\n", ft_isprint('a')); */

	//ft_strlen
	/*char str1[] = "";
	char str2[] = "Hallo";

	printf("%li\n", ft_strlen(str1));
	printf("%li\n", ft_strlen(str2)); */

	//ft_tolower
	/* printf("%c\n", ft_tolower(' '));
	printf("%c\n", ft_tolower('9'));
	printf("%c\n", ft_tolower('/'));
	printf("%c\n", ft_tolower(':'));
	printf("%c\n", ft_tolower('a')); 
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", ft_tolower('T')); */

	//ft_toupper
	/* printf("%c\n", ft_toupper(' '));
	printf("%c\n", ft_toupper('9'));
	printf("%c\n", ft_toupper('/'));
	printf("%c\n", ft_toupper(':'));
	printf("%c\n", ft_toupper('A')); 
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('t')); */

	//ft_strchr
	/* char str[] = "Hallo";

	printf("Startadress: %p\n", str);

	if(ft_strchr(str, 'x') == 0)
		printf("Not inside string.\n");

	printf("First Adress of l: %p\n", ft_strchr(str, 'l'));
	printf("Adress of NULL-Terminator: %p\n", ft_strchr(str, 0)); */

	//ft_strrchr
	/*char str[] = "Haliiilo";

	printf("Startadress: %p\n", str);

	if(ft_strrchr(str, 'x') == 0)
		printf("Not inside string.\n");

	printf("Last Adress of l: %p\n", ft_strrchr(str, 'l'));
	printf("Adress of NULL-Terminator: %p\n", ft_strrchr(str, 0)); */ 

	//lib atoi
	/* printf("%d\n", atoi("1"));
	printf("%d\n", atoi("+-+415dsf"));
	printf("%d\n", atoi("-+d4"));
	printf("%d\n", atoi("--415dsf"));
	printf("%d\n", atoi("-415dsf"));
	printf("%d\n", atoi("415"));
	printf("%d\n", atoi("-415"));
	printf("%d\n", atoi("+415"));
	printf("%d\n\n", atoi("+"));

	//ft_atoi
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("+-+415dsf"));
	printf("%d\n", ft_atoi("-+d4"));
	printf("%d\n", ft_atoi("--415dsf"));
	printf("%d\n", ft_atoi("+42lyon"));
	printf("%d\n", ft_atoi("415"));
	printf("%d\n", ft_atoi("-415"));
	printf("%d\n", ft_atoi("+415"));
	printf("%d\n\n", ft_atoi("+")); */

	//ft_strlcpy
	/* char src[] = "coucou";
	char dst[] = "AAAAAAAAAA";
	int n = ft_strlcpy(dst, src, 2);
	printf("N: %d- dest%s\n", n, dst); */

	//ft_strlcat missing

	//ft_strnstr
	/*char big[] = "helloworld";
	char little[] = "low";
	int len = 5;

	char *res = ft_strnstr(big, little, len);
	if(res == 0)
		printf("Not included\n");
	else
		printf("%s\n", ft_strnstr(big, little, len)); */

	//ft_strncmp
	/* printf("%d\n", ft_strncmp("Hallo", "Halio", 5));
	printf("%d\n", ft_strncmp("Hallo", "Halio", 3));
	printf("%d\n", ft_strncmp("Hallo", "j", 5)); */

	//ft_bzero
 	/* int arr[2];
	int i;
	char sr[] = "Hallo";
	arr[0] = 4;
	arr[1] = 3;
	//ft_bzero(arr, 2);
	ft_bzero(sr, 100);
	i = 0;
	while (i < 5)
	{
		printf("%d, Mem resetted\n", sr[i]);
		i++;
	} */
	
	//ft_bzero
	/* int i;
	char sr[] = "Hallo";
	ft_memset(sr, 48, 3);
	i = 0;
	while (i < 5)
	{
		printf("%c, Mem changed\n", sr[i]);
		i++;
	} */

	//ft_memcpy
	/* char s1[] = "Hello";
	char s2[] = "xxxxx";
	ft_memcpy(s2, s1, 4);
	printf("%s\n", s2);

	int arr[] = {1, 2, 3, 4};
	int arr1[] = {0, 0, 0, 0};
	int i = 0;
	ft_memcpy(arr1, arr, 16);
	while (i < 4)
	{
		printf("%d ", arr1[i]);
		i++;
	} */

	//ft_memcmp
	/* char s1[] = "Hello";
	char s2[] = "Helko";
	printf("%d\n", ft_memcmp(s1, s2, 4));

	unsigned char s11[] = {0, 0, 0, 0};
	unsigned char s21[] = {0, 0, 4, 0};
	printf("%d\n", ft_memcmp(s11, s21, 4)); */

	//ft_memmove

	//ft_substr
	/*  char s1[] = "hello world";
	char *s2;
	s2 = ft_substr(s1, 10, 8);
	printf("%s\n", s2); */
	
	//ft_ft_strjoin
	/* char s1[] = "hello ";
	char s2[] = "world";
	char *s3;
	s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3); */
	
	//ft_strtrim
	/* char s1[] = "hello world";
	char s2[] = "xxhello world";
	char s3[] = "hello worldxx";
	char s6[] = "xxhello worldxx";
	char s4[] = "xxxx";
	char s5[] = "x";
	printf("%s\n", ft_strtrim(s1, s5));
	printf("%s\n", ft_strtrim(s2, s5));
	printf("%s\n", ft_strtrim(s3, s5));
	printf("%s\n", ft_strtrim(s6, s5));
	printf("%s\n", ft_strtrim(s4, s5)); */

	//ft_split
	/* char delim = 'X';
	print_string_arr(ft_split("XHelloXWorldX", 'X'));
	print_string_arr(ft_split("XHelloXWorld", 'X'));
	print_string_arr(ft_split("HelloXWorldX", 'X'));
	print_string_arr(ft_split("HelloXWorld", 'X'));
	print_string_arr(ft_split("XHello WorldX", 'X'));
	print_string_arr(ft_split("NoDelimiter", 'X'));
	print_string_arr(ft_split("Hello WorldX", 'X'));
	print_string_arr(ft_split("HelloXXWorld", 'X'));
	print_string_arr(ft_split("X", 'X'));
	print_string_arr(ft_split("XX", 'X'));
	print_string_arr(ft_split("XXX", 'X'));
	print_string_arr(ft_split("", 'X'));
	print_string_arr(ft_split(0, 'X')); */
	print_string_arr(ft_split("split  ||this|for|me|||||!|", '|'));
	
	
	//ft_itoa
	/* printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(3));
	printf("%s\n", ft_itoa(-4));
	printf("%s\n", ft_itoa(-458));
	printf("%s\n", ft_itoa(456));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648)); */
	
	//ft_strmapi
	/* char s[] = "Hello";
	printf("original before: %s\n", s);
	printf("new after: %s\n", ft_strmapi(s, test1)); */

	//ft_striteri
	/* char s[] = "hello world";
	printf("original before: %s\n", s);
	ft_striteri(s, test2);
	printf("original after: %s\n", s); */

	//ft_putchr_fd
	/* int fd1 = open("f1.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putchar_fd('B', fd1);
	close(fd1); */

	//ft_putstr_fd
	/* int fd2 = open("f2.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putstr_fd("42", fd2);
	close(fd2); */

	//ft_putendl_fd
	/* int fd3 = open("f3.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putendl_fd("\nabcdef\n1234\n567\nend!\n", fd3);
	close(fd3); */

	//ft_putnbr_fd
	/* int fd4 = open("f4.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putnbr_fd(-2147483648, fd4);
	close(fd4); */

	return(0);
}
