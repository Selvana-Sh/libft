/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LIBFT.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:27:56 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/04/09 14:24:43 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*--------ADDING HEADERS------------*/
# include <unistd.h>
# include <stdlib.h>
/*------FUNCTION PROTOTYPES--------*/
int				ft_isalpha(int c);
int				ft_isdigit(int n);
int				ft_isalnum(int n);
void			ft_bzero(void *s, unsigned int n);
int				ft_isascii(int d);
int				ft_isprint(int c);
unsigned int	ft_strlen(const char *str);
int				ft_tolower(int c);
int				ft_toupper(int c);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strrchr(const char *s, int c);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s);
char			*ft_strchr(const char *str, int c);
void			*ft_memset(void *str, int c, unsigned int len);
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t size);
void			*ft_memchr(const void *str, int c, unsigned int n);
int				ft_atoi(const char *str);
char			*ft_strnstr(const char *hays, const char *ndl, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char const *s, int fd);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int n);
char			**ft_split(char const *s, char c);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
