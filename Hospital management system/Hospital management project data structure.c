#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main()
{
    int m;
    printf("\n\n\n\n\n\n\t\t\t********Hospital management system*********\n\n\n\n\n\n");
    printf("\t\t\tpress 1 to continue:");
    scanf("%d",&m);
    if(m==1)
    {
        system("cls");
        menu();
    }
    else
    {
        system("cls");
        menu();
    }


}




void menu()
{
    int h;
    printf("\n\n\n\t\t\t********MAIN MENU********");
    printf("\n\t\t\t1.patients information");
    printf("\n\t\t\t2.Doctors schedule");
    printf("\n\t\t\t3.Nurses schedule");
    printf("\n\t\t\t4.Doctors private appointment");
    printf("\n\t\t\tselect which which option you want to choose:");
    printf("\n\t\t\tExample:if you want to choose  patient information press 1: ");
    scanf("%d",&h);
    if(h==1)
    {
        system("cls");
        pinformation();
    }
       else if(h==2)
    {
        system("cls");
        dschedule();
    }
       else if(h==3)
    {
        system("cls");
        nschedule();
    }
        else if(h==4)
    {
        system("cls");
        appointment();
    }
    else
    {
        printf("\n\n\t\t\tnot valid !!! try again !!!");
        menu();
    }


}




//**********************************patient information**********************************************************************





typedef struct Node2{
char pname[50];
int ward;
int bed;
struct Node2 *next;
}node2;



int pinformation()
{
    node2 *head=NULL;
node2 *temp=NULL;

    int choose;
    printf("\n\n\n\t\t\t1.Insert patient information");
    printf("\n\t\t\t2.search patient information");
    printf("\n\t\t\t3.Remove patient information");
    printf("\n\t\t\tselect which which option you want to choose:");
    printf("\n\t\t\tExample:if you want to choose Insert patient information press 1: ");
    scanf("%d",&choose);

    //insert patient list
    if(choose==1)
        {
             int i,n;
    printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        node2 *newnode;
            newnode=(node2*)malloc(sizeof(node2));
            printf("\n\n\n\t\t\tEnter the patient name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the patient ward number:  ");
            scanf("%d",&newnode->ward);
            printf("\t\t\tEnter the patient bed number:  ");
            scanf("%d",&newnode->bed);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

    }
     temp=head;
            while(temp!=NULL)
            {
                printf("\n\n\t\t\tDoctor name:%s",temp->pname);
                printf("\n\t\t\t Doctor schedule time:%d",temp->ward);
                printf("\n\t\t\tpatient bed number:%d",temp->bed);
                temp=temp->next;
            }
    printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        pinformation();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }




    }
    //search patent list




      else if(choose==2)
    {
                    int i,n;
    printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        node2 *newnode;
            newnode=(node2*)malloc(sizeof(node2));
            printf("\n\n\n\t\t\tEnter the patient name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the patient ward number:  ");
            scanf("%d",&newnode->ward);
            printf("\t\t\tEnter the patient bed number:  ");
            scanf("%d",&newnode->bed);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

    }
    char x[25];
    printf("\n\n\n\t\t\tEnter Name you want to search:");
    scanf("%s",x);
    temp=head;

    while(temp!= NULL && strcmp(temp->pname,x)!= 0)
    {
        temp=temp->next;
    }

    printf("\n\n\n\t\t\t*****searched data*****");
    if(temp==NULL)
    {
        printf("Name could not found\n\n");
    }

    else
    {
        printf("\n\n\n\t\t\tpatient name:%s",temp->pname);
        printf("\n\t\t\tpatients ward number:%d",temp->ward);
        printf("\n\t\t\tpatient bed number:%d",temp->bed);
    }
          printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        pinformation();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }


    }


    //remove list
       else if(choose==3)
    {

             int i,n;
    printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        node2 *newnode;
            newnode=(node2*)malloc(sizeof(node2));
            printf("\n\n\n\t\t\tEnter the patient name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the patient ward number:  ");
            scanf("%d",&newnode->ward);
            printf("\t\t\tEnter the patient bed number:  ");
            scanf("%d",&newnode->bed);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

    }


    char x[25];
    printf("\n\n\n\t\t\tEnter Name you want to remove:");
    scanf("%s",x);
    temp=head;
    if(strcmp(head->pname,x)==0)
    {
        head=head->next;
        free(temp);
    }
    else
    {
        node2*pre=NULL;
          while(temp!= NULL && strcmp(temp->pname,x)!= 0)
        {
            pre=temp;
            temp=temp->next;
        }
    pre->next=temp->next;
    free(temp);
    }



    //display
     temp=head;
     printf("\n\n\n\t\t\t**********Final data:********* ");
            while(temp!=NULL)
            {
                printf("\n\t\t\tpatient name:%s",temp->pname);
                printf("\n\t\t\tpatients ward number:%d",temp->ward);
                printf("\n\t\t\tpatient bed number:%d",temp->bed);
                temp=temp->next;
            }
    printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        pinformation();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }


    }
}




