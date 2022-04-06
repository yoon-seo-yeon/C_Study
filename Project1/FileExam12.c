#include <stdio.h>

struct _Memeber		 //구조체 정의
{
	char name[20];
	int age;
	int num;
};

typedef struct _Memeber Member;	 //struct _Memeber을 자료형 이름을 Member로 하겠다

//struct _Member mem1, mem2;
//Member mem1, mem2;
 
void Write();
void Read();

int main()
{
	Write();
	Read();
	return 0;
}

void Write()
{
	//struct _Member base[4]=...
	Member base[4] = {
		{"홍길동", 20, 3},	 //base[0]
		{"강감찬", 30, 4},	 //base[1]
		{"김유신", 70, 1},	 //base[2]
		{"이순신", 35, 2},	 //base[3]
	};
	FILE* fp = fopen("memdata", "wb"); 
	//w는 write모드이고 파일형식은 binary(이진)파일이다
	//wt를 쓰면 w는 write 모드이고 파일형식은 text파일이다
	fwrite(base, sizeof(Member),4,fp);
	//base 배열에 저장되어 있는 구조체 자료를 Member구조체 크기의 4개를
	//fp가 가리키는 파일("memdata")에 출력(저장)한다

	fclose(fp);
}

void Read()
{
	Member result[4];
	FILE* fp = fopen("memdata", "rb");
	//r은 read(읽기)모드이고 파일형식은 binary(이진)이다
	fread(result, sizeof(Member), 4, fp);
	//fp가 가리키는 파일("memdata") 에 저장되어 있는 데이터를
	//Member 구조체 크기의 4개를 result[]파일에 저장한다

	fclose(fp);
	printf("이름     번호   나이\n");
	printf("=========================\n");
	for (int i = 0; i < 4; i++)
		printf("%-10s%-6d%d\n", result[i].name, result[i].num, result[i].age);
}