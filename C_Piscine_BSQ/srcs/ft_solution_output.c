/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_output.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 21:16:07 by eyohn             #+#    #+#             */
/*   Updated: 2020/08/11 21:16:32 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void    ft_solution_output(char *str_map)        // выводит на экран результаты
{
    int i;

    i = 0;
    ft_map_arr(str_map);// Выделять память или нет?????
    ft_second_map();
    ft_finish_map();
    printf("ft_solution_output ok \n");
}
