/**
*more_numbers - 0
*
*/
void more_numbers(void)
{
	int i,  j;

	for (j = 0; j < 11; ++j)
	{
		for (i = 0; i < 15; ++i)
		{
			if (i < 9)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
	}
	_putchar('\n');

}
