#include<stdio.h>

void bahasa () ;
void english () ;
void pin () ;
void ubah_pin () ;
void cek () ;
void menu_utama () ;
void penarikan_lain () ;
void cek_in_penarikan () ;
void transaksi_lain () ;
void transaksi_lagi () ;
void transfer () ;
void isi_transfer () ;
void nominal_transfer() ;
void tujuan_transfer () ;
void batal () ;
int duwit ();
int kartu;

void main()
{

    system("cls") ;

    printf("\t\t\t SELAMAT DATANG \n") ;
    printf("\t\t\t       DI \n") ;
    printf("\t\t\t BANK MANDIRI \n");

    printf("\n\n\n") ;

    printf("\t\t SILAKAN MASUKKAN KARTU ANDA \n") ;
    printf("\t\t        UNTUK PELAYANAN \n") ;

    scanf("%d", &kartu) ;

    if (kartu==171001 || kartu==171024)
    {
       bahasa() ;
    }
    else
    {
        return main() ;
    }
    getch () ;
}
int duwit()
{
    int saldo;
    switch(kartu){
        case 171001 : saldo=1000000; break;
        case 171024 : saldo=1000000; break;
        }
    return saldo;
}

void bahasa()
{
    int language ;

    system("cls") ;

    printf("\t\t    SILAKAN PILIH BAHASA \n") ;
    printf("\t\t PLEASE SELECT THE LANGUAGE \n") ;

    printf("\n\n") ;

    printf("PERHATIAN \t\t\t\t 1. ENGLISH \n") ;
    printf("AKSES \n") ;
    printf("CALL MANDIRI\n") ;
    printf("HANYA DI  \t\t\t\t 2. INDONESIA \n");
    printf("14000 ATAU \n") ;
    printf("021 52997777") ;

    printf("\n\n") ;

    printf("\t\t TEKAN <CANCEL/3> UNTUK BATAL \n") ;
    printf("\t\t ---------------------------- \n") ;
    printf("\t\t   PRESS <CANCEL/0> TO VOID") ;

    printf("\n\n") ;

    scanf("%d", &language) ;

    if (language==1)
    {
       english() ;
    }
    else if (language==2)
    {
        pin() ;
    }
    else if (language==0)
    {
        batal();
    }
    else
    {
        printf("no valid") ;
    }
}

void english()
{
    printf("bla") ;
}

void pin()
{
    int no_pin ;

    system("cls") ;

    printf("\t\t    SILAKAN \n") ;
    printf("\t\t MASUKAN NOMOR \n") ;
    printf("\t\t   PIN ANDA \n") ;

    printf("\n\n") ;

    scanf("%d", &no_pin) ;

    if (no_pin>=100000 && no_pin<=999999)
    {
        menu_utama () ;
    }
    else
    {
        printf("PIN yang anda masukkan tidak valid") ;
    }
}
void batal()
{
    printf("yes") ;
}

