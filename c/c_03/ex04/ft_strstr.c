/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubarbos <lubarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:36:07 by lubarbos          #+#    #+#             */
/*   Updated: 2023/03/18 17:36:24 by lubarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*res;

	j = 0;
	i = 0;
	res = &str[0];
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (j == 0)
			{
				res = &str[i];
			}
			j++;
		}
		else
		{
			res = 0;
			j = 0;
		}
		i++;
	}
	return (res);
}
