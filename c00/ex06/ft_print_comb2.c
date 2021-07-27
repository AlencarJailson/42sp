#include <unistd.h>
void	ft_format(char one, char two, char three, char four)
{
	write(1, &one, 1);
	write(1, &two, 1);
	write(1, " ", 1);
	write(1, &three, 1);
	write(1, &four, 1);
	if (one != '9' || two != '8')
		write(1, ", ", 2);
}

void	ft_comb(char one, char two, char three, char four)
{
	while (one <= '9')
	{
		while (two <= '9')
		{
			while (three <= '9')
			{
				while (four <= '9')
				{
					ft_format(one, two, three, four);
					four++;
				}
				four = '0';
				three++;
			}
			three = one;
			two++;
			four = two + 1;
		}
		two = '0';
		one++;
	}
}

void	ft_print_comb2(void)
{
	char	one;
	char	two;
	char	three;
	char	four;

	one = '0';
	two = '0';
	three = '0';
	four = '1';
	ft_comb(one, two, three, four);
}