//******************************************doctors schedule*****************************************************************








typedef struct Node1{
char pname[50];
char time[10];
struct Node1 *next;
}node1;




int dschedule()
{
    node1 *head=NULL;
    node1 *temp=NULL;



    int choose;
    printf("\n\n\n\t\t\t1.Insert doctor schedule information");
    printf("\n\t\t\t2.search doctor schedule information");
    printf("\n\t\t\t3.change doctor schedule information");
    printf("\n\t\t\tselect which which option you want to choose:");
    printf("\n\t\t\tExample:if you want to choose Insert doctor schedule information press 1: ");
    scanf("%d",&choose);

    //insert patient list
    if(choose==1)
        {
             int i,n;
    printf("\n\n\n\t\t\tEnter how many doctor data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        node1 *newnode;
            newnode=(node1*)malloc(sizeof(node1));
            printf("\n\n\n\t\t\tEnter the doctor name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the doctor schedule time:  ");
            scanf("%s",newnode->time);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

    }
     temp=head;
            while(temp!=NULL)
            {
                printf("\n\n\t\t\tDoctor name:%s",temp->pname);
                printf("\n\t\t\tdoctor schedule time:%s",temp->time);
                temp=temp->next;
            }
        printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        dschedule();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }




    }
    //search patent list




      else if(choose==2)
    {
                    int i,n;
    printf("\n\n\n\t\t\tEnter how many doctor data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                node1 *newnode;
            newnode=(node1*)malloc(sizeof(node1));
            printf("\n\n\n\t\t\tEnter the doctor name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the doctor schedule time:  ");
            scanf("%s",newnode->time);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

    }
    char x[25];
    printf("\n\n\n\t\t\tEnter Name you want to search:");
    scanf("%s",x);
    temp=head;

    while(temp!= NULL && strcmp(temp->pname,x)!= 0)
    {
        temp=temp->next;
    }


    printf("\n\n\n\t\t\t*****searched data********");
    if(temp==NULL)
    {
        printf("Name could not found\n\n");
    }

    else
    {
        printf("\n\t\t\tDoctor name:%s",temp->pname);
        printf("\n\t\t\tdoctor schedule time:%s",temp->time);
    }
       printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        dschedule();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }


    }


    //remove list
       else if(choose==3)
    {

             int i,n;
    printf("\n\n\n\t\t\tEnter how many doctors data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
               node1 *newnode;
            newnode=(node1*)malloc(sizeof(node1));
            printf("\n\n\n\t\t\tEnter the doctor name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the doctor schedule time:  ");
            scanf("%s",newnode->time);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

    }


  char x[25];
    printf("\n\n\n\t\t\tEnter Name you want to remove:");
    scanf("%s",x);
    temp=head;
    if(strcmp(head->pname,x)==0)
    {
        char ctime[10];
        printf("\n\n\n\t\t\tEnter which schedule you want: ");
        scanf("%s",ctime);
        strcpy(head->time,ctime);
    }
    else
    {
        char ctime[20];
        printf("\n\n\n\t\t\tEnter which schedule you want: ");
        scanf("%s",ctime);
          while(temp!= NULL && strcmp(temp->pname,x)!= 0)
        {
            temp=temp->next;
        }
    strcpy(head->time,ctime);
    }
    }



    //display
     temp=head;
     printf("\n\n\n\t\t\t**********Final data:********* ");
            while(temp!=NULL)
            {
                printf("\n\t\t\tDoctor name:%s",temp->pname);
                printf("\n\t\t\tdoctor schedule time:%s",temp->time);
                temp=temp->next;
            }
  printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        dschedule();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }

    }






