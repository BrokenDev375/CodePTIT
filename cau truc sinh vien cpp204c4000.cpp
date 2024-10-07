#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string name, classcode, dofb, date;
    double gpa;
};

void nhapThongTinSV(struct SinhVien &a) {
    getline(cin, a.name);
    cin >> a.classcode ;
    cin >> a.dofb;

    stringstream ss(a.dofb);
    vector<string> dateParts;
    string word;
    while (getline(ss, word, '/')) {
        dateParts.push_back(word);
    }

    a.date = "";
    for (int i = 0; i < dateParts.size(); i++) {
        if (dateParts[i].size() < 2) {
            dateParts[i] = "0" + dateParts[i];
        }
        a.date += dateParts[i];
        if (i != dateParts.size() - 1) {
            a.date += "/";
        }
    }

    cin >> a.gpa;
    cin.ignore(); // To handle the newline after the GPA input
}

void inThongTinSV(struct SinhVien a) {
    cout << "N20DCCN001 " << a.name << " " << a.classcode << " " << a.date << " " << fixed << setprecision(2) << a.gpa;
}

int main() {
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
