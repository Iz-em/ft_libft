/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:05:35 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 10:05:36 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if((c >='A'&& c <='Z')||(c >='a'&& c <='z')||(c >='0'&& c <='9'))
        return (1);
    return (0);
}