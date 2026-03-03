/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:50:52 by rlabbaou          #+#    #+#             */
/*   Updated: 2026/02/17 20:27:50 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_len(long n);
int	ft_lenhex(unsigned long long n);
int	ft_strlen(const char *s);
int	ft_putchar_fd(int c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd(long n, int fd);

#endif
