#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

// int fortune_jar(int n);

int main()
{
    char name[9];
    char close_keys;


    printf("What is your name?\n");
    fgets(name, sizeof(name), stdin);




    printf("Hey %sType in a number from 0-6\n", name);

    int fortune_num;
    fortune_num = getchar();
    switch (fortune_num)
    {
    case '0':
        printf("Your smile radiates sunlight. Smile as often as you can.\n");
        break;
    
    case '1':
        printf("Great excitement and adventure awaits you.\n");
        break;
    
    case '2':
        printf("You’re beautiful in body, mind and soul.\n");
        break;
    
    case '3':
        printf("Escape the routine of the mundane today.\n");
        break;
    
    case '4':
        printf("Nothing is promised, except the present.\n");
        break;

    case '5':
        printf("Nothing is promised, except the present.\n");
        break;

    case '6':
        printf("Turn that frown upside down.\n");
        break;
    
    default:
        printf("choose a number between 0-6");
        break;
    }
    
    sleep(10);

    
    
    
  


    return 0;
}



// int fortune_jar(int n)
// {

//     if (n == 0)
//        printf("Your smile radiates sunlight. Smile as often as you can.\n");
            
//     else if (n == 1)
//         printf("Great excitement and adventure awaits you.\n");

//     else if (n == 2)
//         printf("You’re beautiful in body, mind and soul\n");

//     else if (n == 3)
//         printf("Escape the routine of the mundane today.\n");  
    
//     else if (n == 4)
//         printf("Nothing is promised, except the present.\n");

//     else if (n == 5)
//         printf("Turn that frown upside down.\n");

//     else if (n == 6)
//         printf("Open your heart.\n");


//     return (n);
    
// }
