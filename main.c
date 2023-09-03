/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:40:44 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/03 14:05:28 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	while (a <= y)
	{
		b = 1;
		while (b <= x)
		{
			if (((b == a && a == 1) || (b == x && a == 1)))
				ft_putchar('A');
			else if ((b > 2 && a > 2) && (b < x && a < y))
				write(1, " ", 1);
			else if (((b == 1) && (a == y)) || ((x == b) && (y == a)))
				ft_putchar('C');
			else 
				ft_putchar('B');
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
}

int	main(void)
{
	rush(3, 4);
	return (0);
}