void menu_utama()
{
    int pilihanku, hasil;
    int saldo=duwit();

    system("cls");

    printf("\t\t\t MENU UTAMA \n") ;
    printf("\t\t PECAHAN UANG RP.50.000 \n");
    printf("\t\t======================== \n") ;
    printf("\t      TEKAN <CANCEL/0> UNTUK BATAL \n\n") ;

    printf("1. 100.000                  \t\t 4. 500.000   \n") ;
    printf("2. 300.000                  \t\t 5. 1.000.000 \n") ;
    printf("3. PENARIKAN JUMLAH LAIN    \t\t 6. TRANSAKSI LAINNYA \n") ;

    printf("\n\n") ;

    scanf("%d", &pilihanku) ;

    if (pilihanku== 0)
    {
        batal() ;
    }
    else if (pilihanku==1)
    {
        hasil=saldo-100000;
        printf("Sisa saldo anda %d", hasil);
        getch ();
    }
    else if (pilihanku==3)
    {
        penarikan_lain () ;
    }
    else if (pilihanku==6)
    {
        transaksi_lain();
    }
    else
    {
        printf("apa???") ;
    }
}
void penarikan_lain()
{
    int pilihlagi, nominal ;

    system("cls") ;

    printf("\t\t\t  MASUKAN JUMLAH \n") ;
    printf("\t\t\t PENARIKAN DALAM \n") ;
    printf("\t\t       KELIPATAN RP. 50.000 \n") ;
    printf("\t\t    MAKSIMUM 1 KALI PENARIKAN \n") ;
    printf("\t\t\t  RP. 1.250.000") ;

    printf("\n\n") ;

    scanf("%d", &nominal) ;

    if (nominal>=50000 && nominal<=1250000)
    {
        return cek_in_penarikan();
    }
    else (nominal%50000!=0) ;
    {
        return penarikan_lain() ;
    }
}
void cek_in_penarikan ()
{
    int pilihlagi ;

    printf("\t\t\t\t\t\t\t 1. BENAR \n") ;
    printf("\t\t\t\t\t\t\t 2. SALAH \n") ;
    printf("\t\t TEKAN <CANCEL/0> KE MENU UTAMA \n") ;

    scanf("%d", &pilihlagi) ;

    if (pilihlagi==0)
    {
        return menu_utama() ;
    }
    else if (pilihlagi==1)
    {
        system("cls") ;
        printf("\t\t AMBIL UANG ANDA \n") ;
        printf("\t JANGAN MENINGGALKAN MESIN ATM \n") ;
        printf("\t SEBELUM KARTU DAN UANG KELUAR \n") ;
        printf("\t\t TERIMAKASIH \n") ;
    }
    else if (pilihlagi==2)
    {
        return penarikan_lain() ;
    }
    else
    {
        printf("invalid") ;
    }
}
void transaksi_lain()
{
    int pilihpilih ;

    system("cls") ;

    printf("\t\t\t MENU UTAMA \n") ;
    printf("\t\t TEKAN <CANCEL/0> KE MENU UTAMA \n") ;

    printf("\n\n") ;

    printf("1. INFORMASI SALDO \t\t\t 3. TRANSFER \n");
    printf("2. UBAH PIN        \t\t\t 4. KELUAR \n\n") ;

    scanf("%d", &pilihpilih) ;

    if (pilihpilih==0)
    {
        return menu_utama() ;
    }
    else if (pilihpilih==1)
    {
        printf("\t\t\t SALDO REKENING ANDA \n") ;
        printf("\t\t\t      ") ;        cek() ;
    }
    else if (pilihpilih==2)
    {
       ubah_pin() ;
    }
    else if (pilihpilih==3)
    {
        transfer() ;
    }
    else if (pilihpilih==4)
    {
        batal() ;
    }
    else
    {
        printf("no valid") ;
    }
}
void cek()
{
    printf("Saldo anda adalah %d", duwit());

    getch();
}

void transaksi_lagi()
{
    int yon ;

    printf("\t\t\tTRANSAKSI ANDA TELAH SELESAI \n") ;
    printf("\t\t\t  APAKAH INGIN MELAKUKAN \n") ;
    printf("\t\t\t    TRANSAKSI LAINNYA? \n\n ") ;
    printf("\t\t\t\t\t\t 1. YA \n") ;
    printf("\t\t\t\t\t\t 2. TIDAK \n") ;

    scanf("%d", &yon) ;

    if (yon==1)
    {
        return menu_utama() ;
    }
    else if (yon==2)
    {
        return batal() ;
    }
    else
    {
        printf("input invalid") ;
    }

}
void ubah_pin()
{
    int pin_lama, pin_baru1, pin_baru2 ;

    system("cls") ;

    printf("\t\t\t MASUKAN PIN LAMA ANDA \n") ;
    printf("\t\t\t\t ATAU \n") ;
    printf("\t\t\t  PIN AWAL KARTU BARU \n ") ;

    scanf("%d", &pin_lama) ;

    system("cls") ;

    printf("\t\t\t\t MASUKAN \n") ;
    printf("\t\t\t PIN BARU ATM ANDA \n") ;
    scanf("%d", &pin_baru1) ;

    system("cls") ;

    printf("\t\t\t  MASUKAN KEMBALI \n") ;
    printf("\t\t\t PIN BARU ATM ANDA \n") ;
    scanf("%d", &pin_baru2) ;

    if (pin_lama==pin_baru1)
    {
        system ("cls") ;
        printf("\t\t\t MOHON MASUKAN PIN YANG BERBEDA") ;
    }
    else if (pin_baru1==pin_baru2)
    {
        system ("cls") ;
        printf("\t\t\tPIN ATM ANDA TELAH DIPERBARUI \n") ;
        transaksi_lagi() ;
    }
    else if (pin_baru1!=pin_baru2)
    {
        printf("\t\t\t\ PIN YANG ANDA MASUKKAN TIDAK SESUAI ");
        return ubah_pin() ;
    }
    else
    {
        printf("inputan tidak valid") ;
    }
}
void transfer()
{
    int yokpilih;

    system("cls") ;

    printf("\t\t\t TRANSFER \n") ;
    printf("\t\t TEKAN <CANCEL/0> KE MENU UTAMA \n") ;

    printf("\n\n") ;

    printf("1. KE REKENING MANDIRI \n") ;
    printf("2. KE REK BANK LAIN/ATM BERSAMA/PRIMA \n");
    printf("3. KELUAR \n\n") ;

    scanf("%d", &yokpilih) ;

    if (yokpilih==1)
    {
        isi_transfer() ;
    }
    else if (yokpilih==2)
    {
        isi_transfer() ;
    }
    else if (yokpilih==3)
    {
        return batal() ;
    }
    else
    {
        printf("no valida") ;
    }
}

