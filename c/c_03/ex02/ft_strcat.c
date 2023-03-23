/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubarbos <lubarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:30:37 by lubarbos          #+#    #+#             */
/*   Updated: 2023/03/19 15:51:47 by lubarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	s1_count;
	int	i;

	s1_count = 0;
	i = 0;
	while (dest[s1_count] != '\0')
	{
		s1_count++;
	}
	while (src[i] != '\0')
	{
		dest[s1_count] = src[i];
		s1_count++;
		i++;
	}
	dest[s1_count] = '\0';
	return (dest);
}
