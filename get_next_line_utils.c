/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 19:24:25 by timlecou          #+#    #+#             */
/*   Updated: 2020/08/09 17:10:11 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		contains_char(char *s, char c)
{
	int	index;

	index = 0;
	if (!s)
		return (0);
	while (s[index])
	{
		if (s[index] == c)
			return (SUCCESS_CODE);
		index++;
	}
	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	index;

	index = 0;
	len = (int)ft_strlen(dest);
	while (src[index] && index < nb)
		dest[len++] = src[index++];
	dest[len] = 0;
	return (dest);
}

char	*ft_strnew(int n)
{
	char	*string;
	int		index;

	if (!(string = (char *)malloc(n)))
		return (NULL);
	index = 0;
	while (index < n)
		string[index++] = 0;
	return (string);
}

int		free_string_and_return(char **string, int val)
{
	if (*string)
		free(*string);
	*string = NULL;
	return (val);
}
