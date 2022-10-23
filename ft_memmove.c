/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:53 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/22 01:24:25 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>
#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    unsigned char* d;
    d = (unsigned char*)(dest);
    unsigned char* s;
    s = (unsigned char*)(src);
   
     if (d == '\0' && s == '\0')
            return(NULL);
     if (d > s )
    {
        while (n > 0)
        {
            --n;
        d[n] = s[n];
        
        }
    }
    else 
    while (n > i )
    {
        d[i] = s[i];
       i++;
    }
    return(d);
    
}
//   int main()
//  {
//      char b [255]= "";
//     char a [255]= "salamo3alaykoum";
//      printf ("%s",ft_memmove(a, a, 0));
//    printf ("\n %s",memmove(a,a, 0));
    
//   }