#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int ch;

    main_menu:
            system("cls");
            printf("\tWelcome to DR.R.M.L.S college\n\n");
            printf("press '1' for general department\n");
            printf("press '2' for vocational department\n\n");
            printf("press '3' for close program!\n\n");
            scanf("%d",&ch);

            switch(ch)
            {
                case 1:
                    {
                        system("cls");
                        printf("\n\tsorry there are nothing to see!\n");
                        printf("\npress any key to 'exit'");
                        getch();
                        goto main_menu;
                        break;
                    }

                case 2:
                    {
                        voc:
                        system("cls");
                        printf("\n\tWelcome to vocational department\n\n");
                        printf("press '1' for 'BCA'\n");
                        printf("press '2' for 'BBA'\n\n");
                        printf("press '3' for 'return'\n");
                        printf("press '4' for close program!\n\n");
                        scanf("%d",&ch);

                        switch(ch)
                        {
                        case 1:
                            {
                                sem:
                                system("cls");
                                printf("\n\tWelcome to 'BCA'\n\n");
                                printf("press '1' for '1st sem'\n");
                                printf("press '2' for '2nd sem'\n");
                                printf("press '3' for '3rd sem'\n");
                                printf("press '4' for '4th sem'\n");
                                printf("press '5' for '5th sem'\n");
                                printf("press '6' for '6th sem'\n\n");
                                printf("press '7' for 'main menu'\n");
                                printf("press '8' for 'return'\n");
                                printf("press '9' for close program!\n\n");
                                scanf("%d",&ch);

                                switch(ch)
                                {
                                case 1:
                                    {
                                        bca_1:
                                        system("cls");
                                        printf("\n\tWelcome to '1st semester'\n\n");
                                        printf("BCA-101 'Mathematical Foundation'\n");
                                        printf("BCA-102 'Computer Fundamentals'\n");
                                        printf("BCA-103 'Business Communication & Information System'\n");
                                        printf("BCA-104 'C Programming'\n");
                                        printf("BCA-105 'Lab on Dos & Windows'\n");
                                        printf("BCA-106 'Lab on C'\n\n\n");
                                        printf("press '1' for 'main menu'\n");
                                        printf("press '2' for 'return'\n");
                                        printf("press '3' for close program!\n\n");
                                        scanf("%d",&ch);

                                        switch(ch)
                                        {
                                        case 1:
                                            {
                                                goto main_menu;
                                                break;
                                            }
                                        case 2:
                                            {
                                                goto sem;
                                                break;
                                            }
                                        case 3:
                                            {
                                                printf("\n\t---exit---\n");
                                                break;
                                            }
                                        default:
                                            {
                                                printf("\nyou entered wrong choice!\n");
                                                printf("press any key to 're-enter'");
                                                getch();
                                                goto bca_1;
                                                break;
                                            }
                                        }

                                        break;
                                    }
                                case 2:
                                    {
                                        bca_2:
                                        system("cls");
                                        printf("\n\tWelcome to '2nd semester'\n\n");
                                        printf("BCA-201 'Discrete Mathematics'\n");
                                        printf("BCA-202 'Computer Architecture'\n");
                                        printf("BCA-203 'Data Structure through C'\n");
                                        printf("BCA-204 'System Analysis and Design'\n");
                                        printf("BCA-205 'Lab on MS-Office'\n");
                                        printf("BCA-206 'Lab on Data Structure through C'\n\n\n");
                                        printf("press '1' for 'main menu'\n");
                                        printf("press '2' for 'return'\n");
                                        printf("press '3' for close program!\n\n");
                                        scanf("%d",&ch);

                                        switch(ch)
                                        {
                                        case 1:
                                            {
                                                goto main_menu;
                                                break;
                                            }
                                        case 2:
                                            {
                                                goto sem;
                                                break;
                                            }
                                        case 3:
                                            {
                                                printf("\n\t---exit---\n");
                                                break;
                                            }
                                        default:
                                            {
                                                printf("\nyou entered wrong choice!\n");
                                                printf("press any key to 're-enter'");
                                                getch();
                                                goto bca_2;
                                                break;
                                            }
                                        }

                                        break;
                                    }
                                 case 3:
                                    {
                                        bca_3:
                                        system("cls");
                                        printf("\n\tWelcome to '3rd semester'\n\n");
                                        printf("BCA-301 'Fundamentals of Management & Business Accounting'\n");
                                        printf("BCA-302 'Database Management System'\n");
                                        printf("BCA-303 'Object Oriented Programming using C++'\n");
                                        printf("BCA-304 'Numerical Methodology'\n");
                                        printf("BCA-305 'Lab on DBMS(SQL/MS-ACCESS)'\n");
                                        printf("BCA-306 'Lab on C++'\n\n\n");
                                        printf("press '1' for 'main menu'\n");
                                        printf("press '2' for 'return'\n");
                                        printf("press '3' for close program!\n\n");
                                        scanf("%d",&ch);

                                        switch(ch)
                                        {
                                        case 1:
                                            {
                                                goto main_menu;
                                                break;
                                            }
                                        case 2:
                                            {
                                                goto sem;
                                                break;
                                            }
                                        case 3:
                                            {
                                                printf("\n\t---exit---\n");
                                                break;
                                            }
                                        default:
                                            {
                                                printf("\nyou entered wrong choice!\n");
                                                printf("press any key to 're-enter'");
                                                getch();
                                                goto bca_3;
                                                break;
                                            }
                                        }

                                        break;
                                    }
                                 case 4:
                                    {
                                        bca_4:
                                        system("cls");
                                        printf("\n\tWelcome to '4th semester'\n\n");
                                        printf("BCA-401 'Java Programming'\n");
                                        printf("BCA-402 'Computer Graphics & multimedia'\n");
                                        printf("BCA-403 'Operating System & Linux'\n");
                                        printf("BCA-404 'Software Engineering Principles'\n");
                                        printf("BCA-405 'Lab on Java Programming'\n");
                                        printf("BCA-406 'Lab on Computer Graphics & Linux'\n\n\n");
                                        printf("press '1' for 'main menu'\n");
                                        printf("press '2' for 'return'\n");
                                        printf("press '3' for close program!\n\n");
                                        scanf("%d",&ch);

                                        switch(ch)
                                        {
                                        case 1:
                                            {
                                                goto main_menu;
                                                break;
                                            }
                                        case 2:
                                            {
                                                goto sem;
                                                break;
                                            }
                                        case 3:
                                            {
                                                printf("\n\t---exit---\n");
                                                break;
                                            }
                                        default:
                                            {
                                                printf("\nyou entered wrong choice!\n");
                                                printf("press any key to 're-enter'");
                                                getch();
                                                goto bca_4;
                                                break;
                                            }
                                        }

                                        break;
                                    }
                                 case 5:
                                    {
                                        bca_5:
                                        system("cls");
                                        printf("\n\tWelcome to '5th semester'\n\n");
                                        printf("BCA-501 'Relational Database Management System'\n");
                                        printf("BCA-502 'Artificial Intelligence through Python Programming'\n");
                                        printf("BCA-503 'Web Technology(HTML, Java Script, CSS)'\n");
                                        printf("BCA-504 'Computer Network, Security and Cyber Law'\n");
                                        printf("BCA-505 'Lab on Oracle'\n");
                                        printf("BCA-506 'Lab on Python Programming & Web Technology'\n\n\n");
                                        printf("press '1' for 'main menu'\n");
                                        printf("press '2' for 'return'\n");
                                        printf("press '3' for close program!\n\n");
                                        scanf("%d",&ch);

                                        switch(ch)
                                        {
                                        case 1:
                                            {
                                                goto main_menu;
                                                break;
                                            }
                                        case 2:
                                            {
                                                goto sem;
                                                break;
                                            }
                                        case 3:
                                            {
                                                printf("\n\t---exit---\n");
                                                break;
                                            }
                                        default:
                                            {
                                                printf("\nyou entered wrong choice!\n");
                                                printf("press any key to 're-enter'");
                                                getch();
                                                goto bca_5;
                                                break;
                                            }
                                        }

                                        break;
                                    }
                                 case 6:
                                    {
                                        bca_6:
                                        system("cls");
                                        printf("\n\tWelcome to '6th semester'\n\n");
                                        printf("BCA-601 'Project Report'\n");
                                        printf("BCA-602 'Seminar presentation'\n");
                                        printf("BCA-603 'Viva-Voce'\n\n\n");
                                        printf("press '1' for 'main menu'\n");
                                        printf("press '2' for 'return'\n");
                                        printf("press '3' for close program!\n\n");
                                        scanf("%d",&ch);

                                        switch(ch)
                                        {
                                        case 1:
                                            {
                                                goto main_menu;
                                                break;
                                            }
                                        case 2:
                                            {
                                                goto sem;
                                                break;
                                            }
                                        case 3:
                                            {
                                                printf("\n\t---exit---\n");
                                                break;
                                            }
                                        default:
                                            {
                                                printf("\nyou entered wrong choice!\n");
                                                printf("press any key to 're-enter'");
                                                getch();
                                                goto bca_6;
                                                break;
                                            }
                                        }

                                        break;
                                    }
                                 case 7:
                                    {
                                        goto main_menu;
                                        break;
                                    }
                                 case 8:
                                    {
                                        goto voc;
                                        break;
                                    }
                                 case 9:
                                    {
                                        printf("\n\t---exit---\n");
                                        break;
                                    }
                                default:
                                    {
                                        printf("\nyou entered wrong choice!\n");
                                        printf("press any key to 're-enter'");
                                        getch();
                                        goto sem;
                                        break;
                                    }
                                }


                                break;
                            }

                        case 2:
                            {
                                system("cls");
                                printf("\n\tsorry there are nothing to see!\n");
                                printf("\npresss any key to 'exit'");
                                getch();
                                goto voc;
                                break;
                            }
                        case 3:
                            {
                                goto main_menu;
                                break;
                            }
                        case 4:
                            {
                                printf("\n\t---exit---\n");
                                break;
                            }
                        default:
                            {
                                printf("\nyou entered wrong choice!\n");
                                printf("press any key to 're-enter'");
                                getch();
                                goto voc;
                                break;
                            }
                        }
                        break;
                    }


                case 3:
                    {
                        printf("\n\t---exit---\n");
                        break;
                    }
                default:
                    {
                        printf("\nyou entered wrong choice!\n");
                        printf("press any key to 're-enter'");
                        getch();
                        goto main_menu;
                        break;
                    }
            }
}
