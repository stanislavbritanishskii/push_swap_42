/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbritani <sbritani@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:59:17 by sbritani          #+#    #+#             */
/*   Updated: 2022/12/20 22:59:19 by sbritani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	while (s11[i] != '\0' && s22[i] != '\0' && (i < n))
	{
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		i++;
	}
	if (i != n)
		return (s11[i] - s22[i]);
	return (0);
}
