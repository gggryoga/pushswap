/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:26:07 by rozeki            #+#    #+#             */
/*   Updated: 2023/08/24 03:53:31 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(){
// 	int a;

// 	a = ft_isdigit(48);
// 	printf("%d",a);
// }

// https://github.com/hu8813/push_swap/blob/main/src/utils.c