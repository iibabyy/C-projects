/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wildcard.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 04:01:00 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/14 20:25:11 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WILDCARD_H
# define WILDCARD_H

# include "../../includes/minishell.h"
# include "../lexing/lexing.h"

char	*list_files(char *str, char **input);
char	*get_dir_files(DIR *dir, char *str, char **input);
bool	is_valid_name(char *name, char *original, char **input);
char	*sort_wildcard_files(char *files);
bool	check_if_expand(char *str, char **temp);

#endif