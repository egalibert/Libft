/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaliber <egaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:55:31 by egaliber          #+#    #+#             */
/*   Updated: 2021/12/15 16:36:02 by egaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*t;
	size_t		i;

	i = 0;
	t = (char *)malloc(sizeof(char) * size + 1);
	if (t == NULL)
		return (NULL);
	while (i < size + 1)
	{
		t[i] = '\0';
		i++;
	}
	return (t);
}
