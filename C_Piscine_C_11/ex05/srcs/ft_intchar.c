/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:08:32 by eyohn             #+#    #+#             */
/*   Updated: 2020/08/05 17:40:48 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_intchar(int a)
{
	int i;
	int b;
	char c[30];

	i = 0;
	b = a;
	while (b != 0)
	{
	   b = b / 10;
	   i++;
	}
	c[i] = '\0';
	while (i > 0)
	{
		c[i - 1] = (a % 10) + '0';
		a = a / 10;
		i--;
	}
	 
}