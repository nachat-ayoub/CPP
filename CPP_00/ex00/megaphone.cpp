#include <iostream>

void	print_str(std::string str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		std::cout << (char)std::toupper(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		print_str(av[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
