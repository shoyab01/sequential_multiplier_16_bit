#include<stdio.h> //including stdio.h header file
#include<math.h> //including math.h header file
long int a,b,a1,b1; //declaring long integer variables
int r1,r2,i,j,t,c=0,n=0; //declaring integer variables and initializing some of the variables
int l1=0,l22=0,as=0,l11=0,ll=0; //declaring integer variables and initializing some of the variables
int qq=0,pen=0,z=0,pe=0; //declaring integer variables and initializing some of the variables
int anum[16]={0},anum1[16]={0},bnum[16]={0},temp[16]={0},res[32]={0},tem[16]={0};  //declaring arrays of sizes 16 and 32
void binary(); //function declaration of no return type to convert given decimal number to binary
void shift(); //function declaration of no return type to shift the bits to right side by on bit
void add();  //function declaration of add function to add two binary numbers
void decimal();//function declaration of decimal function to convert the binary answer into decimal value
int main()  //start of the main function with int return type
{
    printf("enter any 2 Decimal Numbers :\n"); //asking the user to enter any two Decimal Numbers
    printf("A:"); //prints 'A' on the screen
    scanf("%d",&a1); //takes input as a1 from the user
    printf("\n"); //new line
    printf("B:"); //prints 'B' on the screen
    scanf("%d",&b1); //takes input as b1 from the user
    printf("\n");//new line
    a=a1; //assigning value of a1 to a
    b=b1; //assigning value of b1 to b
    binary(); //binary() function calling to convert decimal to binary
    while(bnum[pe] != 1) //while loop for incrementing pe value
    {
        pe++;
    }
    while(anum[l11] != 1) //while loop for incrementing l11 value
    {
        l11++;
    }
    while(bnum[l22] != 1) //while loop for incrementing l222 value
    {
        l22++;
    }
    for(i=0;i<16;i++) //for loop for copying array anum[] values into array tem[]
    {
        tem[i]=anum[i];
    }
    for(i=0;i<16;i++) //for loop for initializing anum[] array elements to 0
    {
        anum[i]=0;
    }
    while(anum[l1] != 1) //while loop for incrementing l1 value
    {
        l1++;
    }

    for(i=0;i<16;i++) //for loop for copying tem[] array elements to anum1[] array
    anum1[i]=tem[i];
    while(anum1[pen] != 1) //while loop for incrementing pen value
    {
        pen++;
    }
    printf("\n\nExpected Product: %d\n\n",a*b); //printf statement for printing a*b
    printf("16 BIT SEQUENTIAL MULTIPLICATION:\n");
    printf("C\t\tA\t\t\tB\n");
    printf("%d\t",c);
    for(i=0;i<16;i++) //for loop for printing anum[] array values
    {
        printf("%d",anum[i]);
    }
    printf("\t"); //tab space
    for(i=0;i<16;i++) //printf statement for printing bnum[] array values
    {
        printf("%d",bnum[i]);
    }
    if(l11<l22) //if condition
    {
        ll=l11;
    }
    else
    {
        ll=l22;
    }

    printf("\n\nSTART:\n1st:---------------------------------------------\n");
    printf("C\t\tA\t\t\tB\n");
    printf("%d\t",c);
    if(bnum[15] == 0) //if condition to check whether bnum[15] == 0 or not
    {


    for(i=0;i<16;i++) //for loop for printing values of anum[] array
    {
        printf("%d",anum[i]);
    }
    printf("\t");
    for(i=0;i<16;i++) //for loop for printing bnum[] array values
    {
        printf("%d",bnum[i]);
    }
    printf("    [NO ADD]\n");
    shift(); //shift() function calling
    }
    else
    {

    add(); //add() function calling
    shift(); //shift() function calling
    }
    int asd; //declaring variable asd of int type
    asd=15-ll;
    for(j=0;j<15-l22;j++)
    {

        printf("%d:-----------------------------------------\n",j+2);
        if(bnum[15]==0)
        {
            printf("C\t\tA\t\t\tB\n");
            printf("%d\t",c);
            for(i=0;i<16;i++) //for loop for printing anum[] array values
            {
            printf("%d",anum[i]);
            }
            printf("\t");
            for(i=0;i<16;i++) //for loop for printing bnum[] array elements
            {
            printf("%d",bnum[i]);
            }
            printf("    [NO ADD]\n");
            shift();  //calling shift() function
        }
        else if(bnum[15]==1) //else if condition to check whether bnum[15] == 1 or not
        {
            add(); //calling add() function
            shift(); //calling shift() function
        }
    }
    printf("************************************************\n\nResultant answer in binary is:\n");
    pe=16-l22;
    for(i=0;i<pe;i++) //for loop for copying bnum[] array values yo res[] array
    {
        res[31-i]=bnum[15-i];
    }
    z=31-pe;
    pen=16-pen;
    for(i=0;i<pen;i++) //for loop for copying anum[] array values into res[] array
    {
        res[z-i]=anum[15-i];
    }
    for(i=0;i<32;i++) //for loop for printing res[] array values which is the final answer
    {
        printf("%d",res[i]);
    }
   printf("\n");
   decimal(); //calling decimal[] function
    return 0; //returning 0
}

