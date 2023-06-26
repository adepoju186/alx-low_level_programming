/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
 */
int _atoi(char *s)
{
	unsigned int digit = 0;
	int num = 1;

	do {
		if (*s == '-')
			num *= -1;
		else if (*s >= '0' && *s <= '9')
			digit = (digit * 10) + (*s - '0');
		else if (digit > 0)
			break;
	} while (*s++);

	return (digit * num);
}
