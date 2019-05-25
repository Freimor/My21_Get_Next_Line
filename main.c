/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sskinner <sskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 16:45:57 by sskinner          #+#    #+#             */
/*   Updated: 2019/05/25 11:52:29 by sskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int			i;
	int			fd1;
	int			fd2;
	char		*line;
	int			k;

	k = 1;
	fd1 = open("test.txt", O_RDONLY);
	while ((i = get_next_line(fd1, &line)) > 0)
	{
		printf("read-> %d, fd = %d\n", i, fd1);
		printf("%s\n", line);
		printf("iteration -> %d\n", k);
		free(line);
		k++;
	}
	printf("last read-> %d\n", i);
	close(fd1);
	return (0);
}
