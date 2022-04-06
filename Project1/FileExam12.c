#include <stdio.h>

struct _Memeber		 //����ü ����
{
	char name[20];
	int age;
	int num;
};

typedef struct _Memeber Member;	 //struct _Memeber�� �ڷ��� �̸��� Member�� �ϰڴ�

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
		{"ȫ�浿", 20, 3},	 //base[0]
		{"������", 30, 4},	 //base[1]
		{"������", 70, 1},	 //base[2]
		{"�̼���", 35, 2},	 //base[3]
	};
	FILE* fp = fopen("memdata", "wb"); 
	//w�� write����̰� ���������� binary(����)�����̴�
	//wt�� ���� w�� write ����̰� ���������� text�����̴�
	fwrite(base, sizeof(Member),4,fp);
	//base �迭�� ����Ǿ� �ִ� ����ü �ڷḦ Member����ü ũ���� 4����
	//fp�� ����Ű�� ����("memdata")�� ���(����)�Ѵ�

	fclose(fp);
}

void Read()
{
	Member result[4];
	FILE* fp = fopen("memdata", "rb");
	//r�� read(�б�)����̰� ���������� binary(����)�̴�
	fread(result, sizeof(Member), 4, fp);
	//fp�� ����Ű�� ����("memdata") �� ����Ǿ� �ִ� �����͸�
	//Member ����ü ũ���� 4���� result[]���Ͽ� �����Ѵ�

	fclose(fp);
	printf("�̸�     ��ȣ   ����\n");
	printf("=========================\n");
	for (int i = 0; i < 4; i++)
		printf("%-10s%-6d%d\n", result[i].name, result[i].num, result[i].age);
}