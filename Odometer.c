//
//  main.c
//  Learning C(1)
//
//  Created by Veer Patel on 5/17/20.
//  Copyright © 2020 Veer Patel. All rights reserved.
//

#include <stdio.h>

int main()
{
    double StartRead = 0.0, EndRead = 0.0, TotalMiles, reimbursement;
    
    printf("Enter beginning odometer reading=> ");
    scanf("%lf", &StartRead);
    printf("Enter ending odometer reading=> ");
    scanf("%lf", &EndRead);
    TotalMiles = EndRead-StartRead;
    printf("You travelled %0.1f miles \n", TotalMiles);
    reimbursement=0.35*TotalMiles;
    printf("At $0.35 per mile, your reimbursement is $%0.2f.", reimbursement);
    
    return 0;
}
