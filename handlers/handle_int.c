#include "../ft_printf.h"

int	handle_int(va_list va)
{
	long	num;
	int		return_val;

	return_val = 0;
	num = va_arg(va, int);
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
		return_val = 1;
	}
	return_val += print_base(num, 10, "0123456789");
	return (return_val);
}
