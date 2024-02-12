#include "../ft_printf.h"

int	handle_hex_lower(va_list va)
{
	return (\
	print_base(va_arg(va, unsigned int), 16, "0123456789abcdef"));
}
