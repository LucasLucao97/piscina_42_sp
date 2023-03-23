/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubarbos <lubarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:46:00 by lubarbos          #+#    #+#             */
/*   Updated: 2023/03/06 08:49:39 by lubarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);
void    ft_print(int x, int y, int i, int j);

void    rush(int x, int y)
{
    int    i;
    int    j;

    if (x > 0 && y > 0)
    {
        i = 1;
        while (i <= y)
        {
            j = 1;
            while (j <= x)
            {
                ft_print(x, y, i, j);
                j++;
            }
            ft_putchar('\n');
            i++;
        }
    }
}

void    ft_print(int x, int y, int i, int j)
{
    if ((i == 1) && (j == 1))
        ft_putchar('A');
    else if ((i == y) && (j == 1))
        ft_putchar('A');
    else if ((i == y) && (j == x))
        ft_putchar('C');
    else if ((i == 1) && (j == x))
        ft_putchar('C');
    else if (i == 1 || i == y)
        ft_putchar('B');
    else if (j == 1 || j == x)
        ft_putchar('B');
    else
        ft_putchar(' ');
}