/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuicha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:01:37 by mjuicha           #+#    #+#             */
/*   Updated: 2023/12/16 16:45:41 by mjuicha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	lowerhex(unsigned long int n, int *count)
{
	if (n <= 15)
		ft_putchar("0123456789abcdef"[n], count);
	else if (n > 15)
	{
		lowerhex(n / 16, count);
		lowerhex(n % 16, count);
	}
}

void	upperhex(unsigned long int n, int *count)
{
	if (n <= 15)
		ft_putchar("0123456789ABCDEF"[n], count);
	else if (n > 15)
	{
		upperhex(n / 16, count);
		upperhex(n % 16, count);
	}
}

void	ft_address(void *ptr, int *count)
{
	ft_putstr("0x", count);
	lowerhex((unsigned long int)ptr, count);
}
