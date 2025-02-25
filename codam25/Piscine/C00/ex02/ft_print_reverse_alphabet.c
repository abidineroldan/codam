#include <unistd.h>

void ft_print_reserve_alphabet(void)
{
	char letter;
	letter = 'z';
	while (letter >= 'a' )
	{
		write(1, &letter, 1);
		letter--;
		}
}

