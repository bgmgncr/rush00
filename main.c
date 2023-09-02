/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:40:44 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/02 17:14:36 by sekmekci         ###   ########.fr       */
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
			if ((b > 2 && a > 2) && (b < x && a < y))
				write(1, " ", 1);
			if (((((b == a) && (a == y)) || (a == y && b == 1))) && (y >= 2))
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
			/*if (((x >= 3 || y >= 3) || ((a <= 2 && b > 2) || (b <= 2 && a > 2))) && ((b > 1 && b < x) || (a > 1 && a < y))) */
	rush(3, 3);
	return (0);
}
