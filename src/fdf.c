/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:04:29 by eralonso          #+#    #+#             */
/*   Updated: 2023/02/01 19:59:03 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<fdf.h>

void	ft_print_points(t_design design)
{
	int			i;

	i = -1;
	while (++i < design.width * design.height)
	{
		ft_printf(1, "x == %i y == %i z == %i color == %i\n\n", \
		design.points[i].x, design.points[i].y, design.points[i].z, \
		design.points[i].color);
	}
}

int	main(int ac, char **av)
{
	t_design	design;

	if (ac != 2)
		return (1);
	if (!ft_check_map(av[1], &design))
		return (ft_error(NULL, NULL, 1));
	//ft_print_points(design);
	//if (!ft_print_map(&design))
	//	return (ft_error(NULL, NULL, 1));
	ft_free((char **)&design.points, 2);
	return (0);
}

/*
typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	main(int ac, char **av)
{
	void	*mlx;
	t_data	data;
	void	*mlx_win;
	
	(void) av;
	if (ac != 2)
		return (1);
	mlx = mlx_init();
	printf("mlx:\n%%s == %s\n%%l == %llu\n%%p == %p\n", mlx, *(unsigned long long *)mlx, mlx);
	mlx_win = mlx_new_window(mlx, 1000, 750, av[1]);
	data.img = mlx_new_image(mlx, 1000, 750);
	data.addr = mlx_get_data_addr
		(data.img, &data.bits_per_pixel, &data.line_length, &data.endian);
	int y = -1;
	int	x;
	int	i = 0;
	while (++y <= 100)
	{
		x = -1;
		while (++x <= 100)
		{
			//if (!sqrt(pow(x, 2) - pow (y, 2)))
			//	my_mlx_pixel_put(&data, x + 50, y + 50, 0x0000FFFF);
			//if (x == 50)
			//	my_mlx_pixel_put(&data, x + 50, y + 50, 0x0000FFFF);
			//if (y == 100)
			//	my_mlx_pixel_put(&data, x + 50, y + 50, 0x0000FFFF);
			//if (y >= 50 && (x - y == 0 || x + y == 100))
			//	my_mlx_pixel_put(&data, x + 50, y + 50, 0x0000FFFF);
			//if (x)
			//	my_mlx_pixel_put(&data, x + 50, y + 50, 0x0000FFFF);
			if (x >= 50 - i / 2 && x <= 50 + i / 2)
				my_mlx_pixel_put(&data, x + 200, y + 100, 0x00FFFFFF);
		}
		i++;
			//else if (x +  y == 1)
			//	my_mlx_pixel_put(&data, x + 50, y + 50, 0x0000FFFF);
			//else if (x + y == 0)
			//	my_mlx_pixel_put(&data, x + 50, y + 50, 0x0000FFFF);
			//else if (x + y == 0)
			//	my_mlx_pixel_put(&data, x + 50, y + 50, 0x0000FFFF);
	}
	//my_mlx_pixel_put(&data, 50, 50, 0x0000FFFF);
	mlx_put_image_to_window(mlx, mlx_win, data.img, 0, 0);
	mlx_loop(mlx);
	return (0);
}*/

	//	Cuadradito vacío:
	//	if (x == 100 || y == 100 || x == 0 || y == 0)
	//		my_mlx_pixel_put(&data, x + 50, y + 50, 0x0000FFFF);	
	//	Triangulito:
	//	if (x >= 50 - i / 2 && x <= 50 + i / 2)
	//		my_mlx_pixel_put(&data, x + 200, y + 100, 0x00FFFFFF);