//*************************************nurse schedule*****************************************************************





typedef struct Node3{
char pname[50];
char time[10];
struct Node3 *next;
}node3;



void nschedule()
{
    node3 *head=NULL;
    node3 *temp=NULL;


    int choose;
    printf("\n\n\n\t\t\t1.Insert Nurse schedule information");
    printf("\n\t\t\t2.search nurse schedule information");
    printf("\n\t\t\t3.change nurse schedule information");
    printf("\n\t\t\tselect which which option you want to choose:");
    printf("\n\t\t\tExample:if you want to choose Insert nurse schedule information press 1: ");
    scanf("%d",&choose);

    //insert patient list
    if(choose==1)
        {
             int i,n;
    printf("\n\n\n\t\t\tEnter how many nurse data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        node3 *newnode;
            newnode=(node3*)malloc(sizeof(node3));
            printf("\n\n\n\t\t\tEnter the nurse name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the nurse schedule time:  ");
            scanf("%s",newnode->time);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

    }
     temp=head;
            while(temp!=NULL)
            {
                printf("\n\n\t\t\tNurse name:%s",temp->pname);
                printf("\n\t\t\tnurse schedule time:%s",temp->time);
                temp=temp->next;
            }
    printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        nschedule();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }



    }
    //search patent list




      else if(choose==2)
    {
                    int i,n;
    printf("\n\n\n\t\t\tEnter how many nurse data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                node3 *newnode;
            newnode=(node3*)malloc(sizeof(node3));
            printf("\n\n\n\t\t\tEnter the nurse name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the nurse schedule time:  ");
            scanf("%s",newnode->time);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

    }
    char x[25];
    printf("\n\n\n\t\t\tEnter Name you want to search:");
    scanf("%s",x);
    temp=head;

    while(temp!= NULL && strcmp(temp->pname,x)!= 0)
    {
        temp=temp->next;
    }


    printf("\n\n\n\t\t\t*****searched data********");
    if(temp==NULL)
    {
        printf("Name could not found\n\n");
    }

    else
    {
        printf("\n\t\t\tnurse name:%s",temp->pname);
        printf("\n\t\t\tnurse schedule time:%s",temp->time);
    }
         printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        nschedule();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }
    }


    //remove list
       else if(choose==3)
    {

             int i,n;
    printf("\n\n\n\t\t\tEnter how many nurse data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
               node3 *newnode;
            newnode=(node3*)malloc(sizeof(node3));
            printf("\n\n\n\t\t\tEnter the nurse name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the nurse schedule time:  ");
            scanf("%s",newnode->time);
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

    }


  char x[25];
    printf("\n\n\n\t\t\tEnter Name you want to remove:");
    scanf("%s",x);
    temp=head;
    if(strcmp(head->pname,x)==0)
    {
        char ctime[10];
        printf("\n\n\n\t\t\tEnter which schedule you want: ");
        scanf("%s",ctime);
        strcpy(head->time,ctime);
    }
    else
    {
        char ctime[20];
        printf("\n\n\n\t\t\tEnter which schedule you want: ");
        scanf("%s",ctime);
          while(temp!= NULL && strcmp(temp->pname,x)!= 0)
        {
            temp=temp->next;
        }
    strcpy(head->time,ctime);
    }
    }



    //display
     temp=head;
     printf("\n\n\n\t\t\t**********Final data:********* ");
            while(temp!=NULL)
            {
                printf("\n\t\t\tnurse name:%s",temp->pname);
                printf("\n\t\t\tnurse schedule time:%s",temp->time);
                temp=temp->next;
            }
     printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        nschedule();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }
    }






