/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:23:04 by eliagarc          #+#    #+#             */
/*   Updated: 2023/12/14 03:41:57 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
//#include <string.h>
//#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*bdst;
	char	*bsrc;
	int		aux_len;

	if (!dst && !src && len)
		return (NULL);
	aux_len = len;
	bdst = (char *)dst;
	bsrc = (char *)src;
	if (src < dst)
	{
		bdst += len;
		bsrc += len;
		while (aux_len--)
			*(--bdst) = *(--bsrc);
	}
	else
		ft_memcpy(bdst, bsrc, len);
	return (dst);
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("Test:\n");
		char a[30] = "Hola mundo 42 this is\0 a test";
		char c[30] = "Hola mundo 42 this is\0 a test";
		char b[20] = "Estoy probando";
		char d[20] = "Estoy probando";
		printf("string a: %s\n", a);
		printf("string b: %s\n", b);
		//printf("ft_memmove: %s\n", 
		(unsigned char *)ft_memmove(b, a, atoi(argv[1])));
		write(1, (unsigned char *)ft_memmove(b, a, atoi(argv[1])), 22);
		printf("\n");
		//printf("memmove: %s\n", 
		(unsigned char *)memmove(d, c, atoi(argv[1])));
		write(1, (unsigned char *)memmove(d, c, atoi(argv[1])), 22);
		printf("\n");
	}
	return (0);
}*/
