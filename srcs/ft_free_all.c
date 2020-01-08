/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loram <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 00:08:15 by loram             #+#    #+#             */
/*   Updated: 2019/12/03 00:08:20 by loram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void			ft_free_all(t_cell **map, int size)
{
	int			i;
	t_cell		*tmp_cell;
	t_cell		*temp;

	i = size;
	while (i > 0)
	{
		if (map[i]->col)
		{
			tmp_cell = map[i]->col;
			while (tmp_cell != map[i])
			{
				temp = tmp_cell;
				tmp_cell = tmp_cell->col;
				ft_freecell(temp);
				free(temp);
			}
		}
		i--;
	}
	ft_freehead(map[size]);
	free(map);
}
