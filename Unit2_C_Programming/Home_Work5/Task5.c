//Ex1: C Program to store Information of a student using structure
#include <stdio.h>

enum data{NAME,ROLL_NO,MARKS};
struct Sstudent
{
	char name[20];
	int roll_no;
	float marks;
} student;

void ReadData(char st[],enum data input){
	printf("Enter %s: ", st);
	switch(input){
	case NAME:
		scanf("%s",student.name);
		break;
	case ROLL_NO:
		scanf("%d",&student.roll_no);
		break;
	case MARKS:
		scanf("%f",&student.marks);
		break;
	}
}
void printInfo(struct Sstudent student){
	printf("name: %s\nRoll: %d\nMARKS: %.2f\n",student.name,student.roll_no,student.marks);
}
int main(){
	printf("Enter information of students: \n\n");

	ReadData("name",NAME);
	ReadData("roll_number",ROLL_NO);
	ReadData("marks",MARKS);
	printf("\nDisplaying Information \n");
	printInfo(student);

	return 0;
}

//Ex2: Add two Distances in inch-feet
// #include <stdio.h>
// enum type{FEET,INCH};
// struct Sdistance
// {
// 	int feet;
// 	double inch;	
// 	int resFeet;
// 	double resInch;
// };
// struct Sdistance ReadData(char st[],enum type input){
// 	struct Sdistance distance;
// 	printf("Enter %s: ", st);
// 	switch(input){
// 	case FEET:
// 		fflush(stdin); fflush(stdout);
// 		scanf("%d",&distance.feet);
// 		break;
// 	case INCH:
// 		fflush(stdin); fflush(stdout);
// 		scanf("%lf",&distance.inch);
// 		break;
// 	}
// 	return distance;
// }
// struct Sdistance AddDistance(struct Sdistance distance1, struct Sdistance distance2){
// 	struct Sdistance add;
// 	add.resFeet = distance1.feet + distance2.feet;
// 	add.resInch = distance1.inch + distance2.inch;
// 	if(add.resInch > 12){
// 		add.resInch = add.resInch-12;
// 		add.resFeet++;
// 	}
// 	return add;
// }
// void printDistance(char st[],struct Sdistance C){
// 	printf("%s=%d\'-%0.1f\"",st,C.resFeet,C.resInch);
// }
// int main(){
// 	struct Sdistance distance1;
// 	printf("Enter information for 1st distance\n");
// 	distance1 = ReadData("feet",FEET);
// 	distance1 = ReadData("inch",INCH);
//  	struct Sdistance distance2;
// 	printf("Enter information for 2st distance\n");
// 	distance2 = ReadData("feet",FEET);
// 	distance2 = ReadData("inch",INCH);
// 	struct Sdistance totalDistance;
// 	totalDistance = AddDistance(distance1,distance2);
// 	printDistance("Sum of distances",totalDistance);
// 	return 0;
//}


//Ex3: Add two Complex Numbers
// #include <stdio.h>
// struct Scomplex
// {
// 	double m_R; //real part
// 	double m_I; //imaginary part
// };
// struct Scomplex ReadComplex(char name[]){
// 	struct Scomplex C;
// 	printf("For %s complex number\n",name);
// 	printf("Enter real and imaginary respectivly: ");
// 	fflush(stdin); fflush(stdout);
// 	scanf("%lf %lf",&C.m_R,&C.m_I);
// 	return C;
// }
// struct Scomplex AddComplex(struct Scomplex A, struct Scomplex B){
// 	struct Scomplex C;
//     C.m_R = A.m_R + B.m_R;
//     C.m_I = A.m_I + B.m_I;
//     return C;
// }
// void printComplex(struct Scomplex C){
// 	printf("Sum=%.1lf+%.1lfi",C.m_R,C.m_I);
// }
// int main(){
// 	struct Scomplex X,Y,Res;

// 	X = ReadComplex("1st");
// 	Y = ReadComplex("2nd");
//     Res = AddComplex(X,Y);
//     printComplex(Res);
// 	return 0;
// }



//Ex4: Store information of Students Using Structure

// #include <stdio.h>
// struct Sstudent 
// {
// 	char name[20];
// 	int roll_no;
// 	int marks;
// };
// int main(){
// 	struct Sstudent data[10]; 
// 	int i ;
// 	printf("Enter information of students:\n");
// 	for(i = 0;  i < sizeof(data)/sizeof(struct Sstudent); i++){
// 		data[i].roll_no = i+1;
// 		printf("\nFor roll number %d\n",data[i].roll_no);
// 		printf("Enter name: ");
// 		fflush(stdin); fflush(stdout);
// 		scanf("%s",data[i].name);
// 		printf("Enter marks: ");
// 		fflush(stdin); fflush(stdout);
// 		scanf("%d",&data[i].marks);
// 	}
// 	printf("Displaying information of students:\n");
// 	for(i = 0; i < sizeof(data)/sizeof(struct Sstudent); i++){
// 		printf("\nInformatiom for roll number %d:\n",data[i].roll_no);
// 		printf("Name: %s\n",data[i].name);
// 		printf("Marks: %d\n",data[i].marks);
// 	}
// 	return 0;
// }

// //Ex5: find area of a circle using macros

// #include <stdio.h>
// #include <math.h>
// #define pi M_PI
// #define areaCircle(r) pi*r*r
// int main(){
// 	int raduis;
// 	printf("Enter the raduis: ");
// 	fflush(stdin); fflush(stdout);
// 	scanf("%d",&raduis);
// 	printf("Area = %.2f",areaCircle(raduis));
// 	return 0;
// }