void binary() //binary() function definition with no return type
{
    for(i=0;i<16;i++) //for loop for calculation
    {
      r1=a1%2;
      a1=a1/2;
      anum[i]=r1;
    }
    for(i=0;i<8;i++) //for loop for swapping in anum[] array
    {
        t=anum[i];
        anum[i]=anum[15-i];
        anum[15-i]=t;
    }
    for(i=0;i<16;i++)
    {
      r2=b1%2;
      b1=b1/2;
      bnum[i]=r2;
    }
    for(i=0;i<8;i++) //for loop for swapping in bnum[] array
    {
        t=bnum[i];
        bnum[i]=bnum[15-i];
        bnum[15-i]=t;
    }
    printf("Binary Equivalents are:\n");
    printf("A-EQUIVALENT:");
    for(i=0;i<16;i++) //for loop for printing anum[] array values
      printf("%d",anum[i]);
    printf("\n");
    printf("B-EQUIVALENT:");
    for(i=0;i<16;i++) //for loop for printing bnum[] array values
      printf("%d",bnum[i]);

}


void shift() //shift() function declaration with no return type
{
    for(i=15;i>0;i--) //for loop for shifting elements in bnum[] array towards right side by one bit position
    {
        bnum[i]=bnum[i-1];
    }
    bnum[l22]=anum[15]; //copying anum[15] element value to bnum[l22] element value
    for(i=15;i>0;i--) //for loop for shifting elements in anum[] array towards right side by one bit position
    {
        anum[i]=anum[i-1];
    }
    if(c==1) //if condition to check whether c==1 or not
    {
      anum[as+1]=c;
    }

    c=0;

    /*printf("\n\nThe resultant after shifting is :\n");
    printf("C\t\tA\t\t\tB\n");*/
    printf("%d\t",c);
    for(i=0;i<16;i++) //for loop for printing anum[] array values
    {
        printf("%d",anum[i]);
    }
    printf("\t");
    for(i=0;i<16;i++) //for loop for printing bnum[] array values
    {
        printf("%d",bnum[i]);
    }
    printf("    [SHIFT]\n");
}

void add() //add() function definition with no return type
{

    if(bnum[15] == 1 && qq == 0) //if condition to check whether bnum[15]==1 and qq==0 or not
    {
        for(i=0;i<16;i++)  //for loop for copying tem[] array values into anum[] array values
        {
            anum[i]=tem[i];
        }
    qq++;
    printf("C\t\tA\t\t\tB\n");
    printf("%d\t",c);
    for(i=0;i<16;i++) //for loop for printing anum[] array values
    {
        printf("%d",anum[i]);
    }
    printf("\t");
    for(i=0;i<16;i++) //for loop for printing bnum[] array values
    {
        printf("%d",bnum[i]);
    }
    printf("    [ADD]\n");
    }
    else //else condition
    {


    int l2=0,l=0,m=0; //declaring and initializing int type values of l2=0,l=0,m=0
    while(anum1[l2] != 1) //while loop for incrementing l2 value
    {
        l2++;
    }
    if(l1<l2) //if condition to check whether l1<l2 or not
    {
        l=l1;
    }
    else //else condition
    {
        l=l2;
    }
    for(i=15;i>=0;i--) //for loop for adding anum[] array and anum1[] array along with carry 'c'
    {
        temp[i]=anum[i]+anum1[i]+c;
        if(temp[i]>=2) //if condition for checking temp[i]>=2 and if so the value of c=1
        {
            c=1;
        }
        else //else condition c=0
        {
            c=0;
        }
        temp[i]=temp[i]%2; //calculating temp[i]%2 and storing it in temp[] array
    }
    for(i=0;i<16;i++) //for loop for copying temp[] array values into anum[] array
    {
        anum[i]=temp[i];
    }
    while(anum[m] != 1) //while loop for incrementing m value until anum[m]==1
    {
        m++;
    }
    as=m; //assigning m value to as
    if(m<l) //if condition to check whether m<1 and if so anum[m]=0 and c=1 must be done
    {
        anum[m]=0;
        c=1;
    }
   /* printf("\n\nthe resultant after adding is:\n");*/
    printf("C\t\tA\t\t\tB\n");
    printf("%d\t",c);
    for(i=0;i<16;i++) //for loop for printing anum[] array values
    {
        printf("%d",anum[i]);
    }
    printf("\t");
    for(i=0;i<16;i++) //for loop for printing bnum[] array values
    {
        printf("%d",bnum[i]);
    }
    printf("    [ADD]\n");
    }
}

void decimal() //decimal() function definition with no return type
{
    int ab=1,fs=0; //declaring ab=1 and fs=1 values of int type
    for(i=0;i<32;i++) //for loop for converting binary number to decimal number
    {
        ab=1;
        for(j=0;j<i;j++)
            ab=ab*2;
        fs=fs+(res[31-i]*ab);
    }
    printf("\nResultant answer in Decimal value = %d",fs); //printing decimal value fs of some binary number
}
