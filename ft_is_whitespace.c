/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_is_whitespace.c									:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: nyrandri <nyrandri@student.42antanana		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/10/31 16:04:40 by nyrandri		   #+#	  #+#			  */
/*	 Updated: 2024/10/31 16:04:40 by nyrandri		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

int ft_is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}
