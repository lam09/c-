#ifndef NHANVAT_H
#define NHANVAT_H
#include <iostream>
#include <string>
#include "vukhi.h"

class Nhanvat
{
public:
    Nhanvat();
    Nhanvat(std::string vuKhi, int dmgVukhi);
    ~Nhanvat();
    void nhanSatThuong(int soDmg);
    void tanCong(Nhanvat &mucTieu);
    void uongThuocHp(int dungLuongThuoc);
    void doiVukhi(std::string vuKhiMoi, int dmgVuKhiMoi);
    bool conSong() const;

private:
    int m_hp;
    int m_mp;
    VuKhi m_vukhi;
};

#endif // NHANVAT_H
