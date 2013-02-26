#include<stdio.h>

int evenOperation (int n);
int oddOperation (int n);
void endResult(int stepCounter,int stepCounterEven,int stepCounterOdd);

int main(){
    int n;
    int stepCounter=0;
	int stepCounterEven =0;
    int stepCounterOdd =0;
    printf("The hailsone program\n\n");
    printf("Enter n = ");
    scanf("%d",&n);
    if ((n%2) == 0){
    /*loop for even num from user*/
        while (n!=1){
			n = evenOperation(n);
			stepCounter++;
			stepCounterEven++;
			if ((n==1)){
               endResult(stepCounter,stepCounterEven,stepCounterOdd);
               break;
			}else if((n%2)!=0){
			   n = oddOperation(n);
			   stepCounter++;
               stepCounterOdd++;
            }
	    }
     }else{
	/*loop for odd num from user*/
	    while (n!=1){
            n = oddOperation(n);
			stepCounter++;
            stepCounterOdd++;
			while (n!=1){
				if ( n%2==0){
          			n = evenOperation(n);
		         	stepCounter++;
		           	stepCounterEven++;
				} else {
					n = oddOperation(n);
			        stepCounter++;
                    stepCounterOdd++;
                } 
       		}
            endResult(stepCounter,stepCounterEven,stepCounterOdd);
   	    }
    }
    
    getch();
 }

int evenOperation(int n){
   	int o =n;
    printf("%d is even,",n);
	n/=2;
    printf("so i take half  %d\n",n);
    return (n);
}

int oddOperation(int n){
    int o =n;
	printf("%d is odd,",n);
	n=(3*n)+1;
	printf(" so i make 3n+1 %d\n",n);
	return (n);
}

void endResult(int stepCounter,int stepCounterEven,int stepCounterOdd){
    printf("ok than, it end here.\n\n");
    printf("the operation of dividing by 2 operation before reach 1 :: %d time\n",stepCounterEven);
    printf("the operation of making 3n+1 before reach 1             :: %d time\n",stepCounterOdd);
    printf("the total proses taken to reach 1                       :: %d.",stepCounter);     
 }
