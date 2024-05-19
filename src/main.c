/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:24:49 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/19 15:24:05 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

long long   g_exit_status = 0;

int main(int argc, char **argv, char **envp)
{
	char	*input;

	if (argc > 1 && argv)
		err_exit("ERR_NO_CMD_LINE_ARGS");
	printf("Just a placeholder: %s\n", envp[1]);
	while (1)
	{
		input = (readline(">: "));
		if (is_invalid(input)) // TODO; currently the function is just a placeholder
			{
				free (input);
				printf("We do not allow messages starting with \'A\'\n");
				continue ;
			}
		printf("You have entered: %s\n", input);
		free (input);
	}
	return (0);
}