//*********************************doctors private appointment*********************************************************






typedef struct Node4{
char pname[50];
int age;
int mobile;
char date[20];
char time[10];
struct Node4 *next;
}node4;








int appointment()
{
    node4 *head=NULL;
    node4 *temp=NULL;


    int doctor;
    printf("\n\n\t\t\t1.*****Anisul haque******");
    printf("\n\t\t\t\tMedicine specialist");
    printf("\n\t\t\t\tMBBS,FCPS,M.D");

    printf("\n\n\t\t\t2.*****Dr.Fazlay Rabbi******");
    printf("\n\t\t\t\tNeurologist");
    printf("\n\t\t\t\tMBBS,FCPS,M.D");

    printf("\n\n\t\t\t3.*****Dr. Nirjhor saha******");
    printf("\n\t\t\t\tKidney specialist");
    printf("\n\t\t\t\tMBBS,FCPS,M.D");

    printf("\n\t\t\tExample:if you want to choose anisul haque press 1");
    printf("\n\t\t\twhich option you want to choose:");
    scanf("%d",&doctor);
    if(doctor==1)
    {
        system("cls");
     main1();
    }
    else if(doctor==2)
    {
        system("cls");
        main2();
    }
    else if(doctor==3)
    {
        system("cls");
        main3();
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\t not valid!!!! try again !!!!!!");
        menu();
    }



}

