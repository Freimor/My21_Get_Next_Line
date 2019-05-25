/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sskinner <sskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:08:42 by sskinner          #+#    #+#             */
/*   Updated: 2019/04/20 14:27:29 by sskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (((c >= 'a') && (c <= 'z'))
	|| ((c >= 'A') && (c <= 'Z'))
	|| ((c >= '0') && (c <= '9')))
		return (1);
	else
		return (0);
}