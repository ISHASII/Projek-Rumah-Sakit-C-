#include<iostream>
#include<string.h>
#include<time.h>
#include<fstream>

using namespace std;

void garis();
void namars();
void welcome();
void blokir();
void back();
void pasien();
void r_jalan();
void r_inap();
void rincian();
void rincian2();
void struk();
void struk2();
void biaya();
void info();
void tebus_obat();
void balik();
void kop_struk();

int const rj=100000,ri3=500000,ri2=750000,ri1=1000000,adm=25000,bk=50000,adm2=25000,bk2=50000;
char user[25],user2[25],pass[10],pass2[10],pilihan,na[50],al[200],pe[20],di[20],jk,na2[50],al2[200],pe2[20],di2[20],jk2,gd[5],gd2[5];
int kembali(int jb,int rj,int bk,int adm,int total_pembelian);
int login,login2,um,tb,bb,um2,tb2,bb2,pilih,jb,jb2,li,kls,total_biaya,harga,ri,mp;
int obat,kode,total_pembelian=0,total_pembelian2=0,to,i=1,repeat=0;
char a='y';

time_t waktu;

int main(void){
system("cls");
    while(repeat<=3){
    strcpy(user,"AIDA");
    strcpy(pass,"2022");
    namars();
    cout << "\n\t\t\t\t\t\t| LOGIN |" << endl << endl;
    cout << "\t\t\t\tMasukkan Username : ";
    cin >> user2;
    login=strcmp(user,user2);
        if(login==0){
            cout << "\t\t\t\tMasukkan Password : ";
            cin >> pass2;
            login2=strcmp(pass,pass2);
            if(login2==0){
                welcome();
                return 0;}
            else{
                cout << "\n\n\n\t\t====================================================================" << endl;
                cout << "\t\t\t PASSWORD SALAH!! Sisa Percobaan Login =" << 2-repeat; cout << "Kali" << endl;
                cout << "\t\t====================================================================" << endl << endl << endl;
                cout << "\t\tTekan Enter Untuk Kembali Ke Awal." << endl << endl << endl;
                system("pause");}}
        else{
                cout << "\n\n\n\t\t====================================================================" << endl;
                cout << "\t\t\t USERNAME SALAH!! Sisa Percobaan Login =" << 2-repeat; cout << "Kali:" << endl;
                cout << "\t\t====================================================================" << endl << endl << endl;
                cout << "\t\tTekan Enter Untuk Kembali Ke Awal." << endl << endl << endl;
                system("pause");
                }
                repeat++;
                if(repeat==3){
                    blokir();
                    system("pause");
                    0;
            }
            system("cls");
        }
        0;
}
void garis(){
    cout << "\n\t\t==========================================================================" << endl;
}
void kop_struk(){
    struct tm *Sys_T;
    time_t Unsika;
    Unsika = time(NULL);
    Sys_T = localtime(&Unsika); /* Untuk mendapatkan waktu lokal komputer */
        garis();
        cout << "\n\t\t\t\t\t  RS. AIDA MEDIKA" << endl;
        cout << "\t\t\t Jl. Singaperbangsa, Telukjaambe Timur, Kab. Karawang" << endl;
        cout << "\t\t\t\t\t  Telp. 021-7354-3751" << endl;
        garis();
        cout << "\n\t\t\t\t\t Hari/Tanggal/Waktu\n\t\t\t\t" << asctime (Sys_T);
        garis();
}
void balik(){
char pil2;
    cout << "\n\t\tM : Menu Utama\n\t\tO : Logout\n\t\tE : Keluar\n";
    cout << "\n\t\tPilih : ";
    cin >> pil2;
    if (pil2=='M'||pil2=='m') {
        welcome();
    }
    else if (pil2=='O'||pil2=='o') {
        main();
    }
    else if (pil2=='E'||pil2=='e') {
        0;
    }
    else {
        cout << "\nERROR!!" << endl << endl;
    }
}

