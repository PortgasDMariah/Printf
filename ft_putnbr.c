/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:17:45 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/25 18:06:19 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(long int n, char *base, int *count)
{
	int	leni;

	leni = ft_strlen(base);
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		(*count)++;
	}
	if (n >= leni)
	{
		ft_putnbr((n / leni), base, count);
		ft_putnbr((n % leni), base, count);
	}
	else
	{
		(*count)++;
		ft_putchar(base[n % leni]);
	}
}

void    ft_putnbri(unsigned long int n, char *base, int *count)
{
	unsigned long int	leni; 

	leni = ft_strlen(base);
	if (n >= leni)
	{
		ft_putnbri((n / leni), base, count);
		ft_putnbri((n % leni), base, count);
	}
	else
	{       
		(*count)++;
		ft_putchar(base[n % leni]);
	}
}
