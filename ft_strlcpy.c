/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:07:42 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 10:08:24 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t n)
{
  size_t i;
  i = 0;
  size_t lensrc;
  lensrc = ft_strlen(src);
  if (n!=0)
  {
    while (src[i] && i < n - 1)
    {
      // if (!src[i])
      //   break;
      dst[i] = src[i];
      i++;
    }
    dst[i]  = '\0';
  }
  return(lensrc);
}
