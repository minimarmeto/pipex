/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:56:08 by dgomez-b          #+#    #+#             */
/*   Updated: 2023/06/29 15:18:41 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ********************************LIBRARIES********************************* */

#include "./libft.h"

/* ********************************FUNCTIONS********************************* */

void	*ft_bzero(void *b, size_t len)
{
	return (ft_memset(b, 0, len));
}
