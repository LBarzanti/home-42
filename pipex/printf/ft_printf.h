/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:43:19 by lbarzant          #+#    #+#             */
/*   Updated: 2024/11/30 17:17:45 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *regex, ...);
int		print_string(char *s);
int		print_null(int mode);
int		print_char(int c);
int		print_void(void *s);
int		print_nbr(int n);
int		print_unbr(unsigned int n);
int		print_uint_ex(unsigned int n, char mode);

#endif
