#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class KhachHang {
private:
    string maKH;
    string tenKH;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    static int countKH;
public:
    KhachHang() {
        countKH++;
        maKH = "KH" + string(3 - to_string(countKH).length(), '0') + to_string(countKH);
    }

    friend istream& operator>>(istream& is, KhachHang& kh);
    friend ostream& operator<<(ostream& os, const KhachHang& kh);
    friend class HoaDon;
};

int KhachHang::countKH = 0;

istream& operator>>(istream& is, KhachHang& kh) {
    is.ignore();
    getline(is, kh.tenKH);
    getline(is, kh.gioiTinh);
    getline(is, kh.ngaySinh);
    getline(is, kh.diaChi);
    return is;
}

ostream& operator<<(ostream& os, const KhachHang& kh) {
    os << kh.maKH << " " << kh.tenKH << " " << kh.diaChi;
    return os;
}

class MatHang {
private:
    string maMH;
    string tenMH;
    string donViTinh;
    int giaMua;
    int giaBan;
    static int countMH;
public:
    MatHang() {
        countMH++;
        maMH = "MH" + string(3 - to_string(countMH).length(), '0') + to_string(countMH);
    }

    friend istream& operator>>(istream& is, MatHang& mh);
    friend ostream& operator<<(ostream& os, const MatHang& mh);
    friend class HoaDon;
};

int MatHang::countMH = 0;

istream& operator>>(istream& is, MatHang& mh) {
    is.ignore();
    getline(is, mh.tenMH);
    getline(is, mh.donViTinh);
    is >> mh.giaMua >> mh.giaBan;
    return is;
}

ostream& operator<<(ostream& os, const MatHang& mh) {
    os << mh.maMH << " " << mh.tenMH << " " << mh.donViTinh << " " << mh.giaMua << " " << mh.giaBan;
    return os;
}

class HoaDon {
private:
    string maHD;
    KhachHang khachHang;
    MatHang matHang;
    int soLuong;
    static int countHD;
public:
    HoaDon() {
        countHD++;
        maHD = "HD" + string(3 - to_string(countHD).length(), '0') + to_string(countHD);
    }

    friend istream& operator>>(istream& is, HoaDon& hd);
    friend ostream& operator<<(ostream& os, const HoaDon& hd);
};

int HoaDon::countHD = 0;

istream& operator>>(istream& is, HoaDon& hd) {
    string maKH, maMH;
    is >> maKH >> maMH >> hd.soLuong;
    // Tìm khách hàng và mặt hàng dựa trên mã
    // Giả sử ta có sẵn danh sách khách hàng và mặt hàng (thực tế cần các lớp quản lý danh sách)
    for (auto& kh : dskh) {
        if (kh.maKH == maKH) {
            hd.khachHang = kh;
            break;
        }
    }
    for (auto& mh : dsmh) {
        if (mh.maMH == maMH) {
            hd.matHang = mh;
            break;
        }
    }
    return is;
}

ostream& operator<<(ostream& os, const HoaDon& hd) {
    int thanhTien = hd.soLuong * hd.matHang.giaBan;
    os << hd.maHD << " " << hd.khachHang.tenKH << " " << hd.khachHang.diaChi << " "
       << hd.matHang.tenMH << " " << hd.matHang.donViTinh << " " << hd.matHang.giaMua << " "
       << hd.matHang.giaBan << " " << hd.soLuong << " " << thanhTien;
    return os;
}

int main() {
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K;

    cin >> N;
    for (int i = 0; i < N; i++) cin >> dskh[i];

    cin >> M;
    for (int i = 0; i < M; i++) cin >> dsmh[i];

    cin >> K;
    for (int i = 0; i < K; i++) cin >> dshd[i];

    for (int i = 0; i < K; i++) cout << dshd[i] << endl;

    return 0;
}
