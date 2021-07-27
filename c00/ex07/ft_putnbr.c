#include <unistd.h>

void	ft_putnbr(int nb)
{
	char arr[];
	nb = nb+'0';
	int i;
	i = 0;
	arr[] = nb;
	while(arr != '\n')
	{
	write(1, arr[i], 1);
	}
}
