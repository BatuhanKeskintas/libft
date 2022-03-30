/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:20:26 by bkeskint          #+#    #+#             */
/*   Updated: 2022/03/30 10:23:47 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_newstring(size_t	size)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	s[size] = '\0';
	while (size)
	{
		size--;
		s[size] = '\0';
	}
	return (s);
}
