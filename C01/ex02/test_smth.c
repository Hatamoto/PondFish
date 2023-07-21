#include <unistd.h>

void	function_test(int *i);

int	main(void)
{
	int i;
	i = 5;
	int *ip = &i;

	function_test(&i);
	function_test(ip);
}

void	function_test(int *i)
{
	write(1, &i, 1);
}

