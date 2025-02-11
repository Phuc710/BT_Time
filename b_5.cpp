#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>
using namespace std;

int main()
{
    char chose;
    bool check = true;
    int dem = 0;
    int guess, tang = 1;

    random_device rd;                         // Dùng thiết bị ngẫu nhiên
    mt19937 gen(rd());                        // Khởi tạo bộ sinh số ngẫu nhiên
    uniform_int_distribution<int> dis(1, 10); // Giới hạn từ 1 đến 10

    int random_number = dis(gen); // Sinh số ngẫu nhiên
    cout << "Chuong trinh choi game doan so!\n";

    while (true)
    {
        cout << "Nhap so ban doan tu 1-10 lan thu (" << tang << "): ";

        if (!(cin >> guess)) // Kiểm tra nhập số hợp lệ
        {
            cout << "Vui long nhap so nguyen: ";
            cin.clear();
            cin.ignore(100000, '\n');
        }

        tang++;
        if (guess == random_number)
        {
            cout << "Ban doan dung roi!\n";
        }
        else
        {
            cout << "So ban doan" << (guess < random_number ? "<" : ">") << "so can tim!\n";
            cout << "So may: " << random_number << endl;
            dem++;
        }

        cout << "Ban da thua: " << dem << " lan" << endl;
        if (dem == 5)
        {
            cout << "GAME OVER!\n";
            return 0;
        }
        while (true)
        {
            cout << "Do you want to continue? (y/n): ";
            cin >> chose;
            chose = tolower(chose);
            if (chose == 'n')
            {
                cout << "Ket thuc chuong trinh!";
                return 0;
            }

            if (chose == 'y')
            {

                break;
            }

            cout << "Please choose 'y' or 'n'.\n";
            cin.clear();
            cin.ignore(100000, '\n');
        }
    }

    return 0;
}