void main1()
{

        node4 *head=NULL;
    node4 *temp=NULL;


    int choose;
    printf("\n\n\t\t\t*****Anisul haque******");
    printf("\n\t\t\t\tMedicine specialist");
    printf("\n\t\t\t\tMBBS,FCPS,M.D");

    printf("\n\n\n\t\t\t1.Insert patient appointment");
    printf("\n\t\t\t2.search patient appointment");
    printf("\n\t\t\t3.Remove patient appointment");
    printf("\n\t\t\tselect which which option you want to choose:");
    printf("\n\t\t\tExample:if you want to choose Insert patient appointment press 1: ");
    scanf("%d",&choose);

    //insert patient list
    if(choose==1)
    {
             int i,n;
    printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            node4 *newnode;
            newnode=(node4*)malloc(sizeof(node4));
            printf("\n\n\n\t\t\tEnter the patient name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the patient Age:  ");
            scanf("%d",&newnode->age);
            printf("\t\t\tEnter the patient phone number:  ");
            scanf("%d",&newnode->mobile);
            printf("\t\t\tEnter the patients appointment date:  ");
            scanf("%s",newnode->date);
            printf("\t\t\tEnter the patients appointment time:  ");
            scanf("%s",newnode->time);

            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

        }
     temp=head;
            while(temp!=NULL)
            {
                printf("\n\n\t\t\tpatient name:%s",temp->pname);
                printf("\n\t\t\t patient age:%d",temp->age);
                printf("\n\t\t\tpatient phone number:%d",temp->mobile);
                printf("\n\t\t\t patients appointment date:%d",temp->date);
                printf("\n\t\t\tpatients appointment time:%d",temp->time);
                temp=temp->next;
            }
               printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        appointment();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }



        }
    //search patent list




      else if(choose==2)
        {
                                int i,n;
                printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
        {
                   int i,n;
                printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                        {
                                node4 *newnode;
                                newnode=(node4*)malloc(sizeof(node4));
                                printf("\n\n\n\t\t\tEnter the patient name:  ");
                                scanf("%s",newnode->pname);
                                printf("\t\t\tEnter the patient Age:  ");
                                scanf("%d",&newnode->age);
                                printf("\t\t\tEnter the patient phone number:  ");
                                scanf("%d",&newnode->mobile);
                                printf("\t\t\tEnter the patients appointment date:  ");
                                scanf("%s",newnode->date);
                                printf("\t\t\tEnter the patients appointment time:  ");
                                scanf("%s",newnode->time);

                                newnode->next=NULL;
                                if(head==NULL)
                                {
                                    head=newnode;
                                }
                                else
                                {
                                    temp=head;
                                    while(temp->next!=NULL)
                                    {
                                        temp=temp->next;
                                    }
                                    temp->next=newnode;
                                }


                        }
            char x[25];
            printf("\n\n\n\t\t\tEnter Name you want to search:");
            scanf("%s",x);
            temp=head;

            while(temp!= NULL && strcmp(temp->pname,x)!= 0)
            {
                temp=temp->next;
            }

            printf("\n\n\n\t\t\t*****searched data*****");
            if(temp==NULL)
            {
                printf("Name could not found\n\n");
            }

            else
            {
              printf("\t\t\tpatient name:%s",temp->pname);
                        printf("\n\t\t\t patient age:%d",temp->age);
                        printf("\n\t\t\tpatient phone number:%d",temp->mobile);
                        printf("\n\t\t\t patients appointment date:%d",temp->date);
                        printf("\n\t\t\tpatients appointment time:%d",temp->time);
            }
                printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        appointment();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }
        }


        }

    //remove list
       else if(choose==3)
        {

                     int i,n;
            printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
            scanf("%d",&n);
            for(i=0;i<n;i++)
                {
                    node4 *newnode;
                        newnode=(node4*)malloc(sizeof(node4));
                        printf("\n\n\n\t\t\tEnter the patient name:  ");
                        scanf("%s",newnode->pname);
                        printf("\t\t\tEnter the patient Age:  ");
                        scanf("%d",&newnode->age);
                        printf("\t\t\tEnter the patient phone number:  ");
                        scanf("%d",&newnode->mobile);
                        printf("\t\t\tEnter the patients appointment date:  ");
                        scanf("%s",newnode->date);
                        printf("\t\t\tEnter the patients appointment time:  ");
                        scanf("%s",newnode->time);

                        newnode->next=NULL;
                        if(head==NULL)
                        {
                            head=newnode;
                        }
                        else
                        {
                            temp=head;
                            while(temp->next!=NULL)
                            {
                                temp=temp->next;
                            }
                            temp->next=newnode;
                        }

                }


                char x[25];
                printf("\n\n\n\t\t\tEnter Name you want to cancel appointment :");
                scanf("%s",x);
                temp=head;
                if(strcmp(head->pname,x)==0)
                {
                    head=head->next;
                    free(temp);
                }
                else
                {
                    node4*pre=NULL;
                      while(temp!= NULL && strcmp(temp->pname,x)!= 0)
                    {
                        pre=temp;
                        temp=temp->next;
                    }
                pre->next=temp->next;
                free(temp);
                }



    //display
            printf("\n\n\n\t\t\t*******Final appointments***********");

           temp=head;
                while(temp!=NULL)
                    {
                    printf("\n\t\t\tpatient name:%s",temp->pname);
                    printf("\n\t\t\t patient age:%d",temp->age);
                    printf("\n\t\t\tpatient phone number:%d",temp->mobile);
                    printf("\n\t\t\t patients appointment date:%d",temp->date);
                    printf("\n\t\t\tpatients appointment time:%d",temp->time);
                    temp=temp->next;
                    }
                printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        appointment();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }
            }


}



//printf("****************************************************************************************************************");




