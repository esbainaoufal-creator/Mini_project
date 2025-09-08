#include <stdio.h>
int main()
{
    float total = 0, moyenne;
    float max, min;
    int n;
    printf("how many notes you need? \n");
    scanf("%d", &n);
    float notes[n];
    char mention;
    int i;

    printf("insert notes of yours : \n");
    for (i = 0; i < n; i++)
    {

        printf("Note %d : ", i + 1);
        scanf("%f", &notes[i]);

        total += notes[i];

        if (i == 0)
            max = min = notes[i];

        if (notes[i] > max)
            max = notes[i];
        if (notes[i] < min)
            min = notes[i];
    }
    moyenne = total / n;

    if (moyenne >= 90)
    {
        mention = 'A';
    }
    else if (moyenne >= 80)
    {
        mention = 'B';
    }
    else if (moyenne >= 70)
    {
        mention = 'C';
    }
    else if (moyenne >= 60)
    {
        mention = 'D';
    }
    else
    {
        mention = 'F';
    }

    printf("\n =====  Final repport ===== \n");
    printf("Your total is : %.2f\n", total);
    printf("Your average is : %.2f \n", moyenne);
    printf("Your highest score is : %.2f \n", max);
    printf("Your lowest score is : %.2f  \n ", min);
    printf("Your mention is : %c \n", mention);
    if (moyenne >= 50)
    {
        printf("Congratulations! You passed your exams succesfully \n");
    }
    else
        printf("You failed. Hard luck next time! \n");

    return 0;
}
