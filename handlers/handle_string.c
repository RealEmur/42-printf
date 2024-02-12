#include "../ft_printf.h"

int	handle_string(va_list va)
{
	char	*str;

	str = va_arg(va, char *);
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}