void main2()
{
        node4 *head=NULL;
    node4 *temp=NULL;
    int choose;
    printf("\n\n\t\t\t*****Dr.Fazlay Rabbi******");
    printf("\n\t\t\t\tNeurologist");
    printf("\n\t\t\t\tMBBS,FCPS,M.D");

    printf("\n\n\n\t\t\t1.Insert patient appointment");
    printf("\n\t\t\t2.search patient appointment");
    printf("\n\t\t\t3.Remove patient appointment");
    printf("\n\t\t\tselect which which option you want to choose:");
    printf("\n\t\t\tExample:if you want to choose Insert patient appointment press 1: ");
    scanf("%d",&choose);

    //insert patient list
    if(choose==1)
    {
             int i,n;
    printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            node4 *newnode;
            newnode=(node4*)malloc(sizeof(node4));
            printf("\n\n\n\t\t\tEnter the patient name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the patient Age:  ");
            scanf("%d",&newnode->age);
            printf("\t\t\tEnter the patient phone number:  ");
            scanf("%d",&newnode->mobile);
            printf("\t\t\tEnter the patients appointment date:  ");
            scanf("%s",newnode->date);
            printf("\t\t\tEnter the patients appointment time:  ");
            scanf("%s",newnode->time);

            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

        }
     temp=head;
            while(temp!=NULL)
            {
                printf("\n\n\t\t\tpatient name:%s",temp->pname);
                printf("\n\t\t\t patient age:%d",temp->age);
                printf("\n\t\t\tpatient phone number:%d",temp->mobile);
                printf("\n\t\t\t patients appointment date:%d",temp->date);
                printf("\n\t\t\tpatients appointment time:%d",temp->time);
                temp=temp->next;
            }
                printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        appointment();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }



        }
    //search patent list




      else if(choose==2)
        {
                                int i,n;
                printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
        {
                   int i,n;
                printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                        {
                                node4 *newnode;
                                newnode=(node4*)malloc(sizeof(node4));
                                printf("\n\n\n\t\t\tEnter the patient name:  ");
                                scanf("%s",newnode->pname);
                                printf("\t\t\tEnter the patient Age:  ");
                                scanf("%d",&newnode->age);
                                printf("\t\t\tEnter the patient phone number:  ");
                                scanf("%d",&newnode->mobile);
                                printf("\t\t\tEnter the patients appointment date:  ");
                                scanf("%s",newnode->date);
                                printf("\t\t\tEnter the patients appointment time:  ");
                                scanf("%s",newnode->time);

                                newnode->next=NULL;
                                if(head==NULL)
                                {
                                    head=newnode;
                                }
                                else
                                {
                                    temp=head;
                                    while(temp->next!=NULL)
                                    {
                                        temp=temp->next;
                                    }
                                    temp->next=newnode;
                                }


                        }
            char x[25];
            printf("\n\n\n\t\t\tEnter Name you want to search:");
            scanf("%s",x);
            temp=head;

            while(temp!= NULL && strcmp(temp->pname,x)!= 0)
            {
                temp=temp->next;
            }

            printf("\n\n\n\t\t\t*****searched data*****");
            if(temp==NULL)
            {
                printf("Name could not found\n\n");
            }

            else
            {
              printf("\t\t\tpatient name:%s",temp->pname);
                        printf("\n\t\t\t patient age:%d",temp->age);
                        printf("\n\t\t\tpatient phone number:%d",temp->mobile);
                        printf("\n\t\t\t patients appointment date:%d",temp->date);
                        printf("\n\t\t\tpatients appointment time:%d",temp->time);
            }
             printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        appointment();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }
        }


        }

    //remove list
       else if(choose==3)
        {

                     int i,n;
            printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
            scanf("%d",&n);
            for(i=0;i<n;i++)
                {
                    node4 *newnode;
                        newnode=(node4*)malloc(sizeof(node4));
                        printf("\n\n\n\t\t\tEnter the patient name:  ");
                        scanf("%s",newnode->pname);
                        printf("\t\t\tEnter the patient Age:  ");
                        scanf("%d",&newnode->age);
                        printf("\t\t\tEnter the patient phone number:  ");
                        scanf("%d",&newnode->mobile);
                        printf("\t\t\tEnter the patients appointment date:  ");
                        scanf("%s",newnode->date);
                        printf("\t\t\tEnter the patients appointment time:  ");
                        scanf("%s",newnode->time);

                        newnode->next=NULL;
                        if(head==NULL)
                        {
                            head=newnode;
                        }
                        else
                        {
                            temp=head;
                            while(temp->next!=NULL)
                            {
                                temp=temp->next;
                            }
                            temp->next=newnode;
                        }

                }


                char x[25];
                printf("\n\n\n\t\t\tEnter Name you want to cancel appointment :");
                scanf("%s",x);
                temp=head;
                if(strcmp(head->pname,x)==0)
                {
                    head=head->next;
                    free(temp);
                }
                else
                {
                    node4*pre=NULL;
                      while(temp!= NULL && strcmp(temp->pname,x)!= 0)
                    {
                        pre=temp;
                        temp=temp->next;
                    }
                pre->next=temp->next;
                free(temp);
                }



    //display
            printf("\n\n\n\t\t\t*******Final appointments***********");

           temp=head;
                while(temp!=NULL)
                    {
                    printf("\n\t\t\tpatient name:%s",temp->pname);
                    printf("\n\t\t\t patient age:%d",temp->age);
                    printf("\n\t\t\tpatient phone number:%d",temp->mobile);
                    printf("\n\t\t\t patients appointment date:%d",temp->date);
                    printf("\n\t\t\tpatients appointment time:%d",temp->time);
                    temp=temp->next;
                    }
                printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        appointment();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }
            }


}



