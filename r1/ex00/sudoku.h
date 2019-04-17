/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:17:20 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/06 14:17:29 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
#define SUDOKU_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void ft_putstr(char *str);
void ft_putchar(int a);
void fill_table(char **argv, int table[9][9]);
void print_table(int table[9][9]);
int	ft_strlen(char *str);
int	line_is_valid(char *str);
int	input_is_valid(int argc, char **argv);
int find_empty_spaces(int table[9][9], int *i, int *j);
int	used_in_row(int table[9][9], int a, int num);
int used_in_col(int table[9][9], int b, int num);
int used_in_box(int table[9][9], int a, int b, int num);
int is_safe(int table[9][9], int a, int b, int num);
int solve_table(int table[9][9]);

#endif
