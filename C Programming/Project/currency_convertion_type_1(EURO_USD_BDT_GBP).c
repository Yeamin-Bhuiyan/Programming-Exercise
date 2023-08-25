/***********
*****

**  Name : MD. Yeamin Bhuiyan **

*** A program that converts an amount from USD,EURO,GBP,BDT from one to another ***

*****
***********/

//Standard Header File
#include <stdio.h>
#include <stdbool.h>


double get_bdt_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.0073;       //calculation
    return gbp;

}
double get_bdt_euro (double amount)
{

    double euro;
    euro = amount * 0.0085;       //calculation
    return euro;

}
double get_bdt_usd (double amount)
{

    double usd;
    usd = amount * 0.0092;       //calculation
    return usd;
}




double get_gbp_bdt (double amount)
{

    double bdt;
    bdt = amount * 137.40;       //calculation
    return bdt;

}
double get_gbp_euro (double amount)
{

    double euro;
    euro = amount * 1.17;       //calculation
    return euro;

}

double get_gbp_usd (double amount)
{

    double usd;
    usd = amount * 1.25;       //calculation
    return usd;
}





double get_euro_bdt (double amount)
{

    double bdt;
    bdt = amount * 117.80;       //calculation
    return bdt;

}
double get_euro_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.86;       //calculation
    return gbp;

}

double get_euro_usd (double amount)
{

    double usd;
    usd = amount * 1.08;       //calculation
    return usd;

}





double get_usd_bdt (double amount)
{

    double bdt;
    bdt = amount * 109.15;       //calculation
    return bdt;

}
double get_usd_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.79;       //calculation
    return gbp;

}

double get_usd_euro (double amount)
{

    double euro;
    euro = amount * 0.93;       //calculation
    return euro;

}





void print_usd_to_other(double amount)
{

    double x, result;
    x = amount;
    printf("Please Tell Us the Type of Currency You Want to Convert To From USD : \n");
    printf("\tCurrency\t---->\t Input Type\n\n");

    printf("\tEURO\t\t---->\t E\n");

    printf("\tGBP\t\t---->\t G\n");

    printf("\tBDT\t\t---->\t B\n\n");

    printf("Enter your choice: ");
    char convert_type ;
    scanf(" %c",&convert_type);

    if (convert_type == 'E' || convert_type == 'e')
    {
        result = get_usd_euro(x);
        printf("\t%.2lf (USD) is equivalent to %.2lf (EUR)\n\n",x,result);

    }
    else if (convert_type == 'G' || convert_type == 'g')
    {
        result = get_usd_gbp(x);
        printf("\t%.2lf (USD) is equivalent to %.2lf (GBP)\n\n",x,result);
    }
    else if (convert_type == 'B' || convert_type == 'b')
    {
        result = get_usd_bdt(x);
        printf("\t%.2lf (USD) is equivalent to %.2lf (BDT)\n\n",x,result);
    }
    else
    {
        printf("\tInvalid Convert Option !!!\n\n");
    }

    printf("DO you want Continue Converting : \n\n");
    printf("If you want to leave Please enter 0(zero)\n");
    printf("Otherwise if You Want to Continue Please Enter 1(one)\n\n");

    bool do_again;
    printf("\nEnter your choice: ");
    scanf("%d",&do_again);
    if(do_again!=0)
    {
        print_usd_to_other(amount);
    }
    else
    {
        return ;
    }
    return;
}








void print_euro_to_other(double amount)
{

    double x, result;
    x = amount;
    printf("Please Tell Us the Type of Currency You Want to Convert To From EURO : \n");
    printf("\tCurrency\t---->\t Input Type\n\n");

    printf("\tUSD\t\t---->\t U\n");

    printf("\tGBP\t\t---->\t G\n");

    printf("\tBDT\t\t---->\t B\n\n");

    printf("Enter your choice: ");
    char convert_type ;
    scanf(" %c",&convert_type);

    if (convert_type == 'U' || convert_type == 'u')
    {
        result = get_euro_usd(x);
        printf("\t%.2lf (EUR) is equivalent to %.2lf (USD)\n\n",x,result);

    }
    else if (convert_type == 'G' || convert_type == 'g')
    {
        result = get_euro_gbp(x);
        printf("\t%.2lf (EUR) is equivalent to %.2lf (GBP)\n\n",x,result);
    }
    else if (convert_type == 'B' || convert_type == 'b')
    {
        result = get_euro_bdt(x);
        printf("\t%.2lf (EUR) is equivalent to %.2lf (BDT)\n\n",x,result);
    }
    else
    {
        printf("\tInvalid Convert Option !!!\n\n");
    }

    printf("DO you want Continue Converting : \n\n");
    printf("If you want to leave Please enter 0(zero)\n");
    printf("Otherwise if You Want to Continue Please Enter 1(one)\n\n");

    bool do_again;
    printf("\nEnter your choice: ");
    scanf("%d",&do_again);
    if(do_again!=0)
    {
        print_euro_to_other(amount);
    }
    else
    {
        return ;
    }
    return;
}