void namars(){
    garis();
    cout << "\n\t\t\t\t\t     RS. AIDA MEDIKA" << endl;
    garis();
}
void welcome(){
system("cls");
    namars();
    cout << "\n\t\t\tSelamat Datang," << user2 << endl << endl;
    cout << "\t\t\t1. Pasien" << endl;
    cout << "\t\t\t2. Biaya Pengobatan" << endl;
    cout << "\t\t\t3. Info Akun" << endl;
    cout << "\t\t\t4. Logout Akun" << endl;
    cout << "\t\t\t5. Keluar" << endl;
    garis();
    cout << "\n\t\t\tPilih :";
    cin >> pilih;
        switch(pilih){
            case 1:
                pasien();
            break;
            case 2:
                biaya();
            break;
            case 3:
                info();
            break;
            case 4:
                main();
            break;
            case 5:
                0;
            break;
            default:
                printf("\nERROR, Masukkan Pilihan Yang Tersedia!\n\n");
                system("pause");
                welcome;
    }
}
void blokir(){
system("cls");
    namars();
    cout << "\n\t\t================================================================";
    cout << "\n\t\t\tANDA TELAH GAGAL SEBANYAK" << repeat; cout << ",AKSES DIBLOKIR!!!" << endl;
    cout << "\n\t\t================================================================";
    cout << "\n\t\tUsername terakhir yang anda masukkan :" << user2 << endl;
    cout << "\n\t\tPassword terakhir yang anda masukkan :" << pass2 << endl;
    cout << "\n\t\tProgram akan keluar secara otomatis setelah anda menekan ENTER" << endl << endl;
    garis();
  0;
}
void back(){
    char pil;
    cout << "\n\t\tB : Kembali \n\t\tO : Logout \n\t\tE : Keluar" << endl << endl;
    cout << "\t\tPilih :";
    cin >> pil;
        if (pil=='B'||pil=='b'){
            welcome();
        }
        else if (pil=='O'||pil=='o'){
            main();
        }
        else if (pil=='E'||pil=='e'){
            0;
        }
        else {
        cout << "\nERROR!!\n\n";
        }
    system("pause");
    0;
}
void biaya(){
system("cls");
    namars();
    cout << "\n\t\t\t\t\t  | BIAYA PENGOBATAN |" << endl << endl;
    garis();
    cout << "\n\t\tJenis Pelayanan\t\t\t\t\t|     Biaya" << endl;
    garis();
    cout << "\n\t\tRawat Jalan (Per Kunjungan)\t\t\t|    Rp" << rj << endl;
    cout << "\t\tRawat Inap kelas 3(Per Hari)\t\t\t|    Rp" << ri3 << endl;
    cout << "\t\tRawat Inap kelas 2(Per Hari)\t\t\t|    Rp" << ri2 << endl;
    cout << "\t\tRawat Inap kelas 1(Per Hari)\t\t\t|    Rp" << ri1 << endl;
    cout << "\t\tBiaya Admin\t\t\t\t\t|    Rp" << adm << endl;
    cout << "\t\tBiaya Konsultasi\t\t\t\t|    Rp"<< bk << endl;
    garis();
    back();
}
void info() {
system ("cls");
    namars();
    cout << "\n\t\t\tKamu login sebagai :" << endl << endl;
    cout << "\t\t\tUsername :" << user2 << endl;
    cout << "\t\t\tPassword :" << pass2 << endl;
    garis();
    back();
}
void pasien() {
system("cls");
    ul:
    namars();
    cout << "\n\t\t\t1. Rawat Jalan" << endl;
    cout << "\t\t\t2. Rawat Inap" << endl;
    cout << "\t\t\t3. Kembali" << endl;
    cout << "\t\t\t4. Keluar" << endl;
    garis();
    cout << "\n\t\t\tPilih : ";
    cin >> pilih;
        switch (pilih) {
            case 1:
                r_jalan();
            break;
            case 2:
                r_inap();
            break;
            case 3:
                 welcome();
            break;
            case 4:
                0;
            break;
            default:
                cout << "\n\t\tERROR, Masukkan pilihan yang tersedia!";
                goto ul;
        }
}
void r_jalan() {
system("cls");
    namars();
    cout << "\n\t\t\t\t\t     | DATA PASIEN |" << endl << endl;
    cout << "\t\t\tNama                      : ";
    cin >> na;
    ulang:
    cout << "\t\t\tJenis Kelamin (P/W)       : ";
    cin >> jk;
        if (jk=='P'||jk=='p'||jk=='W'||jk=='w'){
        }
        else {
        cout << "\n\t\t\tMasukkan Kategori Yang Tersedia!!"<< endl << endl;
        goto ulang;
        }
    cout << "\t\t\tUmur                      : ";
    cin >> um;
    cout << "\t\t\tTinggi Badan              : ";
    cin >> tb;
    cout << "\t\t\tBerat Badan               : ";
    cin >> bb;
    ulangs:
    cout << "\t\t\tGolongan Darah            : ";
    cin >> gd[5];
        if (gd[5]=='A'||gd[5]=='a'||gd[5]=='B'||gd[5]=='b'||gd[5]=='AB'||gd[5]=='ab'||gd[5]=='O'||gd[5]=='o'||gd[5]=='-'){
        }
        else {
        cout << "\n\t\t\tTidak ada manusia dengan golongan darah ituu!!" << endl << endl;
        goto ulangs;}
    fflush(stdin);
    cout << "\t\t\tDomisili                  : ";
    cin >> al;
    cout << "\t\t\tPemeriksa                 : ";
    cin >> pe;
    cout << "\t\t\tDiagnosa                  : ";
    cin >> di;
    balik11:
    cout << "\t\t\tApakah Kamu Mau Menebus Obat? :";
    cout << "\n\t\t\t1.Tebus Obat";
    cout << "\n\t\t\t2.Tidak";
    cout << "\n\t\t\tPilih:";
    cin >> to;
    switch(to){
    case 1:
        tebus_obat();
    break;
    case 2:
        rincian();
    break;
    default:
        printf("\nERROR, Masukkan Pilihan Yang Tersedia!\n\n");
        goto balik11;
        system("pause");
        welcome();
    }
}
void rincian() {
system("cls");
char pil3;
    namars();
    cout << "\n\t\t\t\t\t    | RINCIAN BIAYA | \n";
    cout << "\t\t\tRawat Jalan\t\t\t\t     Rp" << rj << endl;
    cout << "\t\t\tBiaya Konsultasi\t\t\t     Rp" << bk << endl;
    cout << "\t\t\tBiaya Admin\t\t\t\t     Rp" << adm << endl;
    cout << "\t\t\tBiaya Obat\t\t\t\t     Rp" << total_pembelian << endl;
    garis();
    cout << "\n\t\t\tTotal:\t\t\t\t\t     Rp" << rj+bk+adm+total_pembelian << endl;
    cout << "\n\t\t\tPilih Metode Pembayaran : \n\t\t\t1. Bayar Menggunakan Asuransi\n\t\t\t2. Bayar Pribadi" << endl;
    cout << "\n\t\t\tPilihan : ";
    cin >> mp;

        if (mp==1){
            harga=0;
            cout << "\n\t\t\tJumlah Bayar: Rp." << harga << endl;
            cout << "\t\t\tKarena seluruh biaya sudah ditanggung oleh pihak asuransi." << endl;
        }
        else if (mp==2) {
            harga=rj+bk+adm+total_pembelian;
            cout << "\n\t\t\tBiaya yang harus dibayar  \t\t     Rp" << harga << endl;
            bayar:
            cout << "\t\t\tJumlah Bayar\t\t\t\t     Rp ";
            cin >> jb;
            if(jb<harga){
                cout << "\n\t\t\tMaaf, uang Anda kurang.\n\t\t\tSilahkan ulangi pembayaran !!!"<< endl;
                garis();
                goto bayar;
            }
            else{
                cout << "\n\t\t\tKembali\t\t\t\t\t     Rp" << jb-harga << endl;
            }
        }
        else {
            cout << "\n\t\tMetode pembayaran tidak tersedia!!" << endl << endl;
        }
        garis();
        cout << "\n\t\t\tP : Cetak Struk\n\t\t\tM : Menu Utama\n\t\t\tO : Logout\n\t\t\tE : Keluar" << endl;
        cout << "\n\t\t\tPilih : ";
        cin >> pil3;
            if (pil3=='P'||pil3=='p') {
            struk();}
            else if (pil3=='M'||pil3=='m') {
                welcome();}
            else if (pil3=='O'||pil3=='o') {
                main();}
            else if (pil3=='E'||pil3=='e') {
                0;}
            else {
            cout << "\nERROR!!\n\n";}
        system("pause");
        0;
    }
