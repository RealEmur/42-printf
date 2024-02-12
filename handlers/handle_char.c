#include "../ft_printf.h"

int	handle_char(va_list va)
{
	return (ft_putchar(va_arg(va, int)));
}
