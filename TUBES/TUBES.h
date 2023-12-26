#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>
#define first(L) -> L.first
#define last(L) -> L.last
#define prev(P) -> P->prev
#define next(P) -> P->next
#define info(P) -> P->info
#define relation(P) P->relation
#define nextPasien(P) P->nextPasien

using namespace std;

typedef Dokter infotypeDokter;
typedef Pasien infotypePasien;
typedef struct elmtDokter *adrDokter;
typedef struct elmtPasien *adrPasien;
typedef struct elmtKonektorPasien *adrKPasien;


struct Pasien {
  string idPasien;
  string nama;
  string alamat;
  int usia;
};

struct Dokter {
  string idDokter;
  string nama;
  string spesialisasi;
  string jadwal;
};

struct ListKPasien {
    adrKPasien first;
};

struct elmtDokter {
    Dokter info;
    adrDokter next;
    adrDokter prev;
    adrKPasien relation;
};

struct elmtPasien {
    Pasien info;
    adrPasien next;
};

struct elmtKonektorPasien {
    adrKPasien nextPasien;
    adrKPasien next;
};

struct ListDokter {
    adrDokter last;
    adrDokter first;
};

struct ListPasien {
    adrPasien first;
};

void createListDokter(ListDokter &LDokter);
void createListPasien(ListPasien &LPasien);
adrKPasien createKPasien(adrPasien PPasien);
adrDokter createElmtDokter(infotypeDokter PDokter);
adrPasien createElmtPasien(infotypePasien PPasien);
void addDokter(ListDokter &LDokter, adrDokter PDokter);
void addPasien(ListPasien &LPasien, adrPasien PPasien);
void showAllDataDokter(ListDokter LDokter);
void deleteDokter(ListDokter &LDokter);
adrDokter findDokter (ListDokter LDokter, string idDokter);
adrPasien findPasien (ListPasien LPasien, string idPasien);
void addPasien(ListPasien &LPasien, adrPasien PPasien);
void dokterKePasien(adrDokter &PDokter, adrPasien PPasien);
void showAllData(ListDokter LDokter);
bool findPasienByDokter(ListDokter LDokter, ListPasien LPasien, adrDokter PDokter);
void deletePasienByDokter(ListPasien &LPasien);
int countPasienByDokter(ListDokter LDokter, ListPasien LPasien, adrDokter PDokter);


#endif // TUBES_H_INCLUDED
