#include "../ft_printf.h"

int	handle_unsigned_int(va_list va)
{
	return (print_base(va_arg(va, unsigned int), 10, "0123456789"));
}
