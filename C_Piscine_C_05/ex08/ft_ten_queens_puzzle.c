/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 08:43:09 by eyohn             #+#    #+#             */
/*   Updated: 2020/07/30 08:59:07 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_ten_queens_puzzle(int nb)
{
	int a[9][9];
	int x;
	int y;

	x = 0;
	y = 0;
	while (nb > 0)
	{
		while (y < 10)	// идем по 
		while (x < 10)	// идем по строке перебирая все значения
		if (a[x][y] == 0)
		{
			// тут записываем в ячейки массиваов значение 2 - там где королева и значение 1 там где она перекрывает и nb отнимаем 1;
		}
		x++

	}
	return (0);
}
