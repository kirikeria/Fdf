/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 18:50:11 by hyshin            #+#    #+#             */
/*   Updated: 2020/08/21 18:50:11 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft/libft.h"
# include "libft/get_next_line.h"
# include <math.h>
# include "mlx.h"
# include <stdlib.h>
# include <fcntl.h>

typedef enum
{
	ISOMETRIC,
	PARALLEL
}	t_projection;

typedef enum
{
	FRUIT,
	TRENDY
}	t_palette;

typedef struct		s_var
{
	int				dx;
	int				sx;
	int				dy;
	int				sy;
	int				err;
	int				e2;
}					t_var;

typedef struct		s_draw
{
	int				dx;
	int				dy;
	int				x;
	int				x2;
	int				y;
	int				y2;
	int				z;
	int				z2;
}					t_draw;

typedef struct		s_fdf
{
	int				**map;
	int				height;
	int				width;
	int				zoom;
	int				map_h;
	int				map_w;
	int				color;
	int				altitude;
	t_projection	projection;
	t_palette		palette;
	int				pos_x;
	int				pos_y;
	void			*mlx;
	void			*win;
}					t_fdf;

void				read_file(char *file, t_fdf *data);
void				map_size(char *file, t_fdf *data);
void				ft_error(char *error);
void				draw(t_fdf *data);
void				print_menu(t_fdf *data);
void				color(t_fdf *data, int x, int y);
void				projection(t_draw *info);

#endif
