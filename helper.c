/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:43:00 by rlabbaou          #+#    #+#             */
/*   Updated: 2026/02/17 20:28:52 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(long n)
{
	int	j;

	j = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -1 * n;
		j = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		j++;
	}
	return (j);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_lenhex(unsigned long long n)
{
	int	j;

	j = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -1 * n;
		j = 1;
	}
	while (n > 0)
	{
		n = n / 16;
		j++;
	}
	return (j);
}
