/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 23:19:44 by rlabbaou          #+#    #+#             */
/*   Updated: 2026/02/17 21:27:44 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	if (s)
		return (write(fd, s, ft_strlen(s)));
	return (write(fd, "(null)", 6));
}

/*#include <stdio.h>
int	main(void)
{
	char	*s = "hello";
	ft_putstr_fd(s,1);
}*/
