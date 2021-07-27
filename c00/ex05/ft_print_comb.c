#include <unistd.h>
void	ft_putcomma(char one)
{
	if (one < '7')
		write(1, ", ", 2);
}

void	ft_print_number(char one, char two, char three)
{
	one = '0';
	two = '0';
	three = '0';
	while (one <= '9')
	{
		while (two <= '9')
		{
			while (three <= '9')
			{
				if ((one < two) && (two < three))
				{
					write(1, &one, 1);
					write(1, &two, 1);
					write(1, &three, 1);
					ft_putcomma(one);
				}
				three++;
			}
			three = '0';
			two++;
		}	
		two = '0';
		one++;
	}
}

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	two = '0';
	three = '0';
	ft_print_number(one, two, three);
}
