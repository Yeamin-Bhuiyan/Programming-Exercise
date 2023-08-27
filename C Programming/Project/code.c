/***********
*****


              **  Name : MD. Yeamin Bhuiyan **
              **      University : UAP      **
              **        ID : 22201054       **


            *** A program to CONVERT CURRENCY ***

            ************ 19 CURRIENCY ************

        **
                    INTERCHANGEABLE
        **
                    **All Currency**

****


    USD ---->   D / d
    GBP ---->   G / g
    EUR ---->   E / e
    BDT ---->   B / b
    JPY ---->   J / j
    INR ---->   I / i
    KRW ---->   K / k
    SGD ---->   S / s
    AUD ---->   A / a
    CAD ---->   C / c
    QAR ---->   Q / q
    AED ---->   U / u
    SAR ---->   R / r
    CHF ---->   F / f
    PKR ---->   P / p
    LKR ---->   L / l
    MYR ---->   M / m
    EGP ---->   H / h
    RUB ---->   N / n


*****

**********  All They Currency are Inter_changeable

***     You can change the amount
***     You can change the input type
***     You can continue Conversion


***
***********/

//Standard Header File
#include <stdio.h>
#include <stdbool.h>





char get_type_of_amount()
{


    printf("\n\t\t\t\tPlease Tell Us the Type of Currency You Want to Convert From : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");


    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    printf("\tUnited States Dollar\tUSD\t ---->\t D\n\n");

    printf("\n\t\t\tEnter your choice :::  ");

    char amount_type ;

    scanf(" %c",&amount_type);

    return amount_type;


}




double get_amount()
{

    double amount = 0;

    printf("\n\n\t\t\tPlease Enter the Amount of Money you want to Convert ::: ");

    scanf("%lf",&amount);

    return amount;


}






