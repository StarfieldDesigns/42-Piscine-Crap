/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 12:57:37 by aholtzma          #+#    #+#             */
/*   Updated: 2019/03/28 12:57:47 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_comb(void)
{
	int nums[3];

	nums[0] = '0';
	while (nums[0] <= '9')
	{
		nums[1] = (nums[0] + 1);
		while (nums[1] <= '9')
		{
			nums[2] = (nums[1] + 1);
			while (nums[2] <= '9')
			{
				ft_putchar(nums[0]);
				ft_putchar(nums[1]);
				ft_putchar(nums[2]);
				if (!(nums[0] == '7' && nums[1] == '8' && nums[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				nums[2]++;
			}
			nums[1]++;
		}
		nums[0]++;
	}
}
