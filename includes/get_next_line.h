/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:43:00 by eflorean          #+#    #+#             */
/*   Updated: 2019/09/23 14:43:02 by eflorean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 16
# define OPEN_MAX 2047
# include <fcntl.h>
# include <limits.h>
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

int				get_next_line(const int fd, char **line);

#endif