void print_usd_bdt (double amount)
{

    double bdt;
    bdt = amount * 109.31;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_usd_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.79;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_usd_euro (double amount)
{

    double euro;
    euro = amount * 0.93;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_usd_jpy (double amount)
{

    double jpy;
    jpy = amount * 146.44;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_usd_inr (double amount)
{

    double inr;
    inr = amount * 82.55;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_usd_krw (double amount)
{

    double krw;
    krw = amount * 1324.61;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_usd_sgd (double amount)
{

    double sgd;
    sgd = amount * 1.36;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_usd_aud (double amount)
{

    double aud;
    aud = amount * 1.56;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_usd_cad (double amount)
{

    double cad;
    cad = amount * 1.36;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_usd_qar (double amount)
{

    double qar;
    qar = amount * 3.64;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_usd_aed (double amount)
{

    double aed;
    aed = amount * 3.67;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_usd_sar (double amount)
{

    double sar;
    sar = amount * 3.75;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_usd_chf (double amount)
{

    double chf;
    chf = amount * 0.88;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_usd_pkr (double amount)
{

    double pkr;
    pkr = amount * 303.18;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_usd_lkr (double amount)
{

    double lkr;
    lkr = amount * 324.20;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_usd_myr (double amount)
{

    double myr;
    myr = amount * 4.64;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_usd_egp (double amount)
{

    double egp;
    egp = amount * 30.92;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_usd_rub (double amount)
{

    double rub;
    rub = amount * 95.00;       //calculation

    printf("\n\n\t\t\t\tFrom United States Dollar To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (USD) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_usd_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From USD : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_usd_euro (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_usd_gbp (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_usd_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_usd_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_usd_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_usd_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_usd_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_usd_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_usd_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_usd_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_usd_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_usd_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_usd_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_usd_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_usd_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_usd_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_usd_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_usd_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to Change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_usd_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_usd_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}









void print_gbp_usd (double amount)
{

    double usd;
    usd = amount * 1.26;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_gbp_bdt (double amount)
{

    double bdt;
    bdt = amount * 137.53;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_gbp_euro (double amount)
{

    double euro;
    euro = amount * 1.17;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_gbp_jpy (double amount)
{

    double jpy;
    jpy = amount * 184.23;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_gbp_inr (double amount)
{

    double inr;
    inr = amount * 103.85;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_gbp_krw (double amount)
{

    double krw;
    krw = amount * 1666.49;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_gbp_sgd (double amount)
{

    double sgd;
    sgd = amount * 1.71;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_gbp_aud (double amount)
{

    double aud;
    aud = amount * 1.96;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_gbp_cad (double amount)
{

    double cad;
    cad = amount * 1.71;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_gbp_qar (double amount)
{

    double qar;
    qar = amount * 4.58;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_gbp_aed (double amount)
{

    double aed;
    aed = amount * 4.62;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_gbp_sar (double amount)
{

    double sar;
    sar = amount * 4.72;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_gbp_chf (double amount)
{

    double chf;
    chf = amount * 1.11;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_gbp_pkr (double amount)
{

    double pkr;
    pkr = amount * 381.43;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_gbp_lkr (double amount)
{

    double lkr;
    lkr = amount * 407.87;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_gbp_myr (double amount)
{

    double myr;
    myr = amount * 5.84;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_gbp_egp (double amount)
{

    double egp;
    egp = amount * 38.90;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_gbp_rub (double amount)
{

    double rub;
    rub = amount * 119.52;       //calculation

    printf("\n\n\t\t\t\tFrom Pound sterling To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (GBP) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_gbp_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From GBP : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_gbp_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_gbp_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_gbp_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_gbp_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_gbp_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_gbp_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_gbp_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_gbp_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_gbp_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_gbp_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_gbp_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_gbp_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_gbp_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_gbp_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_gbp_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_gbp_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_gbp_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_gbp_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_gbp_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_gbp_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_eur_bdt (double amount)
{

    double bdt;
    bdt = amount * 118.01;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_eur_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.86;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_eur_usd (double amount)
{

    double usd;
    usd = amount * 1.08;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_eur_jpy (double amount)
{

    double jpy;
    jpy = amount * 158.09;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_eur_inr (double amount)
{

    double inr;
    inr = amount * 89.11;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_eur_krw (double amount)
{

    double krw;
    krw = amount * 1429.98;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_eur_sgd (double amount)
{

    double sgd;
    sgd = amount * 1.47;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_eur_aud (double amount)
{

    double aud;
    aud = amount * 1.69;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_eur_cad (double amount)
{

    double cad;
    cad = amount * 1.47;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_eur_qar (double amount)
{

    double qar;
    qar = amount * 3.93;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_eur_aed (double amount)
{

    double aed;
    aed = amount * 3.97;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_eur_sar (double amount)
{

    double sar;
    sar = amount * 4.05;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_eur_chf (double amount)
{

    double chf;
    chf = amount * 0.95;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_eur_pkr (double amount)
{

    double pkr;
    pkr = amount * 327.30;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_eur_lkr (double amount)
{

    double lkr;
    lkr = amount * 349.99;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_eur_myr (double amount)
{

    double myr;
    myr = amount * 5.01;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_eur_egp (double amount)
{

    double egp;
    egp = amount * 33.40;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_eur_rub (double amount)
{

    double rub;
    rub = amount * 102.56;       //calculation

    printf("\n\n\t\t\t\tFrom Euro To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EUR) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_eur_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From EURO : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tUnited States Dollar\tUSD\t ---->\t D");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_eur_usd (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_eur_gbp (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_eur_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_eur_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_eur_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_eur_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_eur_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_eur_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_eur_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_eur_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_eur_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_eur_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_eur_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_eur_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_eur_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_eur_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_eur_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_eur_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_eur_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_eur_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_bdt_usd (double amount)
{

    double usd;
    usd = amount * 0.0092;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_bdt_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.0073;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_bdt_euro (double amount)
{

    double euro;
    euro = amount * 0.0085;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_bdt_jpy (double amount)
{

    double jpy;
    jpy = amount * 1.34;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_bdt_inr (double amount)
{

    double inr;
    inr = amount * 0.76;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_bdt_krw (double amount)
{

    double krw;
    krw = amount * 12.12;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_bdt_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.012;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_bdt_aud (double amount)
{

    double aud;
    aud = amount * 0.014;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_bdt_cad (double amount)
{

    double cad;
    cad = amount * 0.012;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_bdt_qar (double amount)
{

    double qar;
    qar = amount * 0.033;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_bdt_aed (double amount)
{

    double aed;
    aed = amount * 0.034;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_bdt_sar (double amount)
{

    double sar;
    sar = amount * 0.034;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_bdt_chf (double amount)
{

    double chf;
    chf = amount * 0.0081;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_bdt_pkr (double amount)
{

    double pkr;
    pkr = amount * 2.77;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_bdt_lkr (double amount)
{

    double lkr;
    lkr = amount * 2.97;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_bdt_myr (double amount)
{

    double myr;
    myr = amount * 0.042;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_bdt_egp (double amount)
{

    double egp;
    egp = amount * 0.28;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_bdt_rub (double amount)
{

    double rub;
    rub = amount * 0.87;       //calculation

    printf("\n\n\t\t\t\tFrom Bangladeshi Taka To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (BDT) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}



void print_bdt_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From BDT : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tUnited States Dollar\tUSD\t ---->\t D");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_bdt_euro (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_bdt_gbp (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_bdt_usd (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_bdt_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_bdt_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_bdt_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_bdt_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_bdt_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_bdt_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_bdt_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_bdt_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_bdt_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_bdt_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_bdt_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_bdt_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_bdt_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_bdt_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_bdt_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_bdt_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_bdt_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_jpy_bdt (double amount)
{

    double bdt;
    bdt = amount * 0.75;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_jpy_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.0054;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_jpy_euro (double amount)
{

    double euro;
    euro = amount * 0.0063;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_jpy_usd (double amount)
{

    double usd;
    usd = amount * 0.0068 ;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (USD)\n\n",amount,usd);


    return ;

}

void print_jpy_inr (double amount)
{

    double inr;
    inr = amount * 0.56;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_jpy_krw (double amount)
{

    double krw;
    krw = amount * 9.05;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_jpy_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.0093;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_jpy_aud (double amount)
{

    double aud;
    aud = amount * 0.011;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_jpy_cad (double amount)
{

    double cad;
    cad = amount * 0.0093;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_jpy_qar (double amount)
{

    double qar;
    qar = amount * 0.025;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_jpy_aed (double amount)
{

    double aed;
    aed = amount * 0.025;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_jpy_sar (double amount)
{

    double sar;
    sar = amount * 0.026;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_jpy_chf (double amount)
{

    double chf;
    chf = amount * 0.0060;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_jpy_pkr (double amount)
{

    double pkr;
    pkr = amount * 2.07;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_jpy_lkr (double amount)
{

    double lkr;
    lkr = amount * 2.21;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_jpy_myr (double amount)
{

    double myr;
    myr = amount * 0.032;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_jpy_egp (double amount)
{

    double egp;
    egp = amount * 0.21;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_jpy_rub (double amount)
{

    double rub;
    rub = amount * 0.65;       //calculation

    printf("\n\n\t\t\t\tFrom Japanese Yen To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (JPY) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}





void print_jpy_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From JPY : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_jpy_euro (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_jpy_gbp (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_jpy_bdt (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_jpy_usd (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_jpy_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_jpy_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_jpy_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_jpy_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_jpy_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_jpy_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_jpy_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_jpy_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_jpy_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_jpy_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_jpy_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_jpy_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_jpy_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_jpy_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to Change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_jpy_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_jpy_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}







void print_inr_usd (double amount)
{

    double usd;
    usd = amount * .012;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_inr_bdt (double amount)
{

    double bdt;
    bdt = amount * 1.32;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_inr_euro (double amount)
{

    double euro;
    euro = amount * 0.011;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_inr_jpy (double amount)
{

    double jpy;
    jpy = amount * 1.77;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_inr_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.0096;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_inr_krw (double amount)
{

    double krw;
    krw = amount * 16.05;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_inr_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.016;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_inr_aud (double amount)
{

    double aud;
    aud = amount * 0.019;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_inr_cad (double amount)
{

    double cad;
    cad = amount * 0.016;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_inr_qar (double amount)
{

    double qar;
    qar = amount * 0.044;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_inr_aed (double amount)
{

    double aed;
    aed = amount * 0.044;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_inr_sar (double amount)
{

    double sar;
    sar = amount * 0.045;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_inr_chf (double amount)
{

    double chf;
    chf = amount * 0.011;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_inr_pkr (double amount)
{

    double pkr;
    pkr = amount * 3.67;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_inr_lkr (double amount)
{

    double lkr;
    lkr = amount * 3.93 ;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_inr_myr (double amount)
{

    double myr;
    myr = amount * 0.056;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_inr_egp (double amount)
{

    double egp;
    egp = amount * 0.37;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_inr_rub (double amount)
{

    double rub;
    rub = amount * 1.15;       //calculation

    printf("\n\n\t\t\t\tFrom Indian Rupee To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (INR) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_inr_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From INR : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tPound sterling\t\tGBP\t ---->\t G");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_inr_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_inr_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_inr_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_inr_jpy (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_inr_gbp (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_inr_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_inr_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_inr_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_inr_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_inr_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_inr_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_inr_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_inr_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_inr_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_inr_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_inr_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_inr_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_inr_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_gbp_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_gbp_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_krw_usd (double amount)
{

    double usd;
    usd = amount * 0.00075;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_krw_bdt (double amount)
{

    double bdt;
    bdt = amount * 0.083;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_krw_euro (double amount)
{

    double euro;
    euro = amount * 0.00070;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_krw_jpy (double amount)
{

    double jpy;
    jpy = amount * 0.11;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_krw_inr (double amount)
{

    double inr;
    inr = amount * 0.062;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_krw_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.0000060;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_krw_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.0010;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_krw_aud (double amount)
{

    double aud;
    aud = amount * 0.0012 ;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_krw_cad (double amount)
{

    double cad;
    cad = amount * 0.0010;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_krw_qar (double amount)
{

    double qar;
    qar = amount * 0.0010;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_krw_aed (double amount)
{

    double aed;
    aed = amount * 0.0028;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_krw_sar (double amount)
{

    double sar;
    sar = amount * 0.0028;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_krw_chf (double amount)
{

    double chf;
    chf = amount * 0.00067;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_krw_pkr (double amount)
{

    double pkr;
    pkr = amount * 0.23;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_krw_lkr (double amount)
{

    double lkr;
    lkr = amount * 0.24;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_krw_myr (double amount)
{

    double myr;
    myr = amount * 0.0035;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_krw_egp (double amount)
{

    double egp;
    egp = amount * 0.023;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean wong To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_krw_rub (double amount)
{

    double rub;
    rub = amount * 0.072;       //calculation

    printf("\n\n\t\t\t\tFrom South Korean won To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (KRW) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_krw_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From KRW : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_krw_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_krw_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_krw_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_krw_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_krw_inr (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_krw_gbp (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_krw_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_krw_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_krw_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_krw_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_krw_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_krw_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_krw_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_krw_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_krw_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_krw_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_krw_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_krw_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_krw_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();

        print_krw_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_sgd_usd (double amount)
{

    double usd;
    usd = amount * 0.74;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_sgd_bdt (double amount)
{

    double bdt;
    bdt = amount * 80.61;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_sgd_euro (double amount)
{

    double euro;
    euro = amount * 0.68;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_sgd_jpy (double amount)
{

    double jpy;
    jpy = amount * 107.98;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_sgd_inr (double amount)
{

    double inr;
    inr = amount * 60.87;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_sgd_krw (double amount)
{

    double krw;
    krw = amount * 976.74;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_sgd_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.59;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_sgd_aud (double amount)
{

    double aud;
    aud = amount * 1.15;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_sgd_cad (double amount)
{

    double cad;
    cad = amount * 1.00;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_sgd_qar (double amount)
{

    double qar;
    qar = amount * 2.68;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_sgd_aed (double amount)
{

    double aed;
    aed = amount * 2.71;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_sgd_sar (double amount)
{

    double sar;
    sar = amount * 2.77;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_sgd_chf (double amount)
{

    double chf;
    chf = amount * 0.65;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_sgd_pkr (double amount)
{

    double pkr;
    pkr = amount * 223.56;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_sgd_lkr (double amount)
{

    double lkr;
    lkr = amount * 239.06;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_sgd_myr (double amount)
{

    double myr;
    myr = amount * 3.42;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_sgd_egp (double amount)
{

    double egp;
    egp = amount * 22.80;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_sgd_rub (double amount)
{

    double rub;
    rub = amount * 70.05;       //calculation

    printf("\n\n\t\t\t\tFrom Singapore Dollar To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SGD) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_sgd_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From SGD : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tPound sterling\t\tGBP\t ---->\t G");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_sgd_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_sgd_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_sgd_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_sgd_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_sgd_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_sgd_krw (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_sgd_gbp (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_sgd_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_sgd_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_sgd_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_sgd_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_sgd_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_sgd_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_sgd_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_sgd_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_sgd_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_sgd_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_sgd_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_sgd_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_sgd_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_aud_usd (double amount)
{

    double usd;
    usd = amount * 0.64;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_aud_bdt (double amount)
{

    double bdt;
    bdt = amount * 70.00;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_aud_euro (double amount)
{

    double euro;
    euro = amount * 0.59;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_aud_jpy (double amount)
{

    double jpy;
    jpy = amount * 94.07 ;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_aud_inr (double amount)
{

    double inr;
    inr = amount * 52.86;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_aud_krw (double amount)
{

    double krw;
    krw = amount * 848.28;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_aud_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.87;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_aud_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.51 ;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Pound sterling  :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_aud_cad (double amount)
{

    double cad;
    cad = amount * 0.87;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_aud_qar (double amount)
{

    double qar;
    qar = amount * 2.33;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_aud_aed (double amount)
{

    double aed;
    aed = amount * 2.35;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_aud_sar (double amount)
{

    double sar;
    sar = amount * 2.40;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_aud_chf (double amount)
{

    double chf;
    chf = amount * 0.57 ;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_aud_pkr (double amount)
{

    double pkr;
    pkr = amount * 194.16 ;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_aud_lkr (double amount)
{

    double lkr;
    lkr = amount * 207.62;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_aud_myr (double amount)
{

    double myr;
    myr = amount * 2.97;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_aud_egp (double amount)
{

    double egp;
    egp = amount * 19.80;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_aud_rub (double amount)
{

    double rub;
    rub = amount * 60.84;       //calculation

    printf("\n\n\t\t\t\tFrom Australian Dollar To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AUD) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_aud_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From AUD : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");;


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_aud_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_aud_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_aud_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_aud_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_aud_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_aud_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_aud_sgd (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_aud_gbp (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_aud_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_aud_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_aud_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_aud_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_aud_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_aud_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_aud_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_aud_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_aud_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_aud_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_aud_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_aud_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_cad_usd (double amount)
{

    double usd;
    usd = amount * 0.73;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_cad_bdt (double amount)
{

    double bdt;
    bdt = amount * 80.32;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_cad_euro (double amount)
{

    double euro;
    euro = amount * 0.68;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_cad_jpy (double amount)
{

    double jpy;
    jpy = amount * 107.59;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_cad_inr (double amount)
{

    double inr;
    inr = amount * 60.65;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_cad_krw (double amount)
{

    double krw;
    krw = amount * 973.23;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_cad_sgd (double amount)
{

    double sgd;
    sgd = amount * 1.00;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_cad_aud (double amount)
{

    double aud;
    aud = amount * 1.14;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_cad_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.58;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_cad_qar (double amount)
{

    double qar;
    qar = amount * 2.68 ;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_cad_aed (double amount)
{

    double aed;
    aed = amount * 2.70 ;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_cad_sar (double amount)
{

    double sar;
    sar = amount * 2.76;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_cad_chf (double amount)
{

    double chf;
    chf = amount * 0.65;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_cad_pkr (double amount)
{

    double pkr;
    pkr = amount * 222.76;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_cad_lkr (double amount)
{

    double lkr;
    lkr = amount * 238.20;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_cad_myr (double amount)
{

    double myr;
    myr = amount * 3.41 ;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_cad_egp (double amount)
{

    double egp;
    egp = amount * 22.72;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_cad_rub (double amount)
{

    double rub;
    rub = amount * 69.80 ;       //calculation

    printf("\n\n\t\t\t\tFrom Canadian Dollar To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CAD) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_cad_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From CAD : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tPound sterling\t\tGBP\t ---->\t G");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_cad_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_cad_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_cad_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_cad_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_cad_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_cad_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_cad_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_cad_aud (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_cad_gbp (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_cad_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_cad_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_cad_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_cad_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_cad_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_cad_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_cad_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_cad_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_cad_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_cad_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_cad_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_qar_usd (double amount)
{

    double usd;
    usd = amount * 0.27;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_qar_bdt (double amount)
{

    double bdt;
    bdt = amount * 30.02;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_qar_euro (double amount)
{

    double euro;
    euro = amount * 0.25;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_qar_jpy (double amount)
{

    double jpy;
    jpy = amount * 40.22;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_qar_inr (double amount)
{

    double inr;
    inr = amount * 22.67;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_qar_krw (double amount)
{

    double krw;
    krw = amount * 363.80;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_qar_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.37;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_qar_aud (double amount)
{

    double aud;
    aud = amount * 0.43;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_qar_cad (double amount)
{

    double cad;
    cad = amount * 0.37;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_qar_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.22 ;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_qar_aed (double amount)
{

    double aed;
    aed = amount * 1.01;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_qar_sar (double amount)
{

    double sar;
    sar = amount * 1.03;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_qar_chf (double amount)
{

    double chf;
    chf = amount * 0.24;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_qar_pkr (double amount)
{

    double pkr;
    pkr = amount * 83.27;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_qar_lkr (double amount)
{

    double lkr;
    lkr = amount * 89.04;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_qar_myr (double amount)
{

    double myr;
    myr = amount * 1.27;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_qar_egp (double amount)
{

    double egp;
    egp = amount * 8.49;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_qar_rub (double amount)
{

    double rub;
    rub = amount * 26.09;       //calculation

    printf("\n\n\t\t\t\tFrom Qatari Riyal To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (QAR) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_qar_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From QAR : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_qar_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_qar_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_qar_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_qar_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_qar_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_qar_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_qar_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_qar_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_qar_cad (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_qar_gbp (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_qar_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_qar_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_qar_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_qar_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_qar_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_qar_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_qar_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_qar_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_qar_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_qar_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_aed_usd (double amount)
{

    double usd;
    usd = amount * 0.27;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_aed_bdt (double amount)
{

    double bdt;
    bdt = amount * 29.76;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_aed_euro (double amount)
{

    double euro;
    euro = amount * 0.25;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_aed_jpy (double amount)
{

    double jpy;
    jpy = amount * 39.87;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_aed_inr (double amount)
{

    double inr;
    inr = amount * 22.47;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_aed_krw (double amount)
{

    double krw;
    krw = amount * 360.63;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_aed_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.37;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_aed_aud (double amount)
{

    double aud;
    aud = amount * 0.43 ;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_aed_cad (double amount)
{

    double cad;
    cad = amount * 0.37;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_aed_qar (double amount)
{

    double qar;
    qar = amount * 0.99;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirhamg To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_aed_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.22;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Pound sterling:: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_aed_sar (double amount)
{

    double sar;
    sar = amount * 1.02;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_aed_chf (double amount)
{

    double chf;
    chf = amount * 0.24;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_aed_pkr (double amount)
{

    double pkr;
    pkr = amount * 81.54;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_aed_lkr (double amount)
{

    double lkr;
    lkr = amount * 88.27;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_aed_myr (double amount)
{

    double myr;
    myr = amount * 1.26;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_aed_egp (double amount)
{

    double egp;
    egp = amount * 8.42;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_aed_rub (double amount)
{

    double rub;
    rub = amount * 25.86;       //calculation

    printf("\n\n\t\t\t\tFrom United Arab Emirates Dirham To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (AED) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_aed_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From AED : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tPound sterling\t\tGBP\t ---->\t G");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_aed_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_aed_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_aed_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_aed_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_aed_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_aed_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_aed_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_aed_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_aed_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_aed_qar (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_aed_gbp (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_aed_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_aed_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_aed_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_aed_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_aed_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_aed_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_aed_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_aed_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_aed_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_sar_usd (double amount)
{

    double usd;
    usd = amount * 0.27 ;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_sar_bdt (double amount)
{

    double bdt;
    bdt = amount * 29.14;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_sar_euro (double amount)
{

    double euro;
    euro = amount * 0.25;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_sar_jpy (double amount)
{

    double jpy;
    jpy = amount * 39.03;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_sar_inr (double amount)
{

    double inr;
    inr = amount * 22.00;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_sar_krw (double amount)
{

    double krw;
    krw = amount * 353.10;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_sar_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.36;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_sar_aud (double amount)
{

    double aud;
    aud = amount * 0.42;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_sar_cad (double amount)
{

    double cad;
    cad = amount * 0.36;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_sar_qar (double amount)
{

    double qar;
    qar = amount * 0.97;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_sar_aed (double amount)
{

    double aed;
    aed = amount * 0.98;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_sar_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.21 ;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_sar_chf (double amount)
{

    double chf;
    chf = amount * 0.24;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_sar_pkr (double amount)
{

    double pkr;
    pkr = amount * 80.82;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_sar_lkr (double amount)
{

    double lkr;
    lkr = amount * 86.42;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_sar_myr (double amount)
{

    double myr;
    myr = amount * 1.24;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_sar_egp (double amount)
{

    double egp;
    egp = amount * 8.24;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_sar_rub (double amount)
{

    double rub;
    rub = amount * 25.32;       //calculation

    printf("\n\n\t\t\t\tFrom Saudi Riyal To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (SAR) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_sar_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From SAR : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_sar_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_sar_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_sar_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_sar_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_sar_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_sar_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_sar_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_sar_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_sar_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_sar_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_sar_aed (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_sar_gbp (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_sar_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_sar_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_sar_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_sar_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_sar_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_sar_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_sar_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_sar_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_chf_usd (double amount)
{

    double usd;
    usd = amount * 1.13;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_chf_bdt (double amount)
{

    double bdt;
    bdt = amount * 123.59;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_chf_euro (double amount)
{

    double euro;
    euro = amount * 1.05;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_chf_jpy (double amount)
{

    double jpy;
    jpy = amount * 165.56;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_chf_inr (double amount)
{

    double inr;
    inr = amount * 93.33;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_chf_krw (double amount)
{

    double krw;
    krw = amount * 1497.57;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_chf_sgd (double amount)
{

    double sgd;
    sgd = amount * 1.53;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_chf_aud (double amount)
{

    double aud;
    aud = amount *1.77 ;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_chf_cad (double amount)
{

    double cad;
    cad = amount * 1.54;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_chf_qar (double amount)
{

    double qar;
    qar = amount * 4.12;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_chf_aed (double amount)
{

    double aed;
    aed = amount * 4.15;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_chf_sar (double amount)
{

    double sar;
    sar = amount * 4.24;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_chf_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.90;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_chf_pkr (double amount)
{

    double pkr;
    pkr = amount * 342.77;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_chf_lkr (double amount)
{

    double lkr;
    lkr = amount * 366.53;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_chf_myr (double amount)
{

    double myr;
    myr = amount * 5.25;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_chf_egp (double amount)
{

    double egp;
    egp = amount * 34.95;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_chf_rub (double amount)
{

    double rub;
    rub = amount * 107.40;       //calculation

    printf("\n\n\t\t\t\tFrom Swiss Franc To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (CHF) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_chf_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From CHF : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tPound sterling\t\tGBP\t ---->\t G");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_chf_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_chf_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_chf_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_chf_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_chf_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_chf_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_chf_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_chf_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_chf_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_chf_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_chf_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_chf_sar (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_chf_gbp (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_chf_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_chf_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_chf_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_chf_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_chf_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_chf_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_chf_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void print_pkr_usd (double amount)
{

    double usd;
    usd = amount * 0.0033;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_pkr_bdt (double amount)
{

    double bdt;
    bdt = amount * 0.36;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_pkr_euro (double amount)
{

    double euro;
    euro = amount * 0.0031;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_pkr_jpy (double amount)
{

    double jpy;
    jpy = amount * 0.48 ;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_pkr_inr (double amount)
{

    double inr;
    inr = amount * 0.27;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_pkr_krw (double amount)
{

    double krw;
    krw = amount * 4.37 ;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_pkr_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.0045;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_pkr_aud (double amount)
{

    double aud;
    aud = amount * 0.0052;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_pkr_cad (double amount)
{

    double cad;
    cad = amount * 0.0045;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_pkr_qar (double amount)
{

    double qar;
    qar = amount * 0.012;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_pkr_aed (double amount)
{

    double aed;
    aed = amount * 0.012;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_pkr_sar (double amount)
{

    double sar;
    sar = amount * 0.012;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_pkr_chf (double amount)
{

    double chf;
    chf = amount * 0.0029;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_pkr_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.0026;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_pkr_lkr (double amount)
{

    double lkr;
    lkr = amount * 1.07;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_pkr_myr (double amount)
{

    double myr;
    myr = amount * 0.015;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_pkr_egp (double amount)
{

    double egp;
    egp = amount * 0.10 ;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_pkr_rub (double amount)
{

    double rub;
    rub = amount * 0.31;       //calculation

    printf("\n\n\t\t\t\tFrom Pakistani Rupee To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (PKR) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_pkr_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From PKR : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_pkr_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_pkr_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_pkr_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_pkr_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_pkr_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_pkr_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_pkr_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_pkr_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_pkr_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_pkr_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_pkr_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_pkr_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_pkr_chf (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_pkr_gbp (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_pkr_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_pkr_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_pkr_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_pkr_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_pkr_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_pkr_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}







void print_lkr_usd (double amount)
{

    double usd;
    usd = amount * 0.0031;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_lkr_bdt (double amount)
{

    double bdt;
    bdt = amount *0.34 ;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_lkr_euro (double amount)
{

    double euro;
    euro = amount * 0.0029;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_lkr_jpy (double amount)
{

    double jpy;
    jpy = amount * 0.45;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_lkr_inr (double amount)
{

    double inr;
    inr = amount * 0.25;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_lkr_krw (double amount)
{

    double krw;
    krw = amount * 4.09;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_lkr_sgd (double amount)
{

    double sgd;
    sgd = amount *0.0042;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_lkr_aud (double amount)
{

    double aud;
    aud = amount * 0.0048;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_lkr_cad (double amount)
{

    double cad;
    cad = amount * 0.0042;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_lkr_qar (double amount)
{

    double qar;
    qar = amount * 0.011;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_lkr_aed (double amount)
{

    double aed;
    aed = amount *0.011 ;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_lkr_sar (double amount)
{

    double sar;
    sar = amount *0.012 ;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_lkr_chf (double amount)
{

    double chf;
    chf = amount * 0.0027;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_lkr_pkr (double amount)
{

    double pkr;
    pkr = amount * 0.94;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_lkr_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.0025 ;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_lkr_myr (double amount)
{

    double myr;
    myr = amount * 0.014;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_lkr_egp (double amount)
{

    double egp;
    egp = amount * 0.095;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_lkr_rub (double amount)
{

    double rub;
    rub = amount * 0.29;       //calculation

    printf("\n\n\t\t\t\tFrom Sri Lankan Rupee To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (LKR) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_lkr_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From LKR : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tPound sterling\t\tGBP\t ---->\t G");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_lkr_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_lkr_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_lkr_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_lkr_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_lkr_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_lkr_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_lkr_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_lkr_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_lkr_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_lkr_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_lkr_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_lkr_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_lkr_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_lkr_pkr (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_lkr_gbp (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_lkr_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_lkr_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_lkr_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_lkr_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_lkr_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}









void print_myr_usd (double amount)
{

    double usd;
    usd = amount * 0.22 ;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_myr_bdt (double amount)
{

    double bdt;
    bdt = amount * 23.56;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_myr_euro (double amount)
{

    double euro;
    euro = amount * 0.20;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_myr_jpy (double amount)
{

    double jpy;
    jpy = amount * 31.51;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_myr_inr (double amount)
{

    double inr;
    inr = amount * 17.80;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_myr_krw (double amount)
{

    double krw;
    krw = amount * 285.47;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_myr_sgd (double amount)
{

    double sgd;
    sgd = amount *0.29;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_myr_aud (double amount)
{

    double aud;
    aud = amount * 0.33;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_myr_cad (double amount)
{

    double cad;
    cad = amount * 0.29;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_myr_qar (double amount)
{

    double qar;
    qar = amount * 0.78;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_myr_aed (double amount)
{

    double aed;
    aed = amount * 0.79;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_myr_sar (double amount)
{

    double sar;
    sar = amount * 0.81;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_myr_chf (double amount)
{

    double chf;
    chf = amount * 0.19;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_myr_pkr (double amount)
{

    double pkr;
    pkr = amount * 65.34;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_myr_lkr (double amount)
{

    double lkr;
    lkr = amount * 69.87;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_myr_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.17;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (MRY)\n\n",amount,gbp);

    return ;

}

void print_myr_egp (double amount)
{

    double egp;
    egp = amount * 6.66;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_myr_rub (double amount)
{

    double rub;
    rub = amount * 20.47;       //calculation

    printf("\n\n\t\t\t\tFrom Malaysian Ringgit To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (MYR) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_myr_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From MYR : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_myr_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_myr_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_myr_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_myr_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_myr_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_myr_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_myr_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_myr_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_myr_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_myr_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_myr_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_myr_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_myr_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_myr_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_myr_lkr (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_myr_gbp (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_myr_egp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_myr_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_myr_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_myr_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}









void print_egp_usd (double amount)
{

    double usd;
    usd = amount *0.032;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_egp_bdt (double amount)
{

    double bdt;
    bdt = amount * 3.54;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_egp_euro (double amount)
{

    double euro;
    euro = amount * 0.030;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_egp_jpy (double amount)
{

    double jpy;
    jpy = amount * 4.74;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_egp_inr (double amount)
{

    double inr;
    inr = amount *2.67;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_egp_krw (double amount)
{

    double krw;
    krw = amount * 42.84;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_egp_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.044;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_egp_aud (double amount)
{

    double aud;
    aud = amount * 0.051;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_egp_cad (double amount)
{

    double cad;
    cad = amount * 0.044;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_egp_qar (double amount)
{

    double qar;
    qar = amount * 0.12;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_egp_aed (double amount)
{

    double aed;
    aed = amount * 0.12;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_egp_sar (double amount)
{

    double sar;
    sar = amount * 0.12 ;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_egp_chf (double amount)
{

    double chf;
    chf = amount * 1.11;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_egp_pkr (double amount)
{

    double pkr;
    pkr = amount * 9.81 ;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_egp_lkr (double amount)
{

    double lkr;
    lkr = amount * 10.49;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_egp_myr (double amount)
{

    double myr;
    myr = amount * 0.15;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_egp_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.026 ;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}

void print_egp_rub (double amount)
{

    double rub;
    rub = amount * 3.07;       //calculation

    printf("\n\n\t\t\t\tFrom Egyptian Pound To Russian Ruble :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (EGP) is equivalent to %0.2lf (RUB)\n\n",amount,rub);

    return ;

}




void print_egp_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From EGP : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tPound sterling\t\tGBP\t ---->\t G");

    printf("\t\tRussian Ruble\t\tRUB\t ---->\t N\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_egp_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_egp_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_egp_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_egp_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_egp_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_egp_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_egp_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_egp_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_egp_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_egp_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_egp_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_egp_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_egp_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_egp_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_egp_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_egp_myr (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'G' )
    {

        print_egp_gbp (money);

    }
    else if ( exchange_type == 'N' || exchange_type == 'n' )
    {

        print_egp_rub (money);

    }
    else
    {

        printf("\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_egp_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_egp_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}









void print_rub_usd (double amount)
{

    double usd;
    usd = amount * 0.011;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To United States Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (USD)\n\n",amount,usd);

    return ;

}

void print_rub_bdt (double amount)
{

    double bdt;
    bdt = amount * 1.15;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Bangladeshi Taka :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (BDT)\n\n",amount,bdt);

    return ;

}

void print_rub_euro (double amount)
{

    double euro;
    euro = amount * 0.0098;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Euro :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (EUR)\n\n",amount,euro);

    return ;

}

void print_rub_jpy (double amount)
{

    double jpy;
    jpy = amount * 1.54;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Japanese Yen :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (JPY)\n\n",amount,jpy);


    return ;

}

void print_rub_inr (double amount)
{

    double inr;
    inr = amount * 0.87;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Indian Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (INR)\n\n",amount,inr);

    return ;

}

void print_rub_krw (double amount)
{

    double krw;
    krw = amount * 13.94;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To South Korean won :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (KRW)\n\n",amount,krw);

    return ;

}

void print_rub_sgd (double amount)
{

    double sgd;
    sgd = amount * 0.014 ;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Singapore Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (SGD)\n\n",amount,sgd);

    return ;

}

void print_rub_aud (double amount)
{

    double aud;
    aud = amount * 0.021;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Australian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (AUD)\n\n",amount,aud);

    return ;

}

void print_rub_cad (double amount)
{

    double cad;
    cad = amount * 0.014;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Canadian Dollar :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (CAD)\n\n",amount,cad);

    return ;

}

void print_rub_qar (double amount)
{

    double qar;
    qar = amount * 0.038;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Qatari Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (QAR)\n\n",amount,qar);

    return ;

}

void print_rub_aed (double amount)
{

    double aed;
    aed = amount *0.039 ;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To United Arab Emirates Dirham :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (AED)\n\n",amount,aed);

    return ;

}

void print_rub_sar (double amount)
{

    double sar;
    sar = amount * 0.039 ;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Saudi Riyal :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (SAR)\n\n",amount,sar);

    return ;

}

void print_rub_chf (double amount)
{

    double chf;
    chf = amount * 0.0093;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Swiss Franc :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (CHF)\n\n",amount,chf);

    return ;

}

void print_rub_pkr (double amount)
{

    double pkr;
    pkr = amount * 3.19;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Pakistani Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (PKR)\n\n",amount,pkr);

    return ;

}

void print_rub_lkr (double amount)
{

    double lkr;
    lkr = amount * 3.41;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Sri Lankan Rupee :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (LKR)\n\n",amount,lkr);

    return ;

}

void print_rub_myr (double amount)
{

    double myr;
    myr = amount * 0.049;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Malaysian Ringgit :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (MYR)\n\n",amount,myr);

    return ;

}

void print_rub_egp (double amount)
{

    double egp;
    egp = amount * 0.33;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Egyptian Pound :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (EGP)\n\n",amount,egp);

    return ;

}

void print_rub_gbp (double amount)
{

    double gbp;
    gbp = amount * 0.0084;       //calculation

    printf("\n\n\t\t\t\tFrom Russian Ruble To Pound sterling :: \n\n");
    printf("\t\t\t\t-->  %0.2lf (RUB) is equivalent to %0.2lf (GBP)\n\n",amount,gbp);

    return ;

}




void print_rub_to_others (double amount)
{

    double money;

    money = amount;

    char input_type;

    printf("\n\n\t\t\t\tPlease Tell Us What Type of CURRENCY You Want to Convert From RUB : : : \n\n\n");


    printf("\tName\t\t\tCurrency ---->\t Input Type");

    printf("\tName\t\t\tCurrency ---->\t Input Type\n\n");



    printf("\tEURO\t\t\tEUR\t ---->\t E");

    printf("\t\tUnited States Dollar\tUSD\t ---->\t D\n\n");


    printf("\tBangladeshi Taka\tBDT\t ---->\t B");

    printf("\t\tJapanese Yen\t\tJPY\t ---->\t J\n\n");


    printf("\tIndian Rupee\t\tINR\t ---->\t I");

    printf("\t\tSouth Korean won\tKRW\t ---->\t K\n\n");


    printf("\tSingapore Dollar\tSGD\t ---->\t S");

    printf("\t\tAustralian Dollar\tAUD\t ---->\t A\n\n");


    printf("\tCanadian Dollar\t\tCAD\t ---->\t C");

    printf("\t\tQatari Riyal\t\tQAR\t ---->\t Q\n\n");


    printf("\tU.A.E Dirham\t\tAED\t ---->\t U");

    printf("\t\tSaudi Riyal\t\tSAR\t ---->\t R\n\n");


    printf("\tSwiss Franc\t\tCHF\t ---->\t F");

    printf("\t\tPakistani Rupee\t\tPKR\t ---->\t P\n\n");


    printf("\tSri Lankan Rupee\tLKR\t ---->\t L");

    printf("\t\tMalaysian Ringgit\tMYR\t ---->\t M\n\n");


    printf("\tEgyptian Pound\t\tEGP\t ---->\t H");

    printf("\t\tPound sterling\t\tGBP\t ---->\t G\n\n");


    char exchange_type;

    printf("\n\t\t\tEnter your choice :::  ");

    scanf(" %c",&exchange_type);

    if ( exchange_type == 'E' || exchange_type == 'e' )
    {

        print_rub_euro (money);

    }
    else if ( exchange_type == 'D' || exchange_type == 'd' )
    {

        print_rub_usd (money);

    }
    else if ( exchange_type == 'B' || exchange_type == 'b' )
    {

        print_rub_bdt (money);

    }
    else if ( exchange_type == 'J' || exchange_type == 'j' )
    {

        print_rub_jpy (money);

    }
    else if ( exchange_type == 'I' || exchange_type == 'i' )
    {

        print_rub_inr (money);

    }
    else if ( exchange_type == 'K' || exchange_type == 'k' )
    {

        print_rub_krw (money);

    }
    else if ( exchange_type == 'S' || exchange_type == 's' )
    {

        print_rub_sgd (money);

    }
    else if ( exchange_type == 'A' || exchange_type == 'a' )
    {

        print_rub_aud (money);

    }
    else if ( exchange_type == 'C' || exchange_type == 'c' )
    {

        print_rub_cad (money);

    }
    else if ( exchange_type == 'Q' || exchange_type == 'q' )
    {

        print_rub_qar (money);

    }
    else if ( exchange_type == 'U' || exchange_type == 'u' )
    {

        print_rub_aed (money);

    }
    else if ( exchange_type == 'R' || exchange_type == 'r' )
    {

        print_rub_sar (money);

    }
    else if ( exchange_type == 'F' || exchange_type == 'f' )
    {

        print_rub_chf (money);

    }
    else if ( exchange_type == 'p' || exchange_type == 'p' )
    {

        print_rub_pkr (money);

    }
    else if ( exchange_type == 'L' || exchange_type == 'l' )
    {

        print_rub_lkr (money);

    }
    else if ( exchange_type == 'M' || exchange_type == 'm' )
    {

        print_rub_myr (money);

    }
    else if ( exchange_type == 'H' || exchange_type == 'h' )
    {

        print_rub_egp (money);

    }
    else if ( exchange_type == 'G' || exchange_type == 'g' )
    {

        print_rub_gbp (money);

    }
    else
    {

        printf("\n\n\t\t\tYou Input Invalid Conversion Option !!!\n\n");

    }

    printf("\n\n\t\t\t\tDO you want Continue Converting : : : \n\n");

    printf("\t\t\t\tIf you want to Exit This Conversion Please Enter : 0 (ZREO)\n\n");

    printf("\t\t\t\tIf You Want to Continue Conversion Please Enter : 1 (ONE)\n\n");

    printf("\t\t\t\tIf You Want to change the Amount Please Enter : 2 (TWO)\n\n");

    printf("\n\t\t\t\tEnter your choice :::  ");

    int first_choice;

    scanf("%d",&first_choice);



    if ( first_choice == 1 )
    {

        print_rub_to_others (amount);

    }
    else if ( first_choice == 2 )
    {

        amount = get_amount();
        print_rub_to_others (amount);

    }
    else
    {

        return ;

    }


    return ;


}








void invalid_input (double amount)
{
    printf("\n\n\t\t\t\tYou Entered Invalid Conversion Option !!!\n\n");

    printf("\n\t\t\t\tPlease Enter a Valid Input Currency Type ::  \n\n");

    char new_input ;

    new_input = get_type_of_amount ();

    condition (amount , new_input);


    return;


}








void condition (double amount, char amount_type)
{

    double money ;

    money = amount ;

    char input_type;

    input_type = amount_type ;

    if ( input_type == 'E' || input_type == 'e' )
    {

        print_eur_to_others (money);

    }
    else if ( input_type == 'G' || input_type == 'g' )
    {

        print_gbp_to_others (money);

    }
    else if ( input_type == 'B' || input_type == 'b' )
    {

        print_bdt_to_others (money);

    }
    else if ( input_type == 'J' || input_type == 'j' )
    {

        print_jpy_to_others (money);

    }
    else if ( input_type == 'I' || input_type == 'i' )
    {

        print_inr_to_others (money);

    }
    else if ( input_type == 'K' || input_type == 'k' )
    {

        print_krw_to_others (money);

    }
    else if ( input_type == 'S' || input_type == 's' )
    {

        print_sgd_to_others (money);

    }
    else if ( input_type == 'A' || input_type == 'a' )
    {

        print_aed_to_others (money);

    }
    else if ( input_type == 'C' || input_type == 'c' )
    {

        print_cad_to_others (money);

    }
    else if ( input_type == 'Q' || input_type == 'q' )
    {

        print_qar_to_others (money);

    }
    else if ( input_type == 'U' || input_type == 'u' )
    {

        print_aed_to_others (money);

    }
    else if ( input_type == 'R' || input_type == 'r' )
    {

        print_sar_to_others (money);

    }
    else if ( input_type == 'F' || input_type == 'f' )
    {

        print_chf_to_others (money);

    }
    else if ( input_type == 'p' || input_type == 'p' )
    {

        print_pkr_to_others (money);

    }
    else if ( input_type == 'L' || input_type == 'l' )
    {

        print_lkr_to_others (money);

    }
    else if ( input_type == 'M' || input_type == 'm' )
    {

        print_myr_to_others (money);

    }
    else if ( input_type == 'H' || input_type == 'h' )
    {

        print_egp_to_others (money);

    }
    else if ( input_type == 'N' || input_type == 'n' )
    {

        print_rub_to_others (money);

    }
    else if ( input_type == 'D' || input_type == 'd' )
    {

        print_usd_to_others (money);

    }
    else
    {

        //printf("\n\n\t\t\tYou Input Invalid Conversion Option !!!\n\n");

        invalid_input (amount);
        return ;

    }

    printf("\n\n\t\t\t\tDo You Want to Continue By Changing the Amount or Input Currency type: \n\n");

    printf("\t\t\t\t\tPress 1 to change the Amount \n");

    printf("\t\t\t\t\tPress 0 to Exit or Change Input Currency type of The Program \n");


    int choice;

    printf("\n\n \t\t\t\t Enter your choice :::  ");

    scanf("%d",&choice);


    if( choice != 1 )
    {

        printf("\n\n\t\t\t\tDo You Want to Continue By Changing the Input Currency Type ::  \n\n");

        printf("\t\t\t\t\tPress 1 to change the Currency Type \n");

        printf("\t\t\t\t\tPress 0 to EXIT the Program \n");


        int second_choice;

        printf("\n\n \t\t\t\t Enter your choice :::  ");

        scanf("%d",&second_choice);


        if(second_choice == 1)
        {

            input_type = get_type_of_amount();

            condition (money,input_type);

        }
        else
        {

            return;

        }
    }
    else
    {


        money = get_amount() ;

        printf("\n\n\t\t\tDo You Want to Continue By Changing the Input Currency Type ::  \n\n");

        printf("\t\t\t\t\tPress 1 to change the Currency Type \n");

        printf("\t\t\t\t\tPress 0 to Not to Change The Input Conversion Type the Program \n");


        int second_choice;

        printf("\n\n \t\t\t\t Enter your choice :::  ");

        scanf("%d",&second_choice);


        if(second_choice == 1)
        {

            input_type = get_type_of_amount();

            condition (money,input_type);

        }
        else
        {

            condition(money,input_type);

        }


    }



    return ;


}





int main()
{
    double amount = 0;

    char type;


    amount = get_amount();


    type = get_type_of_amount();


    condition(amount,type);



    return 0;


}


