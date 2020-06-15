int print_last_digit(int n){

	unsigned int t;

	if (n >= 0)
	{
		t = n % 10
		_putchar('0' + t);
		return (t);
	}

	t = (n *(-1)) % 10;
	_putchar('0' + t);
	return (t);

}