
/* the official documintation*/
/*
*   @file patterns
*   @version 2.0.0 small change will be 1.0.1 normal change 1.1.0 full change 2.0.0
*   @brief      Task
*   @details    it contains all 30 patterns
*   @author     Yousef Khaled Omar Mahmoud
*/

/*========================================================================
*   Project             : patternns
*   Platform            : CodeBlocks IDE
*   Peripheral          :
*   SW version          :
========================================================================*/

/* ******************** Includes Section Start ************************ */
#include <stdio.h>
#include <stdlib.h>
/* ******************** Includes Section End ************************** */

/* ******************** Defintion Section Start *********************** */
//#define sign '*'
/* ******************** Defintiion Section End ************************ */

/* ******************** Global Variable Section Start ****************** */
//const char sign='*';
/* ******************** Global Variable Section End ******************** */

/* ******************** Global Defintion Section Start ***************** */

/* ******************** Global Defintion Section End ******************* */

/* ******************** Sub-program Decleration Section Start ********** */
void solid_rectangle(unsigned int row,unsigned int column, char sign);
void hollow_rectangle(unsigned int row,unsigned int column,char sign);

void half_pyramid(unsigned int row,char sign);
void inverted_half_pyramid(unsigned int row,char sign);

void hollow_half_pyramid(unsigned int row,char sign);
void hollow_inverted_half_pyramid(unsigned int row,char sign);

void full_pyramid(unsigned int row,char sign);
void inverted_full_pyramid(unsigned int row,char sign);

void hollow_full_pyramid(unsigned int row,char sign);
void hollow_inverted_full_pyramid(unsigned int row,char sign);

void numbered_half_pyramid(unsigned int row);
void numbered_inverted_half_pyramid(unsigned int row);

void hollow_numbered_half_pyramid(unsigned int row);
void hollow_numbered_inverted_half_pyramid(unsigned int row);

void numbered_full_pyramid(unsigned int row);
void numbered_inverted_full_pyramid(unsigned int row);

void hollow_numbered_full_pyramid(unsigned int row);
void hollow_numbered_inverted_full_pyramid(unsigned int row);

void palindrome_numbered_half_pyramid(unsigned int row);
void palindrome_numbered_inverted_half_pyramid(unsigned int row);

void palindrome_alphabetic_half_pyramid(unsigned int row);
void palindrome_alphabetic_inverted_half_pyramid(unsigned int row);

void palindrome_numbered_full_pyramid(unsigned int row);
void palindrome_numbered_inverted_full_pyramid(unsigned int row);

void palindrome_alphabetic_full_pyramid(unsigned int row);
void palindrome_alphabetic_inverted_full_pyramid(unsigned int row);

void palindrome_numbered_stared_full_pyramid(unsigned int row,char sign);
void palindrome_numbered_stared_inverted_full_pyramid(unsigned int row, char sign);

void solid_diamond(unsigned int row,char sign);
void hollow_diamond(unsigned int row,char sign);

void solid_half_diamond(unsigned int row,char sign);
void hollow_half_diamond(unsigned int row,char sign);

void solid_numbered_half_diamond(unsigned int row,unsigned int num,char sign);
void solid_numbered_stared_half_diamond(unsigned int row,char sign);

void palindrome_numbered_stared_half_diamond(unsigned int row,char sign);
void palindrome_numbered_stared_covered_half_diamond(unsigned int row,char sign);

void floyd_numbered_half_pyramid(unsigned int row);
void pascal_numbered_half_pyramid(unsigned int row);

void hollow_diamond_inscribed(unsigned int row,char sign);
void butterfly(unsigned int row,char sign);

void diagonal_rectangle(unsigned int row,char sign);
void diagonal_diamond(unsigned int row,char sign);

void right_arrow(unsigned int row,char sign);
void left_arrow(unsigned int row,char sign);

void solid_rhombus(unsigned int row,unsigned int column, char sign);
void hollow_rhombus(unsigned int row,unsigned int column, char sign);
/* ******************** Sub-program Decleration Section End ************ */

