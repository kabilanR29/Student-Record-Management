#include"header.h"

void stud_Exit()
{
        char op;
        printf("S/s : Save and Exit\n");
        printf("E/e : Exit Without Saving\n");
        printf("Enter your choice : ");
        scanf("%c",&op);

        switch(op)
        {
                case 'S':
                case 's':stud_save();
                         printf("Data Saved successfully and Exit\n");
                         break;

                case 'E':
                case 'e':
                         printf("Exit Without Saving Data\n");
                         break;
                default:printf("INVALID OPTION!!\n");
        }
}
