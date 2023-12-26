#include "TUBES.h"

void createListDokter(ListDokter &LDokter){
    first(LDokter) = NULL;
    last(Ldokter) = NULL;
}

void createListPasien(ListPasien &LPasien){
    first(LPasien) = NULL;
}

adrDokter createElmtDokter(infotypeDokter PDokter){
    adrDokter Dokter = new elmtDokter;
    info(Dokter) = PDokter;
    next(Dokter) = NULL;
    prev(Dokter) = NULL;

    return Dokter;
}

adrPasien createElmtPasien(infotypePasien PPasien){
    adrPasien Pasien = new elmtPasien;
    info(Pasien) = PPasien;
    next(Pasien) = NULL;

    return Pasien;
}
adrKPasien createKPasien(adrPasien PPasien){
    adrKPasien Relation = new relation;
    next(Relation) = NULL;
    nextPasien(Relation) = PPasien;

    return(relation);
}
void addDokter(ListDokter &LDokter, adrDokter PDokter){
    if(first(ListDokter) == NULL){
        first(ListDokter) = PDokter;
    } else{
        adrDokter Q = first(ListDokter);
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = PDokter;
        prev(PDokter) = Q;
    }
    cout << "Berhasil Menambahkan Data Dokter!" << endl;
}
void addPasien(ListPasien &LPasien, adrPasien PPasien){
    if(first(ListPasien) == NULL){
        first(ListPasien) = PPasien;
    } else{
        adrPasien Q = first(ListPasien);
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = PPasien;
    }
    cout << "Berhasil Menambahkan Data Pasien!" << endl;
}
void showAllDataDokter(ListDokter LDokter){
    adrDokter Q = first(ListDokter);
    if(first(ListDokter) == NULL){
        cout << "Data Dokter Kosong!" << endl;
    } else{
        while(Q != NULL){
            cout << info(Q).idDokter << endl;
            cout << info(Q).nama << endl;
            cout << info(Q).spesialisasi << endl;
            cout << info(Q).jadwal << endl;
        }
        Q = next(Q);
    }
}
void deleteDokter(ListDokter &LDokter){
    adrDokter Q = first(ListDokter);
    if((ListDokter) == NULL){
        cout << "Data Dokter Kosong!" << endl;
    } else{
        next(first(ListDokter)) = next(Q);
        prev(first(ListDokter)) = NULL;
        next(Q) = NULL;
    }
}
adrDokter findDokter (ListDokter LDokter, string idDokter){
    adrDokter Q = first(ListDokter);
    while(Q != NULL){
            if(info(Q).id == idDokter){
                return Q
            }
            Q = next(Q);
        }
    return false;
}
adrPasien findPasien (ListPasien LPasien, string idPasien){
    adrPasien Q = first(ListPasien);
    while(Q != NULL){
            if(info(Q).id == idPasien){
                return Q
            }
            Q = next(Q);
        }
    return false;
}
void addPasien(ListPasien &LPasien, adrPasien PPasien);
void dokterKePasien(adrDokter &PDokter, adrPasien PPasien);
void showAllData(ListDokter LDokter);
bool findPasienByDokter(ListDokter LDokter, ListPasien LPasien, adrDokter PDokter);
void deletePasienByDokter(ListPasien &LPasien);
int countPasienByDokter(ListDokter LDokter, ListPasien LPasien, adrDokter PDokter);
