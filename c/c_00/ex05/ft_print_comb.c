/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubarbos <lubarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:55:27 by lubarbos          #+#    #+#             */
/*   Updated: 2023/03/20 17:03:14 by lubarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	c;
	char	b;
	char	a;

	c = '0';
	while (c < '8')
	{
		b = c + 1;
		while (b < '9')
		{
			a = b + 1;
			while (a <= '9')
			{
				write(1, &c, 1);
				write(1, &b, 1);
				write(1, &a, 1);
				if (c != '7')
					write(1, ", ", 2);
				a++;
			}
			b++;
		}
		c++;
	}
}
