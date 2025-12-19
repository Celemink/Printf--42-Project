/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodazzan <lodazzan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:58:40 by lodazzan          #+#    #+#             */
/*   Updated: 2025/12/18 12:59:49 by lodazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int				count;
	unsigned long	ptr;

	if (!p)
		return (ft_putstr("(nil)"));
	count = 0;
	ptr = (unsigned long)p;
	count += ft_putstr("0x");
	count += ft_hexnumber(ptr, 1);
	return (count);
}
