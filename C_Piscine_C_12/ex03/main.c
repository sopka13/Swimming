/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:10:00 by eyohn             #+#    #+#             */
/*   Updated: 2020/08/06 16:31:54 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int main(void)
{
	t_list *test;
	t_list **head;

	test = ft_create_elem("t1");
	head = &test;
	ft_list_push_front(head, "t2");
	ft_list_push_front(head, "t3");
	printf("%s\n", (*head) -> data);
	printf("%s\n", (*head) -> next -> data);
	printf("%s\n", (*head) -> next -> next -> data);
	*head = ft_list_last(*head);
	printf("%s\n", (*head)->data);
	return (0);
}
