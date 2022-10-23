/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:36:42 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/23 18:24:37 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *line;
	int count;

	if(!(line = malloc(15 * sizeof(char)))) // 50 => BUFFER_SIZE
		return(NULL);
	count = read(fd, line, 15);
	line[count] = '\0';
	return (line);
}

int main()
{

	int file = open("file.txt", O_RDONLY, 777);

	char *k;

	k = get_next_line(file);
	printf("%s \n", k);
	
	k = get_next_line(file);
	printf("%s \n", k);

	k = get_next_line(file);
	printf("%s \n", k);

	

	/* for(int i = 0; i<5; i++)
		print_nb(); */
	/* int file = open("file.txt", O_RDONLY, 777);
	char *data = malloc(sizeof(char) * 1000);

	int readed;

	readed = read(file, data, 10);
	printf("Readed: %d \n", readed);
	printf("Data: %s \n", data);
	readed = read(file, data, 40);
	printf("Readed: %d \n", readed);
	printf("Data: %s \n", data);
	printf("Val : %d \n", file); */


	return (EXIT_SUCCESS);
}
