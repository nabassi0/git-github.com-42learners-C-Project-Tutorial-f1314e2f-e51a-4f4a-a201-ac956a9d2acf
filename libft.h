/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:56:57 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/29 22:19:28 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_isalpha(int a);
int	ft_isdigit(int a);
int	ft_isalnum(int a);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char *str);
void	*ft_memset(void *pointer, int value, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *str, int searchedChar);
char	*ft_strrchr(const char *str, int searchedChar);
int	ft_strncmp(const char *first, const char *second, size_t len);
void	*ft_memchr(const void *memBlock, int searchedChar, size_t size);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(char *haystack, char *needle, size_t len);
int	ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

#endif