/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodazzan <lodazzan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:58:25 by lodazzan          #+#    #+#             */
/*   Updated: 2025/12/18 13:00:27 by lodazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int n)
{
	long int	nb;
	int			len;

	nb = n;
	len = 0;
	if (nb > 9)
	{
		len = len + ft_putnbru(nb / 10);
		len = len + ft_putnbru(nb % 10);
	}
	else
		len += ft_putchar(nb + '0');
	return (len);
}