int main()
{   signed int row,column;char sign;
    printf("Enter the Sign to print\n");
    scanf("%c",&sign);
    printf("Enter Number of row\n");
    scanf("%i",&row);
    printf("Enter Number of column\n");
    scanf("%i",&column);
    if(row<=0||column<=0){
        printf("Invalid Input\n");
        return 0;
    }
    printf("Solid Rectangle:\n");
    solid_rectangle(row,column,sign);

    printf("Hollow Rectangle:\n");
    hollow_rectangle(row,column,sign);

    printf("Half Pyramid:\n");
    half_pyramid(row,sign);

    printf("Inverted Half Pyramid:\n");
    inverted_half_pyramid(row,sign);

    printf("Hollow Half Pyramid:\n");
    hollow_half_pyramid(row,sign);

    printf("Hollow Inverted Half Pyramid:\n");
    hollow_inverted_half_pyramid(row,sign);

    printf("Full Pyramid:\n");
    full_pyramid(row,sign);

    printf("Inverted Full Pyramid:\n");
    inverted_full_pyramid(row,sign);

    printf("Hollow Full Pyramid:\n");
    hollow_full_pyramid(row,sign);

    printf("Hollow Inverted Full Pyramid:\n");
    hollow_inverted_full_pyramid(row,sign);

    printf("Numbered Half Pyramid:\n");
    numbered_half_pyramid(row);

    printf("Numbered Inverted Half Pyramid:\n");
    numbered_inverted_half_pyramid(row);

    printf("Hollow Numbered Half Pyramid:\n");
    hollow_numbered_half_pyramid(row);

    printf("Hollow Numbered Inverted Half Pyramid:\n");
    hollow_numbered_inverted_half_pyramid(row);

    printf("Numbered Full Pyramid:\n");
    numbered_full_pyramid(row);

    printf("Numbered Inverted Full Pyramid:\n");
    numbered_inverted_full_pyramid(row);

    printf("Hollow Numbered Full Pyramid:\n");
    hollow_numbered_full_pyramid(row);

    printf("Hollow Numbered Inverted Full Pyramid:\n");
    hollow_numbered_inverted_full_pyramid(row);

    printf("Palindrome Numbered Half Pyramid:\n");
    palindrome_numbered_half_pyramid(row);

    printf("Palindrome Numbered Inverted Half Pyramid:\n");
    palindrome_numbered_inverted_half_pyramid(row);

    printf("Palindrome Alphabetic Half Pyramid:\n");
    palindrome_alphabetic_half_pyramid(row);

    printf("Palindrome Alphabetic Inverted Half Pyramid:\n");
    palindrome_alphabetic_inverted_half_pyramid(row);

    printf("Palindrome Numbered Full Pyramid:\n");
    palindrome_numbered_full_pyramid(row);

    printf("Palindrome Numbered Inverted Full Pyramid:\n");
    palindrome_numbered_inverted_full_pyramid(row);

    printf("Palindrome Alphabetic Full Pyramid:\n");
    palindrome_alphabetic_full_pyramid(row);

    printf("Palindrome Alphabetic Inverted Full Pyramid:\n");
    palindrome_alphabetic_inverted_full_pyramid(row);

    printf("Palindrome Numbered Stared Full Pyramid:\n");
    palindrome_numbered_stared_full_pyramid(row,sign);

    printf("Palindrome Numbered Stared Inverted Full Pyramid:\n");
    palindrome_numbered_stared_inverted_full_pyramid(row,sign);

    printf("Solid Diamond:\n");
    solid_diamond(row,sign);

    printf("Hollow Diamond:\n");
    hollow_diamond(row,sign);

    printf("Solid Half Diamond:\n");
    solid_half_diamond(row,sign);

    printf("Hollow Half Diamond:\n");
    hollow_half_diamond(row,sign);

    printf("Solid Numbered Half Diamond\n");
    solid_numbered_half_diamond(row,column,sign);

    printf("Solid Numbered Stared Half Diamond\n");
    solid_numbered_stared_half_diamond(row,sign);

    printf("palindrome Numbered Stared Half Diamond\n");
    palindrome_numbered_stared_half_diamond(row,sign);

    printf("palindrome Numbered Stared Covered Half Diamond\n");
    palindrome_numbered_stared_covered_half_diamond(row,sign);

    printf("Floyd Numbered Half Pyramid:\n");
    floyd_numbered_half_pyramid(row);

    printf("Pascal Numbered Half Pyramid:\n");
    pascal_numbered_half_pyramid(row);

    printf("Hollow Diamond Inscribed:\n");
    hollow_diamond_inscribed(row,sign);

    printf("Butterfly:\n");
    butterfly(row,sign);

    printf("Diagonal Rectangle:\n");
    diagonal_rectangle(row,sign);

    printf("Diagonal Diamond:\n");
    diagonal_diamond(row,sign);

    printf("Right Arrow:\n");
    right_arrow(row,sign);

    printf("Left Arrow:\n");
    left_arrow(row,sign);

    printf("Solid Rhombus:\n");
    solid_rhombus(row,column,sign);

    printf("Hollow Rhombus:\n");
    hollow_rhombus(row,column,sign);
    return 0;
}

/* ******************** Sub-program Section Start ********************* */
void solid_rectangle(unsigned int row,unsigned int column,char sign){
    for(unsigned int i=0;i<row;i++){
        for(unsigned int j=0;j<column;j++)
            printf("%c ",sign);
        printf("\n");
    }
}

