#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct SinhVien
{
    char hoten[50];
    char gt[5];
    int age;
    float dtoan, dli, dhoa;
    float dtbinh;
    char xeploai[4];
} SV;


void TinhDTB(SV &sv)
{
    sv.dtbinh = (sv.dtoan + sv.dli + sv.dhoa) / 3;
}

void Nhap(SV &sv)
{
    printf("\nNhap ten SV : ");
    fflush(stdin);
    fgets(sv.hoten, 50, stdin);
    sv.hoten[strcspn(sv.hoten, "\n")] = 0;
    printf("Nhap gioi tinh SV : ");
    scanf("%s", &sv.gt);
    printf("Nhap tuoi SV : ");
    scanf("%d", &sv.age);
    printf("Nhap diem toan , li , hoa : ");
    scanf("%f %f %f", &sv.dtoan, &sv.dli, &sv.dhoa);
    TinhDTB(sv);
    printf("________________________________________\n");
}

void NhapN(SV sv[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("Nhap thong tin sinh vien %d", i + 1);
        Nhap(sv[i]);
    }
}

void Xuat1(SV &sv)
{
    printf("\n%s \t %s\t     %d \t%.2f     \t%.2f      \t%.2f", sv.hoten, sv.gt, sv.age, sv.dtoan, sv.dli, sv.dhoa);
}


void XuatN1(SV sv[], int N)
{
    printf("\nHoTen\t         GioiTinh    Tuoi\tDiemToan\tDiemLi\t\tDiemHoa");
    for (int i = 0; i < N; i++)
    {
        Xuat1(sv[i]);
    }
}

void SapXep(SV sv[], int N)
{
    SV tmp;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (sv[i].dtbinh < sv[j].dtbinh)
            {
                tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }
}

void Xuat2(SV &sv)
{
    printf("\n%s\t%.2f     \t%.2f     \t%.2f     \t%.2f", sv.hoten, sv.dtoan, sv.dli, sv.dhoa, sv.dtbinh);
}

void XuatN2(SV sv[], int N)
{
    printf("\nHoTen     \tDiemToan\tDiemLi     \tDiemHoa     \tDiemTrungBinh");
    for (int i = 0; i < N; i++)
    {
        Xuat2(sv[i]);
    }
}

void XepLoai(SV &sv)
{
    if (sv.dtbinh >= 8)
    {
        printf("\n%s\t%.2f\t\tGioi", sv.hoten, sv.dtbinh);
    }
    else if (sv.dtbinh >= 6.5 && sv.dtbinh < 8)
    {
        printf("\n%s\t%.2f\t\tKha", sv.hoten, sv.dtbinh);
    }
    else if (sv.dtbinh >= 4 && sv.dtbinh < 6.5)
    {
        printf("\n%s\t%.2f\t\tTrung Binh", sv.hoten, sv.dtbinh);
    }
    else if (sv.dtbinh < 4)
    {
        printf("\n%s\t%.2f\t\tKem", sv.hoten, sv.dtbinh);
    }
}

void XepLoaiN(SV sv[], int N)
{
    printf("\nHoTen\t\tDiemTrungBinh\tXepLoai");
    for (int i = 0; i < N; i++)
    {
        XepLoai(sv[i]);
    }
}

void XuatFile(SV sv[], int N, char filename[])
{
    FILE *fptr;
    fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        printf("ERROR !");
        exit(0);
    }
    fprintf(fptr, "========Danh Sach %d Sinh Vien========\n", N);
    fprintf(fptr, "\n%s\t         %s    %s\t%s\t%s\t\t%s", "HoTen", "GioiTinh", "Tuoi", "DiemToan", "DiemLi", "DiemHoa");
    for (int i = 0; i < N; i++)
    {
        fprintf(fptr, "\n%s \t %s\t     %d \t%.2f     \t%.2f      \t%.2f", sv[i].hoten, sv[i].gt, sv[i].age, sv[i].dtoan, sv[i].dli, sv[i].dhoa);
    }
    fclose(fptr);
}

int main()
{
    int key;
    bool daNhap = false;

    char filename[] = "C:\\Users\\ADMIN\\Code\\Baitap.txt";

    int N;
    do
    {
        printf("\nNhap so luong sinh vien : ");
        scanf("%d", &N);
    }while (N <= 0);

    SV sv[N];

    while(true)
    {
        system("cls");
        printf("******************************************************\n");
        printf("***         CHUONG TRINH QUAN LI SINH VIEN         ***\n");
        printf("***          1. Nhap danh sach sinh vien           ***\n");
        printf("***          2. Xuat danh sach sinh vien           ***\n");
        printf("***          3. Sap xep sinh vien theo diem TB     ***\n");
        printf("***          4. Xep loai sinh vien                 ***\n");
        printf("***          5. Xuat danh sach sinh vien ra file   ***\n");
        printf("***          0. Thoat chuong trinh                 ***\n");
        printf("******************************************************\n");
        printf("***          Nhap lua chon cua ban :               ***\n");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            printf("\nBan da chon nhap danh sach sinh vien ! Moi ban nhap : \n");
            NhapN(sv, N);
            printf("\nBan da nhap thanh cong danh sach sinh vien !");
            daNhap = true;
            printf("\nBan hay bam phim bat ky de tiep tuc : ");
            getch();
            break;
        case 2:
            printf("\nBan da chon xuat danh sach sinh vien !");
            printf("\n========Danh Sach %d Sinh Vien========\n", N);
            XuatN1(sv, N);
            printf("\nBan hay bam phim bat ky de tiep tuc : ");
            getch();
            break;
        case 3:
            printf("\nBan da chon sap xep sinh vien theo diem trung binh !");
            printf("\n========Sap Xep %d Sinh Vien Theo DTB========\n", N);
            SapXep(sv, N);
            XuatN2(sv, N);
            printf("\nBan hay bam phim bat ky de tiep tuc : ");
            getch();
            break;
        case 4:
            printf("\nBan da chon xep loai sinh vien !");
            printf("\n========Xep Loai %d Sinh Vien========\n", N);
            XepLoaiN(sv, N);
            printf("\nBan hay bam phim bat ky de tiep tuc : ");
            getch();
            break;
        case 5:
            printf("\nBan da chon xuat danh sach sinh vien ra file !");
            XuatFile(sv, N, filename);
            printf("\nBan da xuat danh sach sinh vien ra file thanh cong !");
            printf("\nHay mo file %s de xem danh sach sinh vien", filename);
            printf("\nBan hay bam phim bat ky de tiep tuc : ");
            getch();
            break;
        case 0:
            printf("Ban da thoat chuong trinh thanh cong !");
            return 0;
        default:
            printf("\nLua chon cua ban khong ton tai !");
            printf("\nBan hay bam phim bat ky de tiep tuc : ");
            getch();
            break;
        }
    }
}