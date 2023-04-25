#include "mlx.h"
#include "mlx_int.h"
#include <stdio.h>

int main(void)
{
	Display	*ptr;
	void	*ptrr;

	printf("TEST X11 : ");
	ptr = XOpenDisplay(NULL);
	if (!ptr)
		printf("ERROR\n");
	printf("TEST MLX : ");
	ptrr = mlx_init();
	if (!ptrr)
		printf ("ERROR\n");
	return (0);
}
