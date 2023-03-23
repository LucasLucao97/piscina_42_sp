/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubarbos <lubarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:34:58 by lubarbos          #+#    #+#             */
/*   Updated: 2023/03/18 17:35:01 by lubarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				s1_count;
	unsigned int	i;

	s1_count = 0;
	i = 0;
	while (dest[s1_count] != '\0')
	{
		s1_count++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[s1_count] = src[i];
		s1_count++;
		i++;
	}
	dest[s1_count] = '\0';
	return (dest);
}
