#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <Structure.h>

void saisie(int *n)
{
    do
    {
        printf("how much directories you want to allocate ? /n ");
        scanf("%d", n);
    } while ((*n < 0) || (*n > 200));
}
bool Isalpha(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool verif(char ch[255])
{
    bool a, b;
    if (Isalpha(ch[255]) == false)
    {
        printf("The first character should be a alphabetic char");
        a = false;
    }
    else
    {
        a = true;
    }

    for (int i = 1; i < strlen(ch) - 1; i++)
    {
        if (Isalpha(ch[i]) && (ch[i] >= '0' && ch[i] <= '9'))
        {
            b = true;
        }
        else
        {
            printf("the name can only contain alphabetic and numeric characters ");
            b = false;
        }
    }
    return a && b;
}
bool Search(char ch, rep tab, int rang)
{
    bool a, b;
    int j, i = 0;
    if (rang == 0)
    {
        a = true;
    }
    else
    {
        while (i < rang)
        {
            if (tab[i]->name == ch)
            {
                printf("this name exist in the tab");
                a = false;
                break;
            }
            else
            {
                a = true;
            }
            i++;
        }
        return a;
    }
}
void saisie_tab(rep tab, int n)
{
    int i;
    for (i = 0; i < n + n; i++)
    {
        printf("tab[%d]=", i);
        scanf("%s", tab->name);
    }
    while (!verif(tab->name) && !search(tab->name, tab, i))
        ;
}