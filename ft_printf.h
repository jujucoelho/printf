/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoelho <juliacoelhobrandao@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:54:49 by jucoelho          #+#    #+#             */
/*   Updated: 2025/01/10 22:06:06 by jucoelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_function_type(const char *s, va_list ap);
int		ft_print_hex_upper(unsigned int nbr);
int		ft_print_hex_lower(unsigned int nbr);
int		ft_print_c(int letter);
int		ft_print_s(char *str);
int		ft_print_nbr(int n);
int		ft_print_unbr(unsigned int n);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_print_mem(unsigned long nbr);
int		ft_print_mem2(unsigned long nbr);

#endif