void hollow_rectangle(unsigned int row,unsigned int column,char sign){
    //checks if the input is ok
    if(row<3||column<3){
        printf("Invalid Input\n(The row or column number are small)\n");
        return;
    }
    for(unsigned int i=0;i<row;i++){
        if(i==0||i==row-1){
            for(unsigned int j=0;j<column;j++)
                printf("%c ",sign);
            }
        else{
             printf("%c ",sign);
             for(unsigned int j=0;j<(column-2)*2;j++)
                printf(" ");
             printf("%c",sign);
            }
        printf("\n");
    }
}

void half_pyramid(unsigned int row,char sign){
        //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(unsigned int i=1;i<=row;i++){
        for(unsigned int j=0;j<i;j++)
            printf("%c ",sign);
        printf("\n");
        }
}

void inverted_half_pyramid(unsigned int row,char sign){
        //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(unsigned int i=1;i<=row;i++){
        for(signed int j=row;j>=i;j--)
            printf("%c ",sign);
        printf("\n");
        }
}

void hollow_half_pyramid(unsigned int row,char sign){
    //checks if the input is ok
    if(row<4){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    printf("%c\n",sign);//the top
    unsigned int space_count=1;
    for(unsigned int i=1;i<row-1;i++){
        printf("%c",sign);
        for(unsigned int j=0;j<space_count;j++)
            printf(" ");
        printf("%c",sign);
        printf("\n");
        space_count+=2;
        }
    for(unsigned int i=0;i<row;i++)//the last row
        printf("%c ",sign);
    printf("\n");
}

void hollow_inverted_half_pyramid(unsigned int row,char sign){
    //checks if the input is ok
    if(row<4){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(unsigned int i=0;i<row;i++)//the top
        printf("%c ",sign);
    printf("\n");
    unsigned int space_count=1;
    //to set the space counter
    for(unsigned int i=1;i<row-2;i++)
        space_count+=2;
    for(unsigned int i=1;i<row-1;i++){
        printf("%c",sign);
        for(unsigned int j=0;j<space_count;j++)
            printf(" ");
        printf("%c",sign);
        printf("\n");
        space_count-=2;
        }
    printf("%c",sign);//the last row
    printf("\n");
}

void full_pyramid(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    unsigned int counter=1;
    for(signed int i=row;i>0;i--){
        //prints spaces to let the top point in the center
        for(unsigned int j=1;j<i;j++)
            printf(" ");
        //prints the points and the space between points
        for(unsigned int j=0;j<counter;j++)
            printf("%c ",sign);
        printf("\n");
        counter++;
    }
}

void inverted_full_pyramid(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(signed int i=row;i>0;i--){
        //prints spaces
        for(signed int j=row;j>i;j--)
            printf(" ");
        //prints the points and the space between points
        for(unsigned int j=0;j<i;j++)
            printf("%c ",sign);
        printf("\n");
    }
}

void hollow_full_pyramid(unsigned int row,char sign){
    //checks if the input is ok
    if(row<4){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //the space for top
    for(unsigned int j=1;j<row;j++)
        printf(" ");
    //the top
    printf("%c\n",sign);
    unsigned int space_count=1;
    for(unsigned int i=1;i<row-1;i++){
        //prints spaces to let the top point in the center
        for(unsigned int j=1;j<row-i;j++)
            printf(" ");
        printf("%c",sign);
        //prints the space between points
        for(unsigned int j=0;j<space_count;j++)
            printf(" ");
        printf("%c",sign);
        printf("\n");
        space_count+=2;
    }
    for(unsigned int i=0;i<row;i++)//the bottom
    printf("%c ",sign);
    printf("\n");
}

void hollow_inverted_full_pyramid(unsigned int row,char sign){
    //checks if the input is ok
    if(row<4){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(unsigned int i=0;i<row;i++)//the top
    printf("%c ",sign);
    printf("\n");
    unsigned int space_count=1;
    //to set the space counter
    for(unsigned int i=1;i<row-2;i++)
        space_count+=2;
    for(unsigned int i=1;i<row-1;i++){
        //prints spaces to let the top point in the center
        for(unsigned int j=0;j<i;j++)
            printf(" ");
        printf("%c",sign);
        //prints the space between points
        for(unsigned int j=0;j<space_count;j++)
            printf(" ");
        printf("%c",sign);
        printf("\n");
        space_count-=2;
    }
    //the space for bottom
    for(unsigned int j=1;j<row;j++)
        printf(" ");
    //the bottom
    printf("%c\n",sign);
}

void numbered_half_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(unsigned int i=1;i<=row;i++){
        for(unsigned int j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
        }
}

void numbered_inverted_half_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(signed int i=row;i>0;i--){
        for(unsigned int j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
        }
}

void hollow_numbered_half_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<4){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    printf("1\n");//the top
    unsigned int space_count=1;
    for(unsigned int i=1;i<row-1;i++){
        printf("1");
        for(unsigned int j=0;j<space_count;j++)
            printf(" ");
        //extra space
        if(i>=10){
            unsigned int extra_space;
            if(i==10)//for the first time we declare it
                extra_space=1;
            else//for the rest of rows
                extra_space++;
        for(unsigned int j=0;j<extra_space;j++)
            printf(" ");
            }
        printf("%d",i+1);
        printf("\n");
        space_count+=2;
        }
    for(unsigned int i=0;i<row;i++)//the last row
        printf("%d ",i+1);
    printf("\n");
}

void hollow_numbered_inverted_half_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<4){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(unsigned int i=0;i<row;i++)//the first row
        printf("%d ",i+1);
    printf("\n");
    unsigned int space_count=1;
    //to set the space counter
    for(unsigned int i=1;i<row-2;i++)
        space_count+=2;
    for(unsigned int i=1;i<row-1;i++){
        printf("1");
        for(unsigned int j=0;j<space_count;j++)
            printf(" ");
        //extra space
        if(row-i>=11){
            unsigned int extra_space;
            if(i==1){//set it up
                extra_space=1;
                for(unsigned int j=11;j<row-i;j++)
                    extra_space++;
                    }
            else//for the rest of rows
                extra_space--;
        for(unsigned int j=0;j<extra_space;j++)
            printf(" ");
            }
        printf("%d",row-i);
        printf("\n");
        space_count-=2;
        }
    printf("1\n");//the bottom
}

void numbered_full_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    unsigned int counter=1;
    for(unsigned int i=1;i<=row;i++){
        //prints spaces to let the top point in the center
        for(unsigned int j=1;j<=row-i;j++)
            printf("  ");
        //prints the numbers and the space between points
        //first half
        for(unsigned int j=i;j<=counter;j++)
            printf("%d ",j);
        //second half
        for(unsigned int j=counter-1;j>=i;j--)
            printf("%d ",j);
        printf("\n");
        counter+=2;
    }
}

void numbered_inverted_full_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    signed int counter=2*row-1;
    for(signed int i=row;i>0;i--){
        //prints spaces
        for(unsigned int j=i;j<row;j++)
            printf("  ");
        //prints the points and the space between points
        //first half
        for(unsigned int j=i;j<=counter;j++)
            printf("%d ",j);
        //second half
        for(unsigned int j=counter-1;j>=i;j--)
            printf("%d ",j);
        printf("\n");
        counter-=2;
    }
}

