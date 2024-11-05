#include <stdio.h>
#include<stdlib.h>
#include<string.h>

	struct customer
	{
		char customer[80];
		int customernumber;
	}cus;
	
	struct stock
	{
		char product[80];
		int barcode;
		int price;
		int pcs;
	}st;
int main()
{
	
	int t,tries,ch1,ch2,ch3,line_num,find_result;
	char temp[512],search[80];
	printf("\t\t\t\t-----KHUSHBAKHT MINI MART MANAGEMENT SYSTEM-----\n\n");
	char username[10] , password[20];
    
	
	
	printf("\t\t\t\tUsername:  ");
	scanf("%s",username);
	while(t<10){

	printf("\t\t\t\tPassword:  ");
	scanf("%s",password);
	
	if(strcmp(username , "admin") == 0)
	{
		if(strcmp(password , "beta") == 0)
		{
			printf("Logged in succesfully...\n");
			sleep(2);
            system("cls");		
	while(ch1>-1&&ch1<3){
   printf("\t\t\t\t-----KHUSHBAKHT MINI MART MANAGEMENT SYSTEM-----\n\n");	
		printf("\n1. Display (read)\n");
		printf("2. Update\n");
		printf("3. EXIT\n\n");
		
		scanf("%d",&ch1);
			system("cls");
		switch(ch1)
		{
			case 1:
			printf("\t\t\t\t-----KHUSHBAKHT MINI MART MANAGEMENT SYSTEM-----\n\n"); 
					printf("\nPress 1 To Display All Customer Information\n");
					printf("Press 2 To Display All Stock Information\n");
					printf("Press 3 To Display specific Customer Information\n");
					printf("Press 4 To Display specific Stock Information\n");
					printf("Press 0 To Display RETURN TO MAIN MENU\n\n");
					
					scanf("%d",&ch2);
						system("cls");		
					if (ch2 >= 0 && ch2 <=4)
					{
					switch(ch2)
						{
							case  1: printf("\nDisplaying all Customer info: \n");
								FILE *fc;
								fc= fopen("C:\\Users\\User\\Desktop\\customer.csv", "r");
								
								char c= fgetc(fc);
								 while( c != EOF){
								 	printf("%c",c);
								 	c = fgetc(fc);
									
								 }
								
								fclose(fc);		         	
								break;
					         	system("cls");
							case  2: printf("\nDisplaying all Stock info: \n");
									 FILE *fs;
								fs= fopen("C:\\Users\\User\\Desktop\\STOCKCSV.csv", "r");
								
								char c1= fgetc(fs);
								 while( c1 != EOF){
								 	printf("%c",c1);
								 	c1 = fgetc(fs);
									
								 }
								
								fclose(fs);
								break;	
								system("cls");
							case  3: printf("\nInitiating Search protocol \n");
									FILE *fsc;
	
									fsc= fopen("C:\\Users\\User\\Desktop\\customer.csv", "r");
								    line_num = 1;
									find_result = 0;
									printf("enter your customer name to search\t");
									scanf("%s",search);
									
								
									while(fgets(temp, 512, fsc) != NULL) {
										if((strstr(temp,search)) != NULL) {
											printf("A match found on line: %d\n", line_num);
											printf("\n%s\n", temp);
											find_result++;
										}
										line_num++;
									}
								
									if(find_result == 0) {
										printf("\nSorry, couldn't find any customer with that name.\n");
									}
								
									fclose(fsc);
								}
					            break;	
								system("cls");
					
					
							 case  4: printf("\nInitiating Search protocol \n");
									FILE *fsp;
									fsp= fopen("C:\\Users\\User\\Desktop\\STOCKCSV.csv", "r");
								    line_num = 1;
									find_result = 0;
									printf("enter your desired product\t");
									scanf("%s",search);
									
								
											printf("A match found on line: %d\n", line_num);
									printf("\n%s\n", temp);
										find_result++;
									
										line_num++;
								}
								
								if(find_result == 0) {
										printf("\nSorry, couldn't find a match.\n");
									}
								
								
					            break;	
								stem("cls");
					
					break;	         
					
			
					{
						printf("Invalid Entry!\n\n");
						break;
					}	
			
			break;
		
		
			case 2:
				printf("\t\t\t\t-----KHUSHBAKHT MINI MART MANAGEMENT SYSTEM-----\n\n");
					printf("\nPress 1 To Update [Existing] Customer Information\n");
					printf("Press 2 To Add a New Customer Information\n");
					printf("Press 3 To Update [Existing] Stock Information\n");
					printf("Press 4 To Add a New Stock Information\n");
					printf("Press 0 To RETURN TO MAIN MENU\n\n");
					
	            	scanf("%d",&ch2);
	            		system("cls");
	            	if (ch2 >= 0 && ch2 <=4)
					{
						switch(ch2)
						{	
							case  1: printf("\nUPDATE EXISTING CUSTOMER!!!\n\n");
					        FILE *fuc;
							
							fuc= fopen("C:\\Users\\User\\Desktop\\customer.csv", "r");
						    line_num = 1;
							find_result = 0;
							printf("enter name of customer to update\t");
							scanf("%s",search);
							
						
							while(fgets(temp, 512, fuc) != NULL) {
								if((strstr(temp,search)) != NULL) {
									printf("A match found on line: %d\n", line_num);
									printf("\n%s\n", temp);
									
									
									find_result++;
									 printf("\nADD NEW CUSTOMER!!!\n\n");
											              
														
										
										printf("enter customer name\t");
										scanf("%s",cus.customer);
										printf("enter customer mobile number\t");
										scanf("%d",&cus.customernumber);
										fprintf(fuc,"%s,%d\n",cus.customer,cus.customernumber);
										
								}
								line_num++;
							}
						
							if(find_result == 0) {
								printf("\nSorry, couldn't find a match.\n");
							}
						
							fclose(fuc);

							
							
								break;
					        		system("cls");
							case  2: printf("\nADD NEW CUSTOMER!!!\n\n");
					              
								  	FILE *fac;
										fac= fopen("C:\\Users\\User\\Desktop\\customer.csv", "a");
									printf("enter customer name\t");
									scanf("%s",cus.customer);
									printf("enter customer mobile number\t");
									scanf("%d",&cus.customernumber);
								fprintf(fac,"%s,%d\n",cus.customer,cus.customernumber);
									fclose(fac);
									break;
									
					        		system("cls");
							case  3: printf("\nUPDATE EXISTING STOCK!!!\n\n");
								FILE *fus;
									
									fus= fopen("C:\\Users\\User\\Desktop\\STOCKCSV.csv", "r");
								    line_num = 1;
								    find_result = 0;
									printf("enter desired product to update\t");
									scanf("%s",search);
									
								
									while(fgets(temp, 512, fus) != NULL) {
										if((strstr(temp,search)) != NULL) {
											printf("A match found on line: %d\n", line_num);
											printf("\n%s\n", temp);
											
											
											find_result++;
											 printf("\nupdate Product info!!!\n\n");
												printf("enter product name\t");
												scanf("%s",st.product);
												printf("enter product barcode\t");
												scanf("%d",&st.barcode);
												printf("enter  product price\t");
												scanf("%d",&st.price);
												printf("enter products pices\t");
												scanf("%d",&st.pcs);
												fprintf(fus,"\n%s,%d,%d,%d\n",st.product,st.barcode,st.price,st.pcs);
												
										}
										line_num++;
									}
								
									if(find_result == 0) {
										printf("\nSorry, couldn't find a match.\n");
									}
								
									fclose(fus);
				
				
					        	break;
					        		system("cls");
							case  4: printf("\nADD NEW STOCK!!!\n\n");
					        	FILE *fst;
								fst= fopen("C:\\Users\\User\\Desktop\\STOCKCSV.csv", "a");
								printf("enter product name\t");
								scanf("%s",st.product);
								printf("enter barcode number\t");
								scanf("%d",&st.barcode);
								printf("enter product price\t");
								scanf("%d",&st.price);
								printf("enter number of pieces\t");
								scanf("%d",&st.pcs);
								
								fprintf(fst,"%s,%d,%d,%d\n",st.product,st.barcode,st.price,st.pcs);
								
								fclose(fst);
								break;
					        		system("cls");
					        case  0: 
								break;	
						}
					break;	         
					}
					
					else
					{
						printf("Invalid Entry!\n\n");
						break;
					}	
	            	
			break;
		

}
	}
		}else
		{
			printf("Invalid Password!\n");
		}
	
	}
	else
	{
		printf("Invalid Username!\n");
	}
 t++;
 tries=10-t;
 printf("you have only %d more",tries);

}
}