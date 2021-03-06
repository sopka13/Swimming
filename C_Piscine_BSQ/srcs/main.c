/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:06:43 by eyohn             #+#    #+#             */
/*   Updated: 2020/08/11 21:26:04 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

char	**in_mas; // массив в который идет запись со стандартного ввода
int		**in_mas2;	// массив в которым ведем подсчет
int		num = 0;	// количество строк в исходной карте
char	s1 = '0';	// символ пустой
char	s2 = '1';	// символ препятствие
char	s3 = '2';	// символ полный
int		error = 0;	// значение ошибки
int		min = 0;	// максимальный размер квадрата
int		str = 0;	// длина строк массива

int	main(int argc, char **argv)
{
	int	i = 0;
	int j = 0;
	if (argc == 1)
	{
		ft_input(0); 		// чтение карты со стандартного ввода и запись в массив
		ft_check_letter();	// функция обработки карты на валидность
		ft_second_map();	// функция обработки карты на поиск места под квадрат
		ft_finish_map();
		if (error == 1)
			ft_put_error();			// если нашли ошибки то выводим					
		else			
			while (i < num)
			{
				printf("%s", in_mas[i]);
				i++;
			}									// функция вывода на экран карты
		ft_free();
	}
	else
	{
		i = 1;
		while (i < argc) // цикл который будет брать в обработку каждый файл 
		{
			ft_open_map(argv[i]);
			if (error == 1)
				ft_put_error();			// если нашли ошибки то выводим			
			else			
				while (j < num)
				{
					printf("%s", in_mas[j]);
					j++;
				}								
			ft_free();
			i++;
		}
	}
}
