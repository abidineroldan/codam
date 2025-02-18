#include <unistd.h>

void ft_print_reserve_alphabet(void)
{
	char i;
	i = 'z';
	while (i >= 'a' )
	{
		write(1, &i, 1);
		i--;
		}
}
int main(void)
{
	ft_print_reserve_alphabet();
}
