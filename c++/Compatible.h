#ifndef COMPATIBLE_H
#define COMPATIBLE_H

#include "Komponen.cpp" // Pastikan untuk menyertakan definisi kelas Komponen

class Compatible {
public:
    virtual bool checkCompatibility(Komponen* komponen) = 0; // Metode untuk memeriksa kompatibilitas
    virtual std::string* getCompatibleWith() = 0;            // Metode untuk mendapatkan daftar kompatibilitas
};

#endif // COMPATIBLE_H