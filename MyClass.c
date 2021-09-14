#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int a, b, c, d, count = 1, x, y, z, n, i, e;

    do
    {
        srand(time(NULL));
        int p = (rand() % 9) + 1;
        int q = (rand() % 9) + 1;
        int r = (rand() % 9) + 1;
        int s = (rand() % 9) + 1;
        int counter = 10;

        printf("Welcome to MasterMind Game\n");
        printf("%d\t%d\t%d\t%d\n", p, q, r, s);
        if (q == p || q == r || q == s)
        { q = rand() % 9 + 1; }
        if (r == p || r == q || r == s)
        { r = rand() % 9 + 1; }
        if (s == p || s == q || s == r)
        { s = rand() % 9 + 1; }
        do
        {
            int correctnumberandplace = 0, correctnumber = 0;


            printf("You have %d remaing chances\n", counter);
            printf("Guess 4 digit number\n");
            scanf("%d", &n);

            d = n % 10;
            x = n / 10;
            c = x % 10;
            y = x / 10;
            b = y % 10;
            z = y / 10;
            a = z % 10;
            printf("%d%d%d%d", a, b, c, d);


            if (a == p)
            {
                correctnumberandplace++;

            }
            else if (a == q)
            {
                correctnumber++;

            }
            else if (a == r)
            {
                correctnumber++;

            }
            else if (a == s)
            {
                correctnumber++;
            }



            if (b == q)
            {
                correctnumberandplace++;
            }
            else if (b == p)
            {
                correctnumber++;

            }
            else if (b == r)
            {
                correctnumber++;

            }
            else if (b == s)
            {
                correctnumber++;

            }


            if (c == r)
            {
                correctnumberandplace++;
            }
            else if (c == q)
            {
                correctnumber++;

            }
            else if (c == p)
            {
                correctnumber++;

            }
            else if (c == s)
            {
                correctnumber++;

            }



            if (d == s)
            {
                correctnumberandplace++;
            }
            else if (d == q)
            {
                correctnumber++;

            }
            else if (d == r)
            {
                correctnumber++;

            }
            else if (d == p)
            {
                correctnumber++;

            }
            for (e = 1; e <= 3; e++)
            {
                if (p == a && (p == b || p == c || p == d))
                { correctnumber--; }

                if (q == b && (q == a || q == c || q == d))
                { correctnumber--; }

                if (r == c && (r == b || r == a || r == d))
                { correctnumber--; }

                if (s == d && (s == b || s == c || s == a))
                { correctnumber--; }
            }

            counter--;
            count++;
            printf("Correct number and place=%d\tcorrect number=%d\n\n",
                correctnumberandplace, correctnumber);

            if (a == p && b == q && c == r && d == s)
            {
                printf("Yeah!,you won\n");
                break;
            }
            if (count > 10)
            {
                printf("Sorry,you loose\n");
            }

        } while (count <= 10);
        printf("Press 1 to play again and press 0 to exit");
        scanf("%d", &i);
    } while (i == 1);


}