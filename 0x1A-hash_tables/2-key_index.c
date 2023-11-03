#include "hash_tables.h"
/**
 * key_index - get index where node will be inserted.
 * @key: key
 * @size: size.
 * Return: index.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}
