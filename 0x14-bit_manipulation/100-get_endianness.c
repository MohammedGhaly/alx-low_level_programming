/**
 * get_endianness - Check the endianess
 * Return: Success
 */
int get_endianness(void)
{
	int i;

	i = 2;
	if (i & 1)
		return (0);
	return (1);
}
