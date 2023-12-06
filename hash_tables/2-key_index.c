#include "hash_tables.h"

/**
 * key_index - gets the index
 * @key: key to get the index
 * @size: size of the array of the hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
