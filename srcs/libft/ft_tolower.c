/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:06:26 by lmann             #+#    #+#             */
/*   Updated: 2021/09/27 15:25:35 by lmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	i;

	i = c;
	if (65 <= i && i <= 90)
	{
		(i += 32);
		return (i);
	}
	else
		return (i);
}