//printf("********************************************************************************************");



void main3()
{
        node4 *head=NULL;
    node4 *temp=NULL;

    int choose;
    printf("\n\n\t\t\t*****Dr. Nirjhor saha******");
    printf("\n\t\t\t\tKidney specialist");
    printf("\n\t\t\t\tMBBS,FCPS,M.D");

    printf("\n\n\n\t\t\t1.Insert patient appointment");
    printf("\n\t\t\t2.search patient appointment");
    printf("\n\t\t\t3.Remove patient appointment");
    printf("\n\t\t\tselect which which option you want to choose:");
    printf("\n\t\t\tExample:if you want to choose Insert patient appointment press 1: ");
    scanf("%d",&choose);

    //insert patient list
    if(choose==1)
    {
             int i,n;
    printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            node4 *newnode;
            newnode=(node4*)malloc(sizeof(node4));
            printf("\n\n\n\t\t\tEnter the patient name:  ");
            scanf("%s",newnode->pname);
            printf("\t\t\tEnter the patient Age:  ");
            scanf("%d",&newnode->age);
            printf("\t\t\tEnter the patient phone number:  ");
            scanf("%d",&newnode->mobile);
            printf("\t\t\tEnter the patients appointment date:  ");
            scanf("%s",newnode->date);
            printf("\t\t\tEnter the patients appointment time:  ");
            scanf("%s",newnode->time);

            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }

        }
     temp=head;
            while(temp!=NULL)
            {
                printf("\n\n\t\t\tpatient name:%s",temp->pname);
                printf("\n\t\t\t patient age:%d",temp->age);
                printf("\n\t\t\tpatient phone number:%d",temp->mobile);
                printf("\n\t\t\t patients appointment date:%d",temp->date);
                printf("\n\t\t\tpatients appointment time:%d",temp->time);
                temp=temp->next;
            }
                printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        appointment();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }



        }
    //search patent list




      else if(choose==2)
        {
                                int i,n;
                printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
        {
                   int i,n;
                printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                        {
                                node4 *newnode;
                                newnode=(node4*)malloc(sizeof(node4));
                                printf("\n\n\n\t\t\tEnter the patient name:  ");
                                scanf("%s",newnode->pname);
                                printf("\t\t\tEnter the patient Age:  ");
                                scanf("%d",&newnode->age);
                                printf("\t\t\tEnter the patient phone number:  ");
                                scanf("%d",&newnode->mobile);
                                printf("\t\t\tEnter the patients appointment date:  ");
                                scanf("%s",newnode->date);
                                printf("\t\t\tEnter the patients appointment time:  ");
                                scanf("%s",newnode->time);

                                newnode->next=NULL;
                                if(head==NULL)
                                {
                                    head=newnode;
                                }
                                else
                                {
                                    temp=head;
                                    while(temp->next!=NULL)
                                    {
                                        temp=temp->next;
                                    }
                                    temp->next=newnode;
                                }


                        }
            char x[25];
            printf("\n\n\n\t\t\tEnter Name you want to search:");
            scanf("%s",x);
            temp=head;

            while(temp!= NULL && strcmp(temp->pname,x)!= 0)
            {
                temp=temp->next;
            }

            printf("\n\n\n\t\t\t*****searched data*****");
            if(temp==NULL)
            {
                printf("Name could not found\n\n");
            }

            else
            {
              printf("\t\t\tpatient name:%s",temp->pname);
                        printf("\n\t\t\t patient age:%d",temp->age);
                        printf("\n\t\t\tpatient phone number:%d",temp->mobile);
                        printf("\n\t\t\t patients appointment date:%d",temp->date);
                        printf("\n\t\t\tpatients appointment time:%d",temp->time);
            }
               printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        appointment();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }
        }


        }

    //remove list
       else if(choose==3)
        {

                     int i,n;
            printf("\n\n\n\t\t\tEnter how many patients data you want to input:");
            scanf("%d",&n);
            for(i=0;i<n;i++)
                {
                    node4 *newnode;
                        newnode=(node4*)malloc(sizeof(node4));
                        printf("\n\n\n\t\t\tEnter the patient name:  ");
                        scanf("%s",newnode->pname);
                        printf("\t\t\tEnter the patient Age:  ");
                        scanf("%d",&newnode->age);
                        printf("\t\t\tEnter the patient phone number:  ");
                        scanf("%d",&newnode->mobile);
                        printf("\t\t\tEnter the patients appointment date:  ");
                        scanf("%s",newnode->date);
                        printf("\t\t\tEnter the patients appointment time:  ");
                        scanf("%s",newnode->time);

                        newnode->next=NULL;
                        if(head==NULL)
                        {
                            head=newnode;
                        }
                        else
                        {
                            temp=head;
                            while(temp->next!=NULL)
                            {
                                temp=temp->next;
                            }
                            temp->next=newnode;
                        }

                }


                char x[25];
                printf("\n\n\n\t\t\tEnter Name you want to cancel appointment :");
                scanf("%s",x);
                temp=head;
                if(strcmp(head->pname,x)==0)
                {
                    head=head->next;
                    free(temp);
                }
                else
                {
                    node4*pre=NULL;
                      while(temp!= NULL && strcmp(temp->pname,x)!= 0)
                    {
                        pre=temp;
                        temp=temp->next;
                    }
                pre->next=temp->next;
                free(temp);
                }



    //display
            printf("\n\n\n\t\t\t*******Final appointments***********");

           temp=head;
                while(temp!=NULL)
                    {
                    printf("\n\t\t\tpatient name:%s",temp->pname);
                    printf("\n\t\t\t patient age:%d",temp->age);
                    printf("\n\t\t\tpatient phone number:%d",temp->mobile);
                    printf("\n\t\t\t patients appointment date:%d",temp->date);
                    printf("\n\t\t\tpatients appointment time:%d",temp->time);
                    temp=temp->next;
                    }
                printf("\n\n\n\t\t\tPress 1 to for previous option:");
    printf("\n\n\n\t\t\tPress 2 to for main menu:");
    int option;
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        appointment();
    }
    else if(option==2)
    {
       system("cls");
       menu();
    }
    else
    {
        printf("\n\n\n\t\t\tNot Valid !!!!! try again!!!!");
        system("cls");
       menu();
    }
            }


}













