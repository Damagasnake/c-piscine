/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:17:51 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/10 14:46:09 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c +1;
		while (d <= '8')
		{
			u = d +1;
			while (u <= '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (c != '7')
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}
