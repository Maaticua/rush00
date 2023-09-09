/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochetrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:29:19 by ochetrit          #+#    #+#             */
/*   Updated: 2023/09/09 12:20:53 by ochetrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_o_line(int x)
{
	int	i;

	ft_putchar('o');
	i = 2;
	while (i < x)
	{
		ft_putchar('-');
		i++;
	}
	if (x != 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 2;
	ft_o_line(x);
	while (i < y)
	{
		j = 2;
		ft_putchar('|');
		while (j < x)
		{
			ft_putchar(' ');
			j++;
		}
		if (x != 1)
			ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
	if (y != 1)
		ft_o_line(x);
}