void hollow_numbered_full_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    signed int counter=1;
    for(unsigned int i=1;i<=row;i++){
        //prints spaces to let the top point in the center
        for(unsigned int j=1;j<=row-i;j++)
            printf("  ");
        if(1==i || row==i){
            //prints the numbers and the space between points
            //first half
            for(unsigned int j=i;j<=counter;j++)
                printf("%d ",j);
            //second half
            for(unsigned int j=counter-1;j>=i;j--)
                printf("%d ",j);
                }
        else{//prints just space between two numbers
            printf("%d",i);
            for(unsigned int j=0;j<=(counter-2)*2;j++)
                printf(" ");
            printf("%d",i);
            }
        printf("\n");
        counter+=2;
    }
}

void hollow_numbered_inverted_full_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    signed int counter=2*row-1;
    for(signed int i=row;i>0;i--){
        //prints spaces
        for(unsigned int j=i;j<row;j++)
            printf("  ");
        if(1==i || i==row){
            //prints the points and the space between points
            //first half
            for(unsigned int j=i;j<=counter;j++)
                printf("%d ",j);
            //second half
            for(unsigned int j=counter-1;j>=i;j--)
                printf("%d ",j);
                }
        else{//prints just space between two numbers
            printf("%d",i);
            for(unsigned int j=0;j<=(counter-2)*2;j++)
                printf(" ");
            printf("%d",i);
            }
        printf("\n");
        counter-=2;
    }
}

void palindrome_numbered_half_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for (unsigned int i=1;i<=row;i++){
        //print the number and space
        //first half
        for (unsigned int j=1;j<=i;j++)
            printf("%d ",j);
        //secnd half
        for (unsigned int j=i-1;j>0;j--)
            printf("%d ",j);
        printf("\n");
    }
}

void palindrome_numbered_inverted_half_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for (unsigned int i=row;i>0;i--){
        //print the number and space
        //first half
        for (unsigned int j=1;j<=i;j++)
            printf("%d ",j);
        //secnd half
        for (unsigned int j=i-1;j>0;j--)
            printf("%d ",j);
        printf("\n");
    }
}

void palindrome_alphabetic_half_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for (unsigned int i=1;i<=row;i++){
        //print the number and space
        //first half
        for (unsigned int j=1;j<=i;j++)
            printf("%c ",'A'-1+j);
        //secnd half
        for (unsigned int j=i-1;j>0;j--)
            printf("%c ",'A'-1+j);
        printf("\n");
    }
}

