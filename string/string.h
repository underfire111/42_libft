/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:13 by ppereira          #+#    #+#             */
/*   Updated: 2022/04/23 13:03:14 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(STRING_H)
# define STRING_H

# include <stdlib.h>

char	**ft_split(char const *s, char c);

char	*ft_strcat(char *dst, const char *src);

char	*ft_strchr(const char *s, int c);

int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strdup(char *src);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t hlen);

char	*ft_strrchr(const char *s, int c);

void	ft_strsrt(char **strs, int low, int high);

void	ft_strswp(char **s1, char **s2);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif // STRING_H
