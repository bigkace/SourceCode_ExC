#include <stdio.h>
#include <string.h>

typedef struct SinhVien
{
  char name[50];
  int age;
  char home[30];
} SV;

int main()
{
  SV sv1, sv2;
  fgets(sv1.name, 50, stdin);
  sv1.name[strcspn(sv1.name, "\n")] = 0;
  fgets(sv1.home, 30, stdin);
  sv1.home[strcspn(sv1.home, "\n")] = 0;
  scanf("%d", &sv1.age);
  getchar();
  fgets(sv2.name, 50, stdin);
  sv2.name[strcspn(sv2.name, "\n")] = 0;
  fgets(sv2.home, 30, stdin);
  sv2.home[strcspn(sv2.home, "\n")] = 0;
  scanf("%d", &sv2.age);

  printf("Nhap thong tin sinh vien 1:\n");
  printf("- Ten: %s\n", sv1.name);
  printf("- Que quan: %s\n", sv1.home);
  printf("- Tuoi: %d\n", sv1.age);
  printf("Nhap thong tin sinh vien 2:\n");
  printf("- Ten: %s\n", sv2.name);
  printf("- Que quan: %s\n", sv2.home);
  printf("- Tuoi: %d\n", sv2.age);
  printf("Cac sinh vien da nhap vao:\n");
  printf("*-----------------------------------------------*\n");
  printf("| Ten | Que quan | Tuoi |\n");
  printf("*-----------------------------------------------*\n");
  printf("| %s | %s | %d |\n", sv1.name, sv1.home, sv1.age);
  printf("*-----------------------------------------------*\n");
  printf("| %s | %s | %d |\n", sv2.name, sv2.home, sv2.age);
  printf("*-----------------------------------------------*");
}