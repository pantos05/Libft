/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforge <nforge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:17:44 by nforge            #+#    #+#             */
/*   Updated: 2021/10/25 17:20:06 by nforge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define MAX 922337203685477580
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strchr(const char *str, int ch);

char	*ft_strdup(const char *str);

void	*ft_memset(void *destination, int c, size_t n);

void	ft_bzero(void *destination, size_t n);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

size_t	ft_strlen(const char *str);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_tolower(int c);

int		ft_toupper(int c);

int		ft_atoi(const char *str);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strrchr(const char *str, int ch);

char	*ft_strnstr(const char	*big, const char *little, size_t len);

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	*ft_memcpy(void *destination, const void *source, size_t n);

void	*ft_memccpy(void *destination, const void *source, int c, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_calloc(size_t num, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

void	ft_putendl_fd(char *s, int fd);

#endif