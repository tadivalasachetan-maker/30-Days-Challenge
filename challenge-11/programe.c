#include <stdio.h>

int usage[5][7], target[5];
char name[5][20] = {"Academic", "Hostel", "Library",
                     "Cafeteria", "Sports"};

void waterinput()
{
    int i, j;

    for(i = 0; i < 5; i++)
    {
        printf("\n%s\n", name[i]);

        do {
            printf("Enter target: ");
            scanf("%d", &target[i]);
        } while(target[i] < 100 || target[i] > 50000);

        for(j = 0; j < 7; j++)
        {
            do {
                printf("Day %d usage: ", j+1);
                scanf("%d", &usage[i][j]);
            } while(usage[i][j] < 0 || usage[i][j] > 50000);
        }
    }
}

void Waterreport()
{
    int i, j, sum, count, unusual;
    int max = 0, zone = 0, total = 0;
    int *ptr;

    for(i = 0; i < 5; i++)
    {
        sum = 0;
        count = 0;
        unusual = 0;

        for(j = 0; j < 7; j++)
        {
            ptr = &usage[i][j];
            sum = sum + *ptr;

            if(*ptr > target[i])
                count++;

            if(*ptr > target[i] * 3 / 2)
                unusual++;
        }

        printf("\n%s\n", name[i]);
        printf("Total: %d\n", sum);
        printf("Average: %.2f\n", sum/7.0);
        printf("Exceeded days: %d\n", count);
        printf("Unusual days: %d\n", unusual);

        total = total + sum;

        if(sum > max)
        {
            max = sum;
            zone = i;
        }
    }

    printf("\nCampus total: %d\n", total);
    printf("highest usage in: %s\n", name[zone]);
}

int main()
{
    int ch;

    do {
        printf("\n1.Input  2.Report  3.Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        if(ch == 1)
            input();
        else if(ch == 2)
            report();
        else if(ch == 3)
            printf("Exit\n");
        else
            printf("Invalid choice\n");

    } while(ch != 3);

    return 0;
}
