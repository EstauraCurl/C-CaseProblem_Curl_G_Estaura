#include <stdio.h>
//This Program is allow the students to input her/his GPA and outputs the result and receive award
int main(){
  int grade;
  printf("Name: Curl Ganuhay Estaura\nID Number: 2025304160\nSection: BSIT-1B\n");
  printf("Please Enter your GPA: ");
  scanf("%d", &grade);
    if(grade>=98){
      printf("You have With Highest Honors Award");
    }else if(grade>=95 && grade<97){
      printf("You have With High Honors Award");
    }else if(grade>=90 && grade<94){
      printf("You have With Honors Award");
    }else if(grade>=85 && grade<89){
      printf(" You have Achiever Award");
    }else if(grade>=75 && grade<84){
      printf("You have Pass");
    }else{
      printf("You have Failed");
    }
  return 0;
  
}