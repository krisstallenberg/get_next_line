/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_bonus.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: kris <kris@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 18:44:20 by kris          #+#    #+#                 */
/*   Updated: 2020/07/05 14:31:18 by kstallen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

/*
**  get_next_line functions
*/

int		get_next_line(int fd, char **line);
int		buffer_to_line(int eof, char *buffer, char **buffer_list, char **line);
int		read_and_append_buffer(int fd, char **buffer);

/*
**  libft functions
*/

size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmalloc(size_t size);
char	*ft_strdup(const char *s1);

#endif