void print_gbp_to_other(double amount)
{

    double x, result;
    x = amount;
    printf("Please Tell Us the Type of Currency You Want to Convert To From GBP : \n");
    printf("\tCurrency\t---->\t Input Type\n\n");

    printf("\tUSD\t\t---->\t U\n");

    printf("\tEURO\t\t---->\t E\n");

    printf("\tBDT\t\t---->\t B\n\n");

    printf("Enter your choice: ");
    char convert_type ;
    scanf(" %c",&convert_type);

    if (convert_type == 'U' || convert_type == 'u')
    {
        result = get_gbp_usd(x);
        printf("\t%.2lf (GBP) is equivalent to %.2lf (USD)\n\n",x,result);

    }
    else if (convert_type == 'E' || convert_type == 'e')
    {
        result = get_gbp_euro(x);
        printf("\t%.2lf (GBP) is equivalent to %.2lf (EUR)\n\n",x,result);
    }
    else if (convert_type == 'B' || convert_type == 'b')
    {
        result = get_gbp_bdt(x);
        printf("\t%.2lf (GBP) is equivalent to %.2lf (BDT)\n\n",x,result);
    }
    else
    {
        printf("\tInvalid Convert Option !!!\n\n");
    }

    printf("DO you want Continue Converting : \n\n");
    printf("If you want to leave Please enter 0(zero)\n");
    printf("Otherwise if You Want to Continue Please Enter 1(one)\n\n");

    bool do_again;
    printf("\nEnter your choice: ");
    scanf("%d",&do_again);
    if(do_again!=0)
    {
        print_gbp_to_other(amount);
    }
    else
    {
        return ;
    }
    return;
}








void print_bdt_to_other(double amount)
{

    double x, result;
    x = amount;
    printf("Please Tell Us the Type of Currency You Want to Convert To From BDT : \n");
    printf("\tCurrency\t---->\t Input Type\n\n");

    printf("\tUSD\t\t---->\t U\n");

    printf("\tEURO\t\t---->\t E\n");

    printf("\tGBP\t\t---->\t G\n\n");

    printf("Enter your choice: ");
    char convert_type ;
    scanf(" %c",&convert_type);

    if (convert_type == 'U' || convert_type == 'u')
    {
        result = get_bdt_usd(x);
        printf("\t%.2lf (BDT) is equivalent to %.2lf (USD)\n\n",x,result);

    }
    else if (convert_type == 'E' || convert_type == 'e')
    {
        result = get_bdt_euro(x);
        printf("\t%.2lf (BDT) is equivalent to %.2lf (EUR)\n\n",x,result);
    }
    else if (convert_type == 'G' || convert_type == 'g')
    {
        result = get_bdt_gbp(x);
        printf("\t%.2lf (BDT) is equivalent to %.2lf (GBP)\n\n",x,result);
    }
    else
    {
        printf("\tInvalid Convert Option !!!\n\n");
    }

    printf("DO you want Continue Converting : \n\n");
    printf("If you want to leave Please enter 0(zero)\n");
    printf("Otherwise if You Want to Continue Please Enter 1(one)\n\n");

    bool do_again;
    printf("\nEnter your choice: ");
    scanf("%d",&do_again);
    if(do_again!=0)
    {
        print_bdt_to_other(amount);
    }
    else
    {
        return ;
    }
    return;
}








char get_type_of_amount()
{
    printf("Please Tell Us the Type of Currency You Want to Convert From : \n");
    printf("\tCurrency\t---->\t Input Type\n\n");

    printf("\tEURO\t\t---->\t E\n");

    printf("\tGBP\t\t---->\t G\n");
    printf("\tUSD\t\t---->\t U\n");
    printf("\tBDT\t\t---->\t B\n\n");

    printf("Enter your choice: ");
    char amount_type ;
    scanf(" %c",&amount_type);
    return amount_type;
}






double get_amount()
{
    double amount = 0;
    printf("Please Enter the Amount of Money you want to Convert : ");
    scanf("%lf",&amount);
    return amount;
}






void condition (char type,double amount)
{
    double x;
    x = amount;


    if(type == 'U' || type == 'u')
    {
        print_usd_to_other(amount);
    }
    else if (type == 'E' || type == 'e')
    {
        print_euro_to_other(amount);
    }
    else if (type == 'G' || type == 'g')
    {
        print_gbp_to_other(amount);
    }
    else if (type == 'B' || type == 'b')
    {
        print_bdt_to_other (amount);
    }
    else
    {
        printf("\tInvalid Input Option !!!\n\n");
    }
    printf("\n\nDo You Want to Continue By Changing the Amount : \n");
    printf("press 1 to change the Amount \n\t or \t \n 2 to not change the Amount \n");

    int continue_amount;
    printf("Enter your choice: ");
    scanf("%d",&continue_amount);
    if(continue_amount == 0)
    {
        printf("\n\nDo You Want to Continue By Changing the Input Currency : \n");
        printf("press 1 to change the Currency \n\t or \t \n 2 to not change the Currency \n");
        int currency_continue;
        printf("Enter your choice: ");
        scanf("%d",&currency_continue);
        if(currency_continue == 1)
        {
            type = get_type_of_amount();
            condition (type,x);
        }
        else
        {
            return;
        }
    }
    else
    {
        amount = get_amount();
        printf("\n\nDo You Want to Continue By Changing the Input Currency : \n");
        printf("press 1 to change the Currency \n\t or \t \n 2 to not change the Currency ");
        int currency_continue;
        scanf("%d",&currency_continue);
        if(currency_continue == 1)
        {
            type = get_type_of_amount();
            condition(type,amount);
        }
        else
        {
            condition(type,amount);
        }
    }

    return;
}







int main()
{
    double amount = 0;
    char type;
    amount = get_amount();
    type = get_type_of_amount();
    condition (type,amount);
    return 0;
}
