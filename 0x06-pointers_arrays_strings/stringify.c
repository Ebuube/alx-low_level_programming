/**
 * stringify - converst and integral data type to string.
 * @num: the integer to convert
 * @store: where to store the string
 * @size_store: the size of the buffer, store
 * Return: returns a pointer to the string, store
 */
char *stringify(long num, char *store, int size_store)
{
	char *store_head = store;
	int output = 0;

	if (num < 0)
	{
		(*store) = '-';
		num = -1 * num;
	}
	if (num < 10)
	{
		(*store) = (num + '0');
		store++;
		(*store) = '\0';
	}
	else
	{
		output = num % 10;
		store++;
		stringify((num / 10), store, size_store);
		(*store) = (output + '0');
	}
	return (store_head);
}
