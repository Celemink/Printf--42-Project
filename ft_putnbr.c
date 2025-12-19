/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodazzan <lodazzan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:57:35 by lodazzan          #+#    #+#             */
/*   Updated: 2025/12/18 13:00:22 by lodazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	nb;
	int			len;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		len = len + ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		len = len + ft_putnbr(nb / 10);
		len = len + ft_putnbr(nb % 10);
	}
	else
		len += ft_putchar(nb + '0');
	return (len);
}