void struk() {
    system("cls");
    struct tm *Sys_T;
    time_t Unsika;
    Unsika = time(NULL);
    Sys_T = localtime(&Unsika); /* Untuk mendapatkan waktu lokal komputer */
    if(mp==1){
        kop_struk();
        cout << "\n\t\t\t\t         | DATA PASIEN |" << endl << endl;
        cout << "\n\t\t\t\tNama            :" << na;
        cout << "\n\t\t\t\tJenis Kelamin   :" << jk;
        cout << "\n\t\t\t\tUmur            :" << um;
        cout << "\n\t\t\t\tTinggi Badan    :" << tb;
        cout << "\n\t\t\t\tBerat Badan     :" << bb;
        cout << "\n\t\t\t\tGolongan Darah  :" << gd[5];
        cout << "\n\t\t\t\tDomisili        :" << al;
        cout << "\n\t\t\t\tPemeriksa       :" << pe;
        cout << "\n\t\t\t\tDiagnosa        :" << di << endl;
        garis();
        cout << "\n\t\t\t\t\t\t| STRUK | " << endl;
        garis();
        cout << "\n\t\tRawat Jalan\t\t\t\t   Rp" << rj << endl;
        cout << "\t\tBiaya Konsultasi\t\t\t   Rp" << bk << endl;
        cout << "\t\tBiaya Admin\t\t\t\t   Rp" << adm << endl;
        cout << "\t\tBiaya Obat\t\t\t\t   Rp" << total_pembelian << endl;
        garis();
        cout << "\n\t\tTotal\t\t\t\t\t   Rp" << rj+bk+adm+total_pembelian << endl;
        cout << "\t\tJumlah Bayar\t\t\t\t   Rp" << jb << endl;
        garis();

        ofstream myFile;
        myFile.open("DataPasienRawatJalan.scv", ios::app);
        myFile << na <<","<< jk <<","<< um <<","<< tb <<","<< bb <<","<< gd[5] <<","<< al <<","<< pe <<","<< di <<","<< rj+bk+adm+total_pembelian <<","<< asctime (Sys_T) << endl;
        myFile.close();
	  balik();
        system("pause");
        }
    else if (mp==2){
        kop_struk();
        cout << "\n\t\t\t\t         | DATA PASIEN |" << endl << endl;
        cout << "\n\t\t\t\tNama            :" << na;
        cout << "\n\t\t\t\tJenis Kelamin   :" << jk;
        cout << "\n\t\t\t\tUmur            :" << um;
        cout << "\n\t\t\t\tTinggi Badan    :" << tb;
        cout << "\n\t\t\t\tBerat Badan     :" << bb;
        cout << "\n\t\t\t\tGolongan Darah  :" << gd[5];
        cout << "\n\t\t\t\tDomisili        :" << al;
        cout << "\n\t\t\t\tPemeriksa       :" << pe;
        cout << "\n\t\t\t\tDiagnosa        :" << di << endl;
        garis();
        cout << "\n\t\t\t\t\t\t| STRUK | " << endl;
        garis();
        cout << "\n\t\t\t\t\t Hari/Tanggal/Waktu\n\t\t\t\t"   << asctime (Sys_T);
        garis();
        cout << "\n\t\tRawat Jalan\t\t\t\t\t\t   Rp" << rj << endl;
        cout << "\t\tBiaya Konsultasi\t\t\t\t\t   Rp" << bk << endl;
        cout << "\t\tBiaya Admin\t\t\t\t\t\t   Rp" << adm << endl;
        garis();
        cout << "\n\t\tTotal\t\t\t\t\t\t\t   Rp" << rj+bk+adm+total_pembelian  << endl;
        cout << "\t\tJumlah Bayar\t\t\t\t\t\t   Rp" << jb << endl;
        cout << "\t\tKembali\t\t\t\t\t\t\t   Rp" << kembali(jb,rj,bk,adm,total_pembelian) << endl;
        garis();
        ofstream myFile;
        myFile.open("DataPasienRawatJalan.scv", ios::app);
        myFile << na <<","<< jk <<","<< um <<","<< tb <<","<< bb <<","<< gd[5] <<","<< al <<","<< pe <<","<< di <<","<< rj+bk+adm+total_pembelian <<","<< asctime (Sys_T) << endl;
        myFile.close();
        system("pause");
	  balik();
    }
system("pause");
0;
}
void tebus_obat(){
system("cls");
    namars();
    cout << "\t\t\t +============================================+" << endl;
    cout << "\t\t\t |1. SANMOL TABLET         | 4. REDOXON       |" << endl;
    cout << "\t\t\t |2. SANMOL SYRUP          | 5. ANTASIDA      |" << endl;
    cout << "\t\t\t |3. METFORMIN             | 6. RVASK         |" << endl;
    cout << "\t\t\t +============================================+" << endl;

    awal:
    while(a=='y'||a=='Y'){
        cout << "\n\t\t\t MASUKKAN KODE OBAT KE" << i; cout << ":";
        cin >> kode;
        fflush(stdin);
        if(kode==1){
            obat = 5000 ;
            cout << "\t\t\t |SANMOL TABLET = Rp" << obat; cout <<"|" << endl;
        }
        else if(kode==2){
            obat = 7000;
            cout << "\t\t\t |SANMOL SYRUP = Rp" << obat; cout <<"|" << endl;
        }
        else if(kode==3){
            obat = 12000;
            cout << "\n\t\t\t |METFORMIN = Rp" << obat; cout <<"|" << endl;
        }
        else if(kode==4){
            obat = 3000;
            cout << "\t\t\t |REDOXON = Rp" << obat; cout <<"|" << endl;
        }
        else if(kode==5){
            obat = 6000;
            cout << "\t\t\t |ANTASIDA =Rp" << obat; cout <<"|" << endl;
        }
        else if(kode==6){
            obat = 8000;
            cout << "\t\t\t |RVASK = Rp" << obat; cout <<"|" << endl;
        }
        else{
            cout << "\n\t\t\t |KODE OBAT TIDAK TERDAFTRAR                     |" << endl;
            goto awal;
        }
        total_pembelian=total_pembelian+obat;
        cout << "\n\t\t\t |APAKAH MAU MENAMBAH OBAT YANG DI BELI? (y/n) : ";
        cin >> a;
        i++;
        }
        rincian();
}
void r_inap() {
system("cls");
    namars();
    cout << "\n\t\t\t\t           | DATA PASIEN |" << endl << endl;
    cout << "\t\t\tNama                      : ";
    cout << na2;
    cin >> na2;
    ulanglagi:
    cout << "\t\t\tJenis Kelamin (P/W)       : ";
    cin >> jk2;
        if (jk2=='P'||jk2=='p'||jk2=='W'||jk2=='w'){
        }
        else {
        cout << "\n\t\tMasukkan Kategori Yang Tersedia!!"<< endl << endl ;
        goto ulanglagi;
        }
    cout << "\t\t\tUmur                      : ";
    cin >> um2;
    cout << "\t\t\tTinggi Badan              : ";
    cin >> tb2;
    cout << "\t\t\tBerat Badan               : ";
    cin >> bb2;
    ulangi:
    cout << "\t\t\tGolongan Darah            : ";
    cin >> gd2[5];
        if (gd2[5]=='A'||gd2[5]=='a'||gd2[5]=='B'||gd2[5]=='b'||gd2[5]=='AB'||gd2[5]=='ab'||gd2[5]=='O'||gd2[5]=='o'||gd2[5]=='-'){
        }
        else {
        cout << "\n\t\t\tTidak ada manusia dengan golongan darah ituu!!\n\n";
        goto ulangi;
        }
    fflush(stdin);
    cout << "\t\t\tDomisili                  : ";
    cin >> al2;
    cout << "\t\t\tPemeriksa                 : ";
    cin >> pe2;
    cout << "\t\t\tDiagnosa                  : ";
    cin >> di2;
    cout << "\t\t\tLama Menginap (hari)      : ";
    cin >> li;
    cout << "\n\t\t\tPilihan 1 = Kelas 1/VVIP      Rp 1.000.000";
    cout << "\n\t\t\tPilihan 2 = Kelas 2/VIP       Rp 750.000";
    cout << "\n\t\t\tPilihan 3 = Kelas 3/Standart  Rp 500.000";

    cout << "\n\n\t\t\tPilih Kelas Rawat Inap: ";
    cin >> kls;
    if (kls==1){
            harga=1000000;
            cout << "\nHARGA KELAS: Rp." << harga << endl << endl;
        }
        else if (kls==2) {
            harga=750000;
            cout << "\nHARGA KELAS: Rp." << harga << endl << endl;
        }
        else if (kls==3) {
            harga=500000;
            cout << "\nHARGA KELAS: Rp." << harga << endl << endl;
        }
        else {
            cout << "\nERROR!!\n\n";
        }
    total_biaya=li*harga;
    garis();
    rincian2();
}
void rincian2() {
    system("cls");
    char pil3;
        namars();
        cout << "\n\t\t\t\t        | RINCIAN BIAYA | " << endl << endl;
        cout << "\n\t\tRawat Inap\t\t\t\t\t     " << li; cout << " hari";
        cout << "\t\tBiaya Konsultasi\t\t\t\t     Rp." << bk2 << endl;
        cout << "\t\tBiaya Admin\t\t\t\t\t     Rp." << adm2 << endl;
        garis();
        cout << "\n\t\tTotal\t\t\t\t\t\t     Rp." << bk2+adm2+total_biaya+total_pembelian2 << endl << endl;
        cout << "\t\tPilih Metode Pembayaran : \n\t\t1. Bayar Menggunakan Asuransi\n\t\t2. Bayar Pribadi" << endl;
        cout << "\n\t\tPilihan : ";
        cin >> mp;

        if (mp==1){
            harga=0;
            cout << "\n\t\tJumlah Bayar: Rp." << harga << endl;
            cout << "\t\tKarena seluruh biaya sudah ditanggung oleh pihak asuransi."<< endl;
        }
        else if (mp==2) {
            harga=bk2+adm2+total_biaya+total_pembelian2;
            cout << "\n\t\tBiaya yang harus dibayar  \t\t\t     Rp." << harga << endl << endl;
            bayar:
            cout << "\t\tJumlah Bayar\t\t\t\t\t     Rp.";
            cin >> jb2;
           if(jb2<harga){
                cout << "\n\t\tMaaf, uang Anda kurang.\n\t\tSilahkan ulangi pembayaran !!!" << endl;
                garis();
                goto bayar;
            }
            else{
                cout << "\t\tKembali\t\t\t\t\t\t     Rp." << jb2-(total_biaya+bk2+adm2+total_pembelian2) << endl;
            }
        }
        else {
            cout << "\nMetode pembayaran tidak tersedia!!" << endl << endl;
        }
        garis();
        cout << "\n\t\tP : Cetak Struk\n\t\tM : Menu Utama\n\t\tO : Logout\n\t\tE : Keluar" << endl;
        cout << "\n\t\tPilih : ";
        cin >> pil3;
            if (pil3=='P'||pil3=='p') {
                struk2();
            }
            else if (pil3=='M'||pil3=='m') {
                welcome();
            }
            else if (pil3=='O'||pil3=='o') {
                main();
            }
            else if (pil3=='E'||pil3=='e') {
                0;
            }
            else {
            cout << "\nERROR!!\n\n";
            }
        system("pause");
        0;
    }
