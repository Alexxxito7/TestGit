include <unistd.h>

int	main()
{
	int i;

	write(1, "Hello", 5);
	// Why is this not working
	while(1)
	{
		i++;
	}
	return (0);
}

void putstr()
{
	printf("Whadup");
}