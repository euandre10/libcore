#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

typedef struct {
	size_t memalloc_size;
} Header;

/* === MEMORY FUNCTIONS === */
void	*my_memcpy	(void *dest, const void *src, size_t size);
void	*my_memset	(void *dest, int value, size_t bytes);
void	*my_memalloc	(size_t num_elem, size_t elem_size);

/* CHAR FUNCTIONS */
int	my_isalpha	(int ch);
int	my_isdigit	(int ch);
int	my_isspace	(int ch);
int	my_islower	(int ch);
int	my_isupper	(int ch);
int	my_tolower	(int ch);
int	my_toupper	(int ch);
char	*my_itoa	(int number, char *str, int base);

/* === STRING FUNCTIONS */
size_t	my_strlen	(const char *str);
size_t	my_strwrdc	(const char *str);
int	my_strcmp	(const char *str1, const char *str2);
char	*my_strdup	(const char *str);
char	*my_strcpy	(char *dest, const char *src);
char	*my_strcat	(char *dest, const char *src);
char	*my_strrev	(char *str);

/* OTHER FUNCTIONS */
void	my_print	(const char *str);
void	my_println	(const char *str);
