# ft_printf

Recreating the printf function in C

```
int ft_printf(char const *str, ...);
```

The ft_print function works like original printf function in C but only with the followings parameters:


| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `%c` | `char` | Prints the given char |
| `%s` | `char *` | Prints the given string |
| `%p` | `void *` | Prints memory address in hexadecimal format |
| `%d` | `int` | Prints a decimal number (base 10) |
| `%i` | `int` | Prints an integer (base 10) |
| `%u` | `unsigned int` | Prints an unsigned integer (base 10) |
| `%x` | `unsigned int` | Prints a hexadecimal (base 16) number in lower case|
| `%X` | `unsigned int` | Prints a hexadecimal (base 16) number in upper case|
| `%%` | `char` | Prints the percentage "%" character|

Returns the length of the string writen or -1 on error