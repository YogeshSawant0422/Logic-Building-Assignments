//Application For School Management System
#include<stdio.h>

int SchoolFees(int iStandard)
{
    if(iStandard == 1)
    {
        return 8900;
    }
    else if(iStandard == 2)
    {
        return 12790;
    }
    else if(iStandard == 3)
    {
        return 21000;
    }
    else if(iStandard == 4)
    {
        return  23450;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iAdmission = 0;

    printf("\n______ Admission For  1 To 4 Standard_______\n\n Enter A Standard :  ");
    scanf("%d",&iAdmission);

    int Ret = SchoolFees(iAdmission);

    if(Ret == -1)
    {
        printf("\n Wrong Input");
    }
    else
    {
        printf("\n\n School Fees For Admission %d Standard is  : %d ",iAdmission ,Ret);
    }
    printf("\n");
    return 0;
}