void isi_transfer()
{
    int no_rekg, piliiih ;

    system("cls") ;

    printf("\t\t\t MASUKAN \n") ;
    printf("\t\t REKENING TUJUAN TRANSFER \n\n");

    printf("\t\t\t\t ") ;

    scanf("%d", &no_rekg) ;

    printf("\n\t\t\t\t\t 1. BENAR") ;
    printf("\n\t\t\t\t\t 2. SALAH \n") ;

    scanf("%d", &piliiih) ;

    if (piliiih==1)
    {
       nominal_transfer() ;
    }
    else if (piliiih==2)
    {
        return isi_transfer() ;
    }
    else
    {
        printf("no valid") ;
    }
}
void nominal_transfer()
{
    int nomi, cekcek ;

    system ("cls") ;

    printf("\t\t\t    MASUKAN JUMLAH \n");
    printf("\t\t\t (MINIMUM RP. 50.000) \n") ;
    printf("\n\n") ;
    scanf("%d", &nomi) ;

    if (nomi<=49999) ;
    {
        return nominal_transfer() ;
    }

    printf("\n\n") ;

    printf("\t\t\t\t\t 1. BENAR \n") ;
    printf("\t\t\t\t\t 2. SALAH \n") ;
    printf("\t\t\t TEKAN <CANCEL/0> KE MENU UTAMA\n") ;

    scanf("%d", &cekcek) ;

    if (cekcek==0)
    {
        return menu_utama() ;
    }
    else if (cekcek==1)
    {
        tujuan_transfer () ;
    }
    else if (cekcek==2)
    {
        return nominal_transfer() ;
    }
    else
    {
        printf("no valid") ;
    }
}
void tujuan_transfer()
{
    int rek_tj, jumlah, dari_rkg, dipilih ;
    char nama ;

    system("cls") ;

    printf("\t\t\t KONFIRMASI TRANSFER \n") ;
    printf("REKENING TUJUAN : ") ; scanf("%d \n", rek_tj) ;
    printf("NAMA            : ") ; scanf("%c \n", nama) ;
    printf("JUMLAH          : ") ; scanf("%d \n", jumlah) ;
    printf("DARI REK.       : ") ; scanf("%d \n",dari_rkg) ;

    printf("\n\n") ;

    printf("\t\t\t\t\t 1. BENAR \n") ;
    printf("\t\t\t\t\t 2. SALAH \n") ;
    printf("\t\t TEKAN <CANCEL/0> KE MENU UTAMA \n");

    scanf("%d", &dipilih) ;

    if (dipilih==1)
    {
        printf("\t\t\t  TRANSFER UANG SEBESAR %d \n", jumlah) ;
        printf("\t\t\t DENGAN REKENING TUJUAN %d \n", rek_tj) ;
        printf("\t\t\t              BERHASIL") ;

        transaksi_lagi() ;
    }
    else if (dipilih==2)
    {
        return tujuan_transfer() ;
    }
    else if (dipilih==0)
    {
        return menu_utama();
    }
    else
    {
        printf("no valid") ;
    }
}
