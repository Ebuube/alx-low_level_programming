# HASH TABLES

Implementing hash tables in C languages.


The hash tables in this repo implement their hash function implementing **djb2** algorithm.

### djb2:
This algorithm (k=33) was first reported by dan bernstein many years ago in comp.lang.c. another version of this algorithm (now favored by bernstein) uses xor: hash(i) = hash(i - 1) * 33 ^ str[i]; the magic of number 33 (why it works better than many other constants, prime or not) has never been adequately explained.
```
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
```
### Explanation
So basically, this function is used to generate hash values for strings.
It takes a string as input, represented by the parameter str. The string is expected to be an array of unsigned characters. The function initializes a variable hash to the initial value of 5381. This value is an arbitrary starting point for the hash calculation. The function iterates through each character of the input string using a while loop and assigns it to the variable c. Amazing!


Find out [more](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)
