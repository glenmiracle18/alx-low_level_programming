#include "maih.hi"

/**
 * _strlen_recursion - count the number of characters
 * @s: is the string to count
 * Return: The number of characters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * isPalindromeRecursive - check if it is a palindrome
 * @string: is the string to count
 * @length: is the length of the string
 * Return: whether it is palindrome or not
 */

int isPalindromeRecursive(char *string, int length)
{
	if (string[0] != string[length])
	{
		return (1);
	}
	else if (string[0] == '\0')
	{
		return (1);
	}
	else
	{
		return (isPalindromeRecursive(string + 1, length - 2));
	}
}

/**
 * is_palindrome - makes recursion of thr two functions
 * @s: is the string of strings where it looks if it is palindrome
 * Return: the result of thr palindrome
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (isPalindromeRecursive(s, length - 1));
}
