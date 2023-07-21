#include <stdio.h>
#include "ft_is_negative.c"

void	ft_is_negative(int n);

int	main(void)
{
	int	i;

	i = -1;
	while (i < 2)
	{
		ft_is_negative(i);
		printf(" - the integer is %d", i);
		printf("\n");
		++i;
	}
}