void palindrome_alphabetic_inverted_half_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for (unsigned int i=row;i>0;i--){
        //print the number and space
        //first half
        for (unsigned int j=1;j<=i;j++)
            printf("%c ",'A'-1+j);
        //secnd half
        for (unsigned int j=i-1;j>0;j--)
            printf("%c ",'A'-1+j);
        printf("\n");
    }
}

void palindrome_numbered_full_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(unsigned int i=1;i<=row;i++){
        //prints spaces to let the top point in the center
        for(unsigned int j=1;j<=row-i;j++)
            printf("  ");
        //prints the numbers and the space between points
        //first half
        for(unsigned int j=1;j<=i;j++)
            printf("%d ",j);
        //second half
        for(unsigned int j=i-1;j>=1;j--)
            printf("%d ",j);
        printf("\n");
    }
}

void palindrome_numbered_inverted_full_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for (unsigned int i=row;i>0;i--){
        //prints spaces to let the top point in the center
        for(unsigned int j=i;j<row;j++)
            printf("  ");
        //print the number and space
        //first half
        for (unsigned int j=1;j<=i;j++)
            printf("%d ",j);
        //secnd half
        for (unsigned int j=i-1;j>0;j--)
            printf("%d ",j);
        printf("\n");
    }
}

void palindrome_alphabetic_full_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(unsigned int i=1;i<=row;i++){
        //prints spaces to let the top point in the center
        for(unsigned int j=1;j<=row-i;j++)
            printf("  ");
        //prints the numbers and the space between points
        //first half
        for(unsigned int j=1;j<=i;j++)
            printf("%c ",'A'-1+j);
        //second half
        for(unsigned int j=i-1;j>=1;j--)
            printf("%c ",'A'-1+j);
        printf("\n");
    }
}

void palindrome_alphabetic_inverted_full_pyramid(unsigned int row){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for (unsigned int i=row;i>0;i--){
        //prints spaces to let the top point in the center
        for(unsigned int j=i;j<row;j++)
            printf("  ");
        //print the number and space
        //first half
        for (unsigned int j=1;j<=i;j++)
            printf("%c ",'A'-1+j);
        //secnd half
        for (unsigned int j=i-1;j>0;j--)
            printf("%c ",'A'-1+j);
        printf("\n");
    }
}

void palindrome_numbered_stared_full_pyramid(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    for(unsigned int i=1;i<=row;i++){
        //print the sign
        for(unsigned int j=1;j<=row+3-i;j++)
            printf("%c",sign);
        //print the number star
        for(unsigned int j=1;j<=i;j++)
            printf("%d%c",i,sign);
        //deletes the last extra star
        printf("\b");
        //print the sign again
        for(unsigned int j=1;j<=row+3-i;j++)
            printf("%c",sign);
        printf("\n");
    }
}

void palindrome_numbered_stared_inverted_full_pyramid(unsigned int row, char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
        for(unsigned int i=row;i>0;i--){
        //print the sign
        for(unsigned int j=row+3-i;j>0;j--)
            printf("%c",sign);
        //print the number star
        for(unsigned int j=1;j<=i;j++)
            printf("%d%c",i,sign);
        //deletes the last extra star
        printf("\b");
        //print the sign again
        for(unsigned int j=row+3-i;j>0;j--)
            printf("%c",sign);
        printf("\n");
    }
}

void solid_diamond(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    full_pyramid(row,sign);
    inverted_full_pyramid(row,sign);
}

