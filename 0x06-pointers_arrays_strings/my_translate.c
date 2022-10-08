/**
 * translate - translates a, e, o, t and l to digits
 * @c: character to translate
 * Return: the translated character
 */
char translate(char c)
{
	c = (c == 'A' || c == 'a') ? 4 + '0' : c;
	c = (c == 'E' || c == 'e') ? 3 + '0' : c;
	c = (c == 'O' || c == 'o') ? 0 + '0' : c;
	c = (c == 'T' || c == 't') ? 7 + '0' : c;
	c = (c == 'L' || c == 'l') ? 1 + '0' : c;
	return (c);
}
