# 📚 42_Libft 📚
This is the main library where we use most of the functions for the next projects in 42.

********

**🔎Objective🔎**
The aim of this project is to create a complete and robust implementation of the libft library, which will be used as a base for all other projects.

**📝Functions📝**
| Prototype|Description |
| -------------------------- | ----------- |
| int	ft_isalpha(int character) | This function checks if the character given by parameter is between the letter (a-z, A-Z) range in Ascii code |
| int	ft_isdigit(int c) | This function checks if the character given by parameter is between the digit (0-9) range in Ascii code |
| int	ft_isalnum(int c) | This function checks if the character given by parameter is between the letter and digit (a-z, A-Z, 0-9) range in Ascii code |
| int	ft_isascii(int c) | This function checks if the character given by parameter is in Ascii Code range |
| int	ft_isprint(int c) | This function checks if the character given by parameter is printable in Ascii code |
| size_t	ft_strlen(const char *c) | This function return the number of characters that the string given by parameter have. |
| void	*ft_memset(void *b, int c, size_t l) | This function writes 'l' bytes of value 'c' (converted to an unsigned char) to the string b. |
| void	ft_bzero(void *s, size_t n) | This function fill the string 's' with 'n' NULL characters ('\0') |
| void	*ft_memcpy(void *dst, const void *src, size_t n) | This function copy 'n' characters from 'src' string to 'dst' string. |
| void	*ft_memmove(void *dst, const void *src, size_t len) | This function do the same as memcpy but it copies from the len size to take care about the overlap |
| size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize) | This function copy 'dstsize' bytes from string 'src' to 'dst' string. |
| size_t	ft_strlcat(char *dst, const char *src, size_t dstsize) | This function concatenate 'dstsize' bytes from 'src' |
| int	ft_toupper(int c) | This function return the character given by parameter in Uppercase |
| int	ft_tolower(int c) | This function return the character given by parameter in Lowercase |
| char	*ft_strchr(const char *s, int c) | This function return a pointer to the first character found in the given string 's' by parameter. If not return a NULL pointer. |
| char	*ft_strrchr(const char *s, int c) | This function return a pointer to the last character found in the given string 's' by parameter. If not return a NULL pointer. |
| int	ft_strncmp(const char *s1, const char *s2, size_t n) | This function return the difference between the string 's1' and 's2' in the first 'n' bytes. If there are no difference the return value is 0 |
| void	*ft_memchr(const void *str, int c, size_t n) | This function find the first 'c' character in 'str' in the first 'n' bytes. If there are no coincidence return a NULL pointer. |
| int	ft_memcmp(const void *str1, const void *str2, size_t n) | This function return the difference between 's1' and 's2' in the first 'n' bytes. If there are no difference the return value is 0 |
| char	*ft_strnstr(const char *haystack, const char *needle, size_t len) | This function returns a pointer to the first coincidence of the 'needle' in the 'haystack' in the first 'len' bytes. If there are no coincidence it return a NULL pointer. |
| int	ft_atoi(const char *str) | This function return the string given by parameter in integer type object. |
| void	*ft_calloc(size_t count, size_t size) | This function allocate  |
| char	*ft_strdup(const char *s1) | Text |


