/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtrin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:10:22 by rtrin             #+#    #+#             */
/*   Updated: 2020/08/09 10:22:47 by rtrin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_read_input(void)
{
	char	in[29696];

	g_num_len = read(0, in, 29696);
	if (in[g_num_len - 1] == '\n')
		g_num_len--;
	g_num_str = in;
}
