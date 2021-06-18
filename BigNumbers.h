/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigNumbers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:38:35 by mykman            #+#    #+#             */
/*   Updated: 2021/06/18 13:01:49 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGUMBERS_H
# define BIGUMBERS_H

typedef struct s_bignumber
{
	char *				ptr;
	char				sign : 1; // boolean
	unsigned int		size; // In byte
}				t_bignumber;

#endif
