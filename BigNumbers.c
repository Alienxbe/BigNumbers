/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigNumbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:46:41 by mykman            #+#    #+#             */
/*   Updated: 2021/06/18 14:20:22 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BigNumbers.h"

t_bignumber	new_bignumber(long long n)
{
	t_bignumber			bn;
	unsigned long long	un;

	if (n < 0)
	{
		bn.sign = 1;
		un = -n;
	}
	else
		un = n;
	bn.size = sizeof(n);
	bn.ptr = &n;
	return (bn);
}
