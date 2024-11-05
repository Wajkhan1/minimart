#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int t=0,tries,ch1,ch2,ch3,line_num,find_result;
	char temp[512],search[80];
	
							 printf("\nInitiating Search protocol \n");
									FILE *fsp;
									fsp= fopen("C:\\Users\\User\\Desktop\\STOCKCSV.csv", "r");
								    line_num = 1;
									find_result = 0;
									printf("enter your desired product\t");
									scanf("%s",search);
									
								
									while(fgets(temp, 512, fsp) != NULL) {
										if((strstr(temp,search)) != NULL) {
											printf("A match found on line: %d\n", line_num);
											printf("\n%s\n", temp);
											find_result++;
										}
										line_num++;
									}
								
									if(find_result == 0) {
										printf("\nSorry, couldn't find a match.\n");
									}
								
									fclose(fsp);
					           
}