void struk2() {
    system("cls");
    FILE *fp;
    struct tm *Sys_T;
    time_t Unsika;
    Unsika = time(NULL);
    Sys_T = localtime(&Unsika); /* Untuk mendapatkan waktu lokal komputer */

    if(mp==1){
        kop_struk();
        cout << "\n\t\t\t\t      | DATA PASIEN |\n\n";

        cout << "\n\t\tNama            :" << na2;
        cout << "\n\t\tJenis Kelamin   :" << jk2;
        cout << "\n\t\tUmur            :" << um2;
        cout << "\n\t\tTinggi Badan    :" << tb2;
        cout << "\n\t\tBerat Badan     :" << bb2;
        cout << "\n\t\tGolongan Darah  :" << gd2[5];
        cout << "\n\t\tDomisili        :" << al2;
        cout << "\n\t\tPemeriksa       :" << pe2;
        cout << "\n\t\tDiagnosa        :" << di2 << endl << endl;
        garis();
        cout << "\n\t\t\t\t\t      | STRUK | " << endl << endl;
        garis();
        cout << "\n\t\t\t\t\t Hari/Tanggal/Waktu\n\t\t\t\t    " << asctime (Sys_T);
        garis();
        cout << "\n\t\tRawat Inap\t\t\t\t\t     " << li; cout << " hari";
        cout << "\t\tBiaya Konsultasi\t\t\t\t   Rp." << bk2 << endl;
        cout << "\t\tBiaya Admin\t\t\t\t\t   Rp." << adm2 << endl;
        cout << "\t\tBiaya Obat\t\t\t\t\t   Rp." << total_pembelian2 << endl;
        garis();
        cout << "\n\t\tTotal\t\t\t\t\t\t    Rp." << bk2+adm2+total_biaya+total_pembelian2 << endl;
        cout << "\t\tJumlah Bayar\t\t\t\t\t    Rp." << jb2 << endl;
        garis();
        //Program memasukkan data dari  terminal ke dalam file Excel
        ofstream myFile;
        myFile.open("DataPasienRawatInap.scv", ios::app);
        myFile << na2 <<","<< jk2 <<","<< um2 <<","<< tb2 <<","<< bb2 <<","<< gd2[5] <<","<< al2 <<","<< pe2 <<","<< di2 <<","<< total_biaya+total_pembelian2 <<","<< asctime (Sys_T) << endl;
        myFile.close();
        system("pause");
        balik();
        }
    else if (mp==2){
        kop_struk();
        cout << "\n\t\t\t\t      | DATA PASIEN |\n\n";

        cout << "\n\t\tNama            :" << na2;
        cout << "\n\t\tJenis Kelamin   :" << jk2;
        cout << "\n\t\tUmur            :" << um2;
        cout << "\n\t\tTinggi Badan    :" << tb2;
        cout << "\n\t\tBerat Badan     :" << bb2;
        cout << "\n\t\tGolongan Darah  :" << gd2[5];
        cout << "\n\t\tDomisili        :" << al2;
        cout << "\n\t\tPemeriksa       :" << pe2;
        cout << "\n\t\tDiagnosa        :" << di2 << endl << endl;
        garis();
        cout << "\n\t\t\t\t\t      | STRUK | " << endl << endl;
        garis();
        cout << "\n\t\t\t\t\t Hari/Tanggal/Waktu\n\t\t\t\t   " << asctime (Sys_T);
        garis();
        cout << "\n\t\tRawat Inap\t\t\t\t\t     " << li; cout << " hari";
        cout << "\t\tBiaya Konsultasi\t\t\t\t\t   Rp." << bk2 << endl;
        cout << "\t\tBiaya Admin\t\t\t\t\t\t   Rp." << adm2 << endl;
        garis();
        cout << "\n\t\tTotal\t\t\t\t\t\t\t   Rp." << bk2+adm2+total_biaya+total_pembelian2 << endl;
        cout << "\t\tJumlah Bayar\t\t\t\t\t\t   Rp." << jb2 << endl;
        cout << "\t\tKembali\t\t\t\t\t\t\t   Rp." << jb2-(total_biaya+bk2+adm2+total_pembelian2) << endl;
        garis();
        //Program memasukkan data dari  terminal ke dalam file Excel
        ofstream myFile;
        myFile.open("DataPasienRawatInap.scv", ios::app);
        myFile << na2 <<","<< jk2 <<","<< um2 <<","<< tb2 <<","<< bb2 <<","<< gd2[5] <<","<< al2 <<","<< pe2 <<","<< di2 <<","<< total_biaya+total_pembelian2 <<","<< asctime (Sys_T) << endl;
        myFile.close();
        system("pause");
        balik();
    }
system("pause");
0;
}

int kembali(int jb,int rj,int bk,int adm,int total_pembelian){
int result;
result=jb-(rj+bk+adm+total_pembelian);
return result;
}
