#include <stdio.h>
#include <stdlib.h>



struct student{
       int ID;
       char name[20];
       double grade;
       };
       
int main(int argc, char *argv[])
{
    //변수 선언 및 초기화 
    struct student stud = {10, "yunjin", 4.3};
    
    //학번 이름 학점 값 변경
    stud.ID = 17;
    strcpy(stud.name, "KIM");
    stud. grade=2.0;
    
    //각각 출력
    printf("ID : %i, name : %s, grade : %lf\n",
               stud.ID, stud.name, stud.grade); 
    


  system("PAUSE");	
  return 0;
}
