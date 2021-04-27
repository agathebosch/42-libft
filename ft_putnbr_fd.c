/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbosch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:17:40 by agbosch           #+#    #+#             */
/*   Updated: 2021/04/19 14:39:30 by agbosch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = n * -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10;
	}
	ft_putchar_fd(nb + 48, fd);
}
