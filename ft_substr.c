/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:09:42 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/07 23:49:06 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if ((!s))
		return (NULL);
	if ((ft_strlen(s) < start))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	d = malloc(sizeof(char) * (len + 1));
	if (d == 0)
		return (NULL);
	ft_strlcpy (d, s + start, len + 1);
	return (d);
}
