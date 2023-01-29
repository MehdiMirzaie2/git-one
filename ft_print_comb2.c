#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print_comb2()
{
    int first_numbers[2] = {0, 0};
    int second_numbers[2] = {0, 1};

    while (first_numbers[0] <= 9)
    {
        ft_putchar(first_numbers[0] + 48);
        ft_putchar(first_numbers[1] + 48);
        ft_putchar(' ');
        ft_putchar(second_numbers[0] + 48);
        ft_putchar(second_numbers[1] + 48);
        if (!(first_numbers[0] == 9 && second_numbers[0] == 9))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        second_numbers[1]++;
        if (second_numbers[1] == 10)
        {
            second_numbers[1]--;
            second_numbers[0]++;
        }
        if (second_numbers[0] == 10)
        {   
            second_numbers[0]--;
            first_numbers[1]++;
        }
        if (first_numbers[1] == 10)
        {
            first_numbers[1]--;
            first_numbers[0]++;
        }
    }
}

// void ft_print_comb2()
// {
//     int first_numbers[2] = {48, 48};
//     int second_numbers[2] = {48, 48};

//     while (first_numbers[0] <= 57)
//     {
//         ft_putchar(first_numbers[0]);
//         ft_putchar(first_numbers[1]);
//         ft_putchar(' ');
//         ft_putchar(second_numbers[0]);
//         ft_putchar(second_numbers[1]);
//         if (first_numbers[0] != 57)
//         {
//             ft_putchar(',');
//         }
//         ft_putchar(' ');
//         second_numbers[1]++;
//     }
//     if (second_numbers[1]++ >= 58)
//         second_numbers[0]++;
//     else if (second_numbers[0] == 57)
//         first_numbers[1]++;
//     else if (first_numbers[1] == 57)
//         first_numbers[0]++;

//   }

int main()
{
    ft_print_comb2();
    return (0);
}