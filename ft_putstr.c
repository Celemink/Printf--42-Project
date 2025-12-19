/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodazzan <lodazzan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:53:28 by lodazzan          #+#    #+#             */
/*   Updated: 2025/12/18 13:11:55 by lodazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char	*str)
{
	if (!str)
	{
		(ft_putstr("(null)"));
		return (6);
	}
	return (write(1, str, ft_strlen(str)));
}
