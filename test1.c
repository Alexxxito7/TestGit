include <unistd.h>

int	main()
{
	write(1, "Hello", 5);
	// Why is this not working
	return (0);
}
