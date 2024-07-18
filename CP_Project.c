// Computer Programming Project

#include<stdio.h>

struct coffee{
    int srno;
    char name[20];
    int pricetall;
    int pricegrande;
    int priceventi;
};

struct coffee d1={1,"Black Coffee       ", 200, 225, 250};
struct coffee d2={2,"Latte              ", 250, 275, 300};
struct coffee d3={3,"Espresso           ", 300, 325, 350};
struct coffee d4={4,"Classic  Frappe    ", 300, 325, 350};
struct coffee d5={5,"Cappuccino         ", 300, 325, 350};
struct coffee d6={6,"Iced Mocha         ", 300, 325, 350};
struct coffee d7={7,"Cold Coffee        ", 300, 325, 350};
struct coffee d8={8,"Iced Americano     ", 300, 325, 400};

void printmenu();
int pricetotal();

int main(){
 
    printf("-----------------------------------------------------------\n");
    printf("                         WELCOME                           \n");
    printf("                           to                              \n");
    printf("                     Barista Coffee                        \n");
    printf("-----------------------------------------------------------\n");

    printmenu();

    int n,x=1,quantity,size;
    char bill[100];
    int price=0;
    while (x==1){
        
        printf("\nWhat would you like to order (Enter no.)             :  ");
        scanf("%d",&n);
        while(n>8 || n<1){
            printf("\nInvalid Input....\nPlease try again\n");
            printf("\nWhat would you like to order (Enter no.)             :  ");
            scanf("%d",&n);
        }
        printf("Enter Size No. (1. Tall/ 2. Grande/ 3. Venti)        :  ");
        scanf("%s",&size);
        printf("Quantity                                             :  ");
        scanf("%d",&quantity);
        printf("\n");
        printf("Would you like to order anything else (1.Yes/2.No)   :  ");
        scanf("%d",&x);

        switch(n){
            case 1:
            price+=pricetotal(n,size,quantity);
            break;
            case 2:
            price+=pricetotal(n,size,quantity);
            break;
            case 3:
            price+=pricetotal(n,size,quantity);
            break;
            case 4:
            price+=pricetotal(n,size,quantity);
            break;
            case 5:
            price+=pricetotal(n,size,quantity);
            break;
            case 6:
            price+=pricetotal(n,size,quantity);
            break;
            case 7:
            price+=pricetotal(n,size,quantity);
            break;
            case 8:
            price+=pricetotal(n,size,quantity);
            break;
            default:
            printf("Invalid Choice");
        }
        
    }
    char payment;
    float amount;

    float totalbill;
    totalbill = price + price * 0.18;

    printf("\n\n##########################################\n");
    printf("                   BILL                   \n");
    printf("##########################################\n\n");
    printf("Your Bill is          :  %d\n",price);
    printf("GST                   :  18%%\n");
    printf("Amount to be paid     :  %.2f\n\n",totalbill);

    printf("How would you like to pay (Cash/Card/Online Payment) : ");
    scanf("%s",&payment);
    printf("Enter Amount     :  ");
    scanf("%f",&amount);

    while(amount<totalbill){
        printf("\nTHE TRANSACTION CANNOT BE PROCESSED...\nAMOUNT TO BE PAID IS MORE THAN THE DEPOSITED AMOUNT\n\n");
        printf("Enter Amount     :  ");
        scanf("%f",&amount);
    }

    printf("Amount Returned  :  %.2f\n\n",amount-totalbill);
    printf("Your Order will be ready in 10 mins.\n\n");
    printf("----------------------- THANK YOU -----------------------");

    return 0;
}

void printmenu(){

    printf("\n                  Have a look at our MENU\n\n");
    printf("Sr No.          ITEM             Tall     Grande      Venti\n\n");
    printf("  %d.        %s  %d        %d        %d\n",d1.srno,d1.name,d1.pricetall,d1.pricegrande,d1.priceventi);
    printf("  %d.        %s  %d        %d        %d\n",d2.srno,d2.name,d2.pricetall,d2.pricegrande,d2.priceventi);
    printf("  %d.        %s  %d        %d        %d\n",d3.srno,d3.name,d3.pricetall,d3.pricegrande,d3.priceventi);
    printf("  %d.        %s  %d        %d        %d\n",d4.srno,d4.name,d4.pricetall,d4.pricegrande,d4.priceventi);
    printf("  %d.        %s  %d        %d        %d\n",d5.srno,d5.name,d5.pricetall,d5.pricegrande,d5.priceventi);
    printf("  %d.        %s  %d        %d        %d\n",d6.srno,d6.name,d6.pricetall,d6.pricegrande,d6.priceventi);
    printf("  %d.        %s  %d        %d        %d\n",d7.srno,d7.name,d7.pricetall,d7.pricegrande,d7.priceventi);
    printf("  %d.        %s  %d        %d        %d\n",d8.srno,d8.name,d8.pricetall,d8.pricegrande,d8.priceventi);
}


int pricetotal(int no, int s, int q){
    int total=0;
    if(no==1){
        if(s==1){
            total= (d1.pricetall)*q;
            return total;
        }else if(s==2){
            total= (d1.pricegrande)*q;
            return total;
        }else{
            total= (d1.priceventi)*q;
            return total;
        }
    }
    else if(no==2){
        if(s==1){
            total= (d2.pricetall)*q;
            return total;
        }else if(s==2){
            total= (d2.pricegrande)*q;
            return total;
        }else{
            total= (d2.priceventi)*q;
            return total;
        }
    }
    else if(no==3){
        if(s==1){
            total= (d3.pricetall)*q;
            return total;
        }else if(s==2){
            total= (d3.pricegrande)*q;
            return total;
        }else{
            total= (d3.priceventi)*q;
            return total;
        }
    }
    else if(no==4){
        if(s==1){
            total= (d4.pricetall)*q;
            return total;
        }else if(s==2){
            total= (d4.pricegrande)*q;
            return total;
        }else{
            total= (d4.priceventi)*q;
            return total;
        }
    }
    else if(no==5){
        if(s==1){
            total= (d5.pricetall)*q;
            return total;
        }else if(s==2){
            total= (d5.pricegrande)*q;
            return total;
        }else{
            total= (d5.priceventi)*q;
            return total;
        }
    }
    else if(no==6){
        if(s==1){
            total= (d6.pricetall)*q;
            return total;
        }else if(s==2){
            total= (d6.pricegrande)*q;
            return total;
        }else{
            total= (d6.priceventi)*q;
            return total;
        }
    }
    else if(no==7){
        if(s==1){
            total= (d7.pricetall)*q;
            return total;
        }else if(s==2){
            total= (d7.pricegrande)*q;
            return total;
        }else{
            total= (d7.priceventi)*q;
            return total;
        }
    }
    else if(no==8){
        if(s==1){
            total= (d8.pricetall)*q;
            return total;
        }else if(s==2){
            total= (d8.pricegrande)*q;
            return total;
        }else{
            total= (d8.priceventi)*q;
            return total;
        }
    }
    else{
        printf("Invalid Input");
    }
    
}