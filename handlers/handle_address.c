#include "../ft_printf.h"

int	handle_address(va_list va)
{
	return (\
	ft_putstr("0x") + \
	print_base(va_arg(va, unsigned long long), 16, "0123456789abcdef"));
}
