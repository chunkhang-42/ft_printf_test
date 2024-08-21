/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamu <mamu@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:14:54 by mamu              #+#    #+#             */
/*   Updated: 2024/08/21 15:09:42 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"
#include <limits.h>

#define ARGS "kl12j3123 %s %s %s %d %i %u %xlkkjwqe %X %%sad&*@", 0, "", NULL, INT_MAX, 0, 0, INT_MAX, 0, 0

int	main(void)
{
	printf("=> %d\n", printf(ARGS));
	printf("=> %d\n", ft_printf(ARGS));
}