void hollow_diamond(unsigned int row,char sign){
    //checks if the input is ok
    if(row<3){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //the top  half
    unsigned int space_counter=3;
    for(signed int i=row;i>0;i--){
        //prints spaces to let the top point in the center
        for(unsigned int j=1;j<i;j++)
            printf(" ");
        //prints the points and the space between points
        if(i>=row-1){
            for(unsigned int j=row;j>=i;j--)
                printf("%c ",sign);
                }
        else{
            printf("%c",sign);
            for(unsigned int j=0;j<space_counter;j++)
                printf(" ");
            printf("%c",sign);
            space_counter+=2;
            }
        printf("\n");
    }
    //the bottom half
    space_counter=2*row-3;
    for(signed int i=row;i>0;i--){
        //prints spaces
        for(signed int j=row;j>i;j--)
            printf(" ");
        //prints the points and the space between points
        if(i<=2){
        for(unsigned int j=0;j<i;j++)
            printf("%c ",sign);
            }
        else{
            printf("%c",sign);
            for(unsigned int j=0;j<space_counter;j++)
                printf(" ");
            printf("%c",sign);
            space_counter-=2;
            }
        printf("\n");
        }
}

void solid_half_diamond(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    half_pyramid(row,sign);
    if(row!=2){//as row 1 is invalid input in inverted half pyramid
        inverted_half_pyramid(row-1,sign);
    }
    else
        printf("%c\n",sign);
}

void hollow_half_diamond(unsigned int row,char sign){
    //checks if the input is ok
    if(row<3){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //the top half
    for(unsigned int i=1;i<=row;i++){
        if(i<=2)
            for(unsigned int j=0;j<i;j++)
                printf("%c ",sign);
        else{
            printf("%c ",sign);
            for(unsigned int j=0;j<(i-2)*2;j++)
                printf(" ");
            printf("%c",sign);
            }
        printf("\n");
        }
    //the bottom half
    for(signed int i=row-1;i>0;i--){
        if(i<=2)
            for(unsigned int j=0;j<i;j++)
                printf("%c ",sign);
        else{
            printf("%c ",sign);
            for(unsigned int j=0;j<(i-2)*2;j++)
                printf(" ");
            printf("%c",sign);
            }
        printf("\n");
        }
}

void solid_numbered_half_diamond(unsigned int row,unsigned int num,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //top half
    for(unsigned int i=0;i<row;i++){
        for(unsigned int j=0;j<=i;j++)
        printf("%d",num+i);
    printf("\n");
    }
    //bottom half
    for(signed int i=row-2;i>=0;i--){
        for(unsigned int j=0;j<=i;j++)
        printf("%d",num+i);
    printf("\n");
    }
    return;
}

void solid_numbered_stared_half_diamond(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //for the first and last row we don't print star
    printf("%d\n",1);
    //top half
    for(unsigned int i=2;i<=row;i++){
        for(unsigned int j=0;j<i;j++){
            if(j!=i-1)//as the last number doesn't have a star
                printf("%d%c",i,sign);
            else
               printf("%d",i);
        }

        printf("\n");
    }
    //bottom half
    for(unsigned int i=row;i>=2;i--){
        for(unsigned int j=0;j<i;j++){
            if(j!=i-1)//as the last number doesn't have a star
                printf("%d%c",i,sign);
            else
               printf("%d",i);
        }

        printf("\n");
    }
    printf("%d\n",1);
}

void palindrome_numbered_stared_half_diamond(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //for the first and last row we don't print star
    printf("%d\n",1);
    //this is the number that will be changing and starts with 2
    unsigned int num=2;
    //top half
    for(unsigned int i=2;i<=row;i++){
        for(unsigned int j=0;j<i;j++){
            if(j!=i-1)//as the last number doesn't have a star
                printf("%d%c",num,sign);
            else
               printf("%d",num);
            num++;
        }

        printf("\n");
    }
    //restart num
    num-=row;
    //bottom half
    for(unsigned int i=row;i>=2;i--){
        for(unsigned int j=0;j<i;j++){
            if(j!=i-1)//as the last number doesn't have a star
                printf("%d%c",num,sign);
            else
               printf("%d",num);
            num++;
        }
    //restart num
    num-=2*i-1;
    printf("\n");
    }
    printf("%d\n",1);
    return;
}

void palindrome_numbered_stared_covered_half_diamond(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //we are going to use Palindrome Numbered Half Pyramid code to print the number
    //then cover it with the star
    printf("%c\n",sign);//first line and last
    //top half
    for (unsigned int i=1;i<=row;i++){
    //print the number and space and we cover before and after
    printf("%c",sign);
    //first half
    for (unsigned int j=1;j<=i;j++)
        printf("%d ",j);
    //secnd half
    for (unsigned int j=i-1;j>0;j--)
        printf("%d ",j);
    printf("%c\n",sign);
    }
    //bottom half
    for (unsigned int i=row-1;i>0;i--){
    //print the number and space and we cover before and after
    //first half
    printf("%c",sign);
    for (unsigned int j=1;j<=i;j++)
        printf("%d ",j);
    //secnd half
    for (unsigned int j=i-1;j>0;j--)
        printf("%d ",j);
    printf("%c\n",sign);
    }
    printf("%c\n",sign);
return;
}

void floyd_numbered_half_pyramid(unsigned int row){
    //this is the number that will be changing
    unsigned int num=1;
    for(unsigned int i=1;i<=row;i++){
        for(unsigned int j=0;j<i;j++){
               printf("%d ",num);
            num++;
        }
        printf("\n");
    }
return;
}

void pascal_numbered_half_pyramid(unsigned int row){
    //this is the dinamyc array that will be changing
    //you can use a static array of 100 element if you don't know what is a dynamic array
    /*
    unsigned int current[100]//will be the current row
    unsigned int before[100]//will be the previous row
    */
    unsigned int *current=calloc(row+2,sizeof(int));//will be the current row
    unsigned int *before=calloc(row+2,sizeof(int));//will be the previous row
    //the first row
    current[0]=0;
    current[1]=1;
    current[2]=0;
    printf("%d\n",current[1]);
    for(unsigned int i=2;i<=row;i++){
        current[i+1]=0;//to calculate
        //saving the current row
        for(unsigned int j=0;j<=i+1;j++)
            before[j]=current[j];
        //calculates the current row
        for(unsigned int j=0;j<=i;j++){
            current[j+1]+=before[j];
        }
        //prints current
        for(unsigned int j=1;j<=i;j++){
               printf("%d ",current[j]);

        }
        printf("\n");
    }
    //delete them
    free(current);
    free(before);
return;
}

void hollow_diamond_inscribed(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //it is the solid diamond code but we replace the space with the sign
    //the top half
    unsigned int counter=1;
    for(signed int i=row;i>0;i--){
        //prints sign to let the top point in the center
        for(unsigned int j=0;j<i;j++)
            printf("%c",sign);
        //prints the space
        for(unsigned int j=0;j<counter;j++)
            printf(" ");
        //prints the left sign
        for(unsigned int j=0;j<i;j++)
            printf("%c",sign);
        printf("\n");
        counter+=2;
    }
    //bottom half
    for(signed int i=row;i>0;i--){
        //restart counter
        counter-=2;
        //prints sign right side
        for(signed int j=row;j>=i;j--)
            printf("%c",sign);
        //prints the points and the space between points
        for(signed int j=0;j<counter;j++)
            printf(" ");
        //prints sign left side
        for(signed int j=row;j>=i;j--)
            printf("%c",sign);
        printf("\n");
    }
return;
}

void butterfly(unsigned int row,char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //it is hollow diamond inscribed code but inverted
    //top half
    unsigned int counter=2*row+1;
    for(signed int i=row;i>0;i--){
        //restart counter
        counter-=2;
        //prints sign right side
        for(signed int j=row;j>=i;j--)
            printf("%c",sign);
        //prints the points and the space between points
        for(signed int j=0;j<counter;j++)
            printf(" ");
        //prints sign left side
        for(signed int j=row;j>=i;j--)
            printf("%c",sign);
        printf("\n");
    }
    //the top half
    for(signed int i=row;i>0;i--){
        //prints sign to let the top point in the center
        for(unsigned int j=0;j<i;j++)
            printf("%c",sign);
        //prints the space
        for(unsigned int j=0;j<counter;j++)
            printf(" ");
        //prints the left sign
        for(unsigned int j=0;j<i;j++)
            printf("%c",sign);
        printf("\n");
        counter+=2;
    }
return;
}

void diagonal_rectangle(unsigned int row,char sign){
    //checks if the input is ok
    if(row<4){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //check if it is odd
    if(row%2==0){
        printf("Invalid Input\n(The row number is even)\n");
        return;
    }
    //the first and last row are just simple line
    for(unsigned int i=0;i<row;i++)
        printf("%c",sign);
    printf("\n");
    signed int space_count=row-4;
    //top half
    for(unsigned int i=0;i<(row-2)/2;i++){
        //print the sign as the left side
        printf("%c",sign);
        //print the space for the diagonal (left side)
        for(unsigned int j=0;j<i;j++)
            printf(" ");
        //the left diagonal
        printf("%c",sign);
        //the middle space
        for(unsigned int j=0;j<space_count;j++)
            printf(" ");
        //the right diagonal
        printf("%c",sign);
        //tight side space
        for(unsigned int j=0;j<i;j++)
            printf(" ");
        //the right side
        printf("%c",sign);
        space_count-=2;
        printf("\n");
    }

    //middle row
    printf("%c",sign);
    //left space
    for(unsigned int j=0;j<(row/2)-1;j++)
        printf(" ");
    //diagonal
    printf("%c",sign);
        //left space
    for(unsigned int j=0;j<(row/2)-1;j++)
        printf(" ");
    printf("%c\n",sign);
    //bottom half
    for(signed int i=((row-2)/2)-1;i>=0;i--){
        space_count+=2;
        //print the sign as the left side
        printf("%c",sign);
        //print the space for the diagonal (left side)
        for(unsigned int j=0;j<i;j++)
            printf(" ");
        //the left diagonal
        printf("%c",sign);
        //the middle space
        for(unsigned int j=0;j<space_count;j++)
            printf(" ");
        //the right diagonal
        printf("%c",sign);
        //tight side space
        for(unsigned int j=0;j<i;j++)
            printf(" ");
        //the right side
        printf("%c",sign);
        printf("\n");
    }
    //last row
    for(unsigned int i=0;i<row;i++)
        printf("%c",sign);
    printf("\n");
    return;
}

void diagonal_diamond(unsigned int row,char sign){
    //it is the hallow diamond code but with diagonal
    //checks if the input is ok
    if(row<4){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //check if it is odd
    if(row%2==0){
        printf("Invalid Input\n(The row number is even)\n");
        return;
    }
    //set up  the row
    row=(row/2)+1;
    //the space for top
    for(unsigned int j=1;j<row;j++)
        printf(" ");
    //the top
    printf("%c\n",sign);
    unsigned int space_count=1;
    for(unsigned int i=1;i<row-1;i++){
        //prints spaces to let the top point in the center
        for(unsigned int j=1;j<row-i;j++)
            printf(" ");
        printf("%c",sign);
        //prints the space between points
        for(unsigned int j=0;j<space_count;j++)
            if(j==space_count/2)//the diagonal
                printf("%c",sign);
            else
                printf(" ");
        printf("%c",sign);
        printf("\n");
        space_count+=2;
    }
    for(unsigned int i=1;i<2*row;i++)//the middle diagonal
    printf("%c",sign);
    printf("\n");
    //the bottom
    for(unsigned int i=row-1;i>1;i--){
        //prints spaces to let the top point in the center
        for(unsigned int j=0;j<row-i;j++)
            printf(" ");
        printf("%c",sign);
        //prints the space between points
        for(unsigned int j=1;j<space_count-1;j++)
            if(j==space_count/2)//the diagonal
                printf("%c",sign);
            else
                printf(" ");
        printf("%c",sign);
        printf("\n");
        space_count-=2;
    }
    //the last row
    //prints space
    for(unsigned int j=0;j<row-1;j++)
        printf(" ");
    printf("%c\n",sign);
    return;
}

void right_arrow(unsigned int row,char sign){
    //checks if the input is ok
    if(row<3){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //the top half
    for(unsigned int i=0;i<row-1;i++){
        if(i%2==0)//the end line
            printf("\n");
        else{//the space
            for(unsigned int j=0;j<i;j++)
                printf(" ");
            printf("%c\n",sign);
        }
    }
    //the middle row
    for(unsigned int i=0;i<row;i++)
        printf("%c",sign);
    printf("\n");
    //the bottom half
    for(unsigned int i=row-1;i>0;i--){
        if(i%2!=0)//the end line
            printf("\n");
        else{//the space
            for(unsigned int j=1;j<i;j++)
                printf(" ");
            printf("%c\n",sign);
        }
    }
    return;
}

void left_arrow(unsigned int row,char sign){
    //it is the left arrow but the top is the bottom
    //checks if the input is ok
    if(row<3){
        printf("Invalid Input\n(The row number is small)\n");
        return;
        }
    //the bottom half
    for(unsigned int i=row-1;i>0;i--){
        if(i%2==0)//the end line
            printf("\n");
        else{//the space
            for(unsigned int j=0;j<i;j++)
                printf(" ");
            printf("%c\n",sign);
        }
    }
    //the middle row
    for(unsigned int i=0;i<row;i++)
        printf("%c",sign);
    printf("\n");
    //the top half
    for(unsigned int i=0;i<row-1;i++){
        if(i%2!=0)//the end line
            printf("\n");
        else{//the space
            for(unsigned int j=0;j<=i;j++)
                printf(" ");
            printf("%c\n",sign);
        }
    }
    return;
}

void solid_rhombus(unsigned int row,unsigned int column, char sign){
    //checks if the input is ok
    if(row<2){
        printf("Invalid Input\n(The row number is small)\n");
        return;
    }
    //it is the solid rectangle code but shifted
    for(unsigned int i=0;i<row;i++){
    //the space shift
    for(unsigned int j=0;j<row-1-i;j++)
        printf(" ");
        for(unsigned int j=0;j<column;j++)
            printf("%c",sign);
        printf("\n");
    }
    return;
}

void hollow_rhombus(unsigned int row,unsigned int column, char sign){
    //checks if the input is ok
    if(row<3||column<3){
        printf("Invalid Input\n(The row or column number are small)\n");
        return;
    }
    //it is the hollow rectangle code but shifted
    for(unsigned int i=0;i<row;i++){
    //the space shift
        for(unsigned int j=0;j<row-1-i;j++)
            printf(" ");
        if(i==0||i==row-1){
            for(unsigned int j=0;j<column;j++)
                printf("%c",sign);
            }
        else{
             printf("%c",sign);
             for(unsigned int j=0;j<column-2;j++)
                printf(" ");
             printf("%c",sign);
            }
        printf("\n");
    }
 return;
}
/* ******************** Sub-program  Section End ********************** */

/*

**************************************************************************
User            Date            Task    Details
**************************************************************************
Yousef          26jun2023        1      Solid rectangle-Hollow
Yousef           2jul2023        2      pyramids
Yousef           3jul2023        3      Numbered Pyramid
Yousef           4jul2023        4      Diamond
Yousef          22jul2023        5      Numbered Diamond
Yousef          23jul2023        6      The rest of the codes(We finished it ;-) )
*/
