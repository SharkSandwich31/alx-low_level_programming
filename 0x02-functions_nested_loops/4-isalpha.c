#include "main.h"

/**
 * isalpa - checks for alphabetic characters
 * returns 1 if alphabet and 0 if not
 */
int _isalpha(int c) 
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
