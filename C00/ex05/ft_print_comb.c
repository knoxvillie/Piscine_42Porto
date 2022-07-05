#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
void ft_commas(void);


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}


void ft_print_comb(void){
    int a, b, c;

    a = '0';

    while (a <= '7'){
        b = a+1;

        while (b <= '8'){
            c = b+1;

            while (c <= '9'){
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);

                if (a != '7'){
                    ft_commas();
                }
                c++;
            }
            b++;
        }
        a++;
    }

}

int main(void){
    ft_print_comb();
    return 0;
}