#ifndef OVERCLOCKABLE_H
#define OVERCLOCKABLE_H

class Overclockable {
public:
    virtual void overclock(double increase) = 0; // Metode untuk meningkatkan kecepatan
    virtual void resetToDefault() = 0;           // Metode untuk mengembalikan ke pengaturan default
    virtual bool isOverclocked() = 0;            // Metode untuk memeriksa apakah komponen di-overclock
};

#endif 