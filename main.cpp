
#include <iostream>
#include <unistd.h> // getuid()
#include <string>
#include <cstdlib> // system()
using namespace std;

string kullanici;
int main()
{
    cout << "Kullanıcı adınızı girin: ";
    getline(cin, kullanici);

    {
        cout << "\n"
                "\n"
                "                      ███████        █████        ██   ██\n"
                "                      ██             ██   ██      ██  ██ \n"
                "                      █████           ██████      █████  \n"
                "                      ██                  ██      ██  ██ \n"
                "                      ███████        █████        ██   ██\n"
                "+--------------------------------------------------------------------------------+\n"
                "|                                                                                |\n"
                "|                K A Z A N M A K   H E R K E S İ N   H A K K I                   |\n"
                "|                                                                                |\n"
                "|                                [ Kazanmaya Başla ]                             |\n"
                "|                                                                                |\n"
                "|   Biz Oyuncuların Yanında Olan Bir Şirket. Amacımız: size oyun, mod, hile,     |\n"
                "|   oyun içi paralar ve benzeri hizmetleri sunmak ve yardımcı olmak.             |\n"
                "|                                                                                |\n"
                "+--------------------------------------------------------------------------------+\n"
                "|Destek / Yardım: E-Mail: destek@e9k.com.tr | Site: E9K.com.tr | Discord: Anyac4 |\n"
                "|                                      © 2025 E9K                                |\n"
                "+--------------------------------------------------------------------------------+\n";
        bool rootMod = false;
        string renkKirmizi = "\033[91m";
        string renkSifirla = "\033[0m";
        string renkMavi = "\033[94m";
        cout << "Kullanılabilir komutlar: help, help-cmd, exit, info\n";
        string komut;
        while (true)
        {
            cout << (rootMod ? renkKirmizi + kullanici + "@root> " + renkSifirla : renkMavi + kullanici + "@e9k.com.tr> ") << renkSifirla;
            getline(cin, komut);

            if (komut == "exit")
            { // çıkış komutu
                cout << "Çıkış yapılıyor...\n";
                system("exit");
                break;
            }
            else if (komut == "help")
            {
                cout << "Kullanılabilir komutlar: help, help-cmd, exit, info\n";
            }
            else if (komut == "info")
            {
                cout << "E9KqTool-v1.0 by [Xinivar] | Tüm Haklar E9K.com.tr'ye saklıdır\n";
            }
            else if (komut == "help-cmd")
            {
                cout << "--- Sistem Komutlari ---\n";
                cout << "1- info         -> Program hakkında bilgi verir\n";
                cout << "2- help         -> Ana Komutlari Gosterir\n";
                cout << "3- help-cmd     -> Tum Komutlari Gosterir\n";
                cout << "4- exit         -> Programdan çıkış yapar\n";
                cout << "5- root         -> Root moduna geçiş sağlar\n";
                cout << "6- reboot       -> Sistemi yeniden başlatır\n";
                cout << "7- site         -> Site Linkini Gosterir\n";
                cout << "8- discord      -> Discord Kanalini Gosterir\n";
                cout << "9- whoami       -> Kullaniciyi Gosterir\n";
                cout << "10- date        -> Zaman Ve Tarihi Gosterir\n";
                cout << "11- clear       -> Terminali Temizler\n";
                cout << "12- shutdown    -> Sistemi Kapatır\n";
                cout << "13- spanel      -> Sorgu panelini açar\n";
                cout << "--- Eğlence ve yardımcı komutlar ---\n";
                cout << "14- zar         -> 1-6 arasında zar atar\n";
                cout << "15- 0-1         -> Yazı-tura atar\n";
                cout << "16- hesapmk    -> Basit matematik işlemleri yapar\n";
                cout << "17- motiv       -> Motivasyon mesajı gösterir\n";
                cout << "18- saka        -> Komik bir şaka yapar\n";
                cout << "19- sanat       -> Sanat eseri gösterir\n";
                cout << "20- stahmin     -> 1-10 arasında sayı tahmini yapar\n";
                cout << "21- zamanlayici -> Geri sayım sayacı başlatır\n";
            }
            else if (komut == "root")
            {
                cout << "Root olmak için şifrenizi girin:\n";
                int ret = system("sudo -v"); // Burada OS root şifresini sorar
                if (ret == 0)
                {
                    cout << "Başarılı! Artık root modundasınız.\n";
                    rootMod = true;
                }
                else
                {
                    cout << "Root olma işlemi başarısız oldu veya iptal edildi.\n";
                }
            }
            else if (komut == "reboot")
            {
                cout << "Sistem yeniden başlatılıyor...\n";
                system("sudo reboot"); // root yetkisi gerekiyor
            }
            else if (komut == "discord")
            {
                cout << "Kurucunun Discord Adresi: https://discord.com/channels/@anyac4" << "\n";
            }
            else if (komut == "site")
            {
                cout << "Web sitesi: https://E9K.com.tr" << "\n";
            }
            else if (komut == "date")
            {
                system("date"); // Sistem tarih ve saatini gösterir
            }
            else if (komut == "whoami")
            {
                system("whoami"); // Şu anki kullanıcıyı gösterir
            }
            else if (komut == "clear")
            {
                system("clear"); // Ekranı temizler
            }
            else if (komut == "shutdown")
            {
                cout << "Sistem kapatılıyor...\n";
                system("sudo shutdown now"); // Linux/Unix sistemlerinde çalışır
            }
            else if (komut == "Pismaniye")
            { // gizli komut
                cout << "Tebrikler! Gizli komutu buldunuz!🎉 Linke Gidip VIP++ Odulunuzu Alin\n";
                cout << "https://e9k.com.tr/minecraft-vip-vip/\n";
            }
            else if (komut == "zar")
            {
                int zar = rand() % 6 + 1;
                cout << "Zar sonucu: " << zar << "\n";
            }
            else if (komut == "0-1")
            {
                cout << "Yazı-tura sonucu: " << (rand() % 2 ? "Yazı" : "Tura") << "\n";
            }
            else if (komut.find("stahmin") == 0)
            {
                int num = rand() % 10 + 1;
                int tahmin;
                cout << "1-10 arasında bir sayı tahmin edin: ";
                cin >> tahmin;
                cin.ignore();
                if (tahmin == num)
                    cout << "Tebrikler! Bildiniz.\n";
                else
                    cout << "Yanlış! Doğru sayı: " << num << "\n";
            }
            else if (komut.find("zamanlayici") == 0)
            {
                int saniye;
                cout << "Kaç saniye geri sayalım? ";
                cin >> saniye;
                cin.ignore();
                while (saniye > 0)
                {
                    cout << saniye-- << "...\n";
                    sleep(1);
                }
                cout << "Süre doldu!\n";
            }
            else if (komut.find("hesapmk") == 0)
            {
                double a, b;
                char op;
                cout << "Toplama: +\n";
                cout << "Çıkarma: -\n";
                cout << "Çarpma: *\n";
                cout << "Bölme: /\n";
                cout << "İşlem girin: ";
                cin >> a >> op >> b;
                cin.ignore();
                switch (op)
                {
                case '+':
                    cout << "Sonuç: " << a + b << "\n";
                    break;
                case '-':
                    cout << "Sonuç: " << a - b << "\n";
                    break;
                case '*':
                    cout << "Sonuç: " << a * b << "\n";
                    break;
                case '/':
                    if (b != 0)
                        cout << "Sonuç: " << a / b << "\n";
                    else
                        cout << "Sıfıra bölme hatası!\n";
                    break;
                default:
                    cout << "Geçersiz işlem!\n";
                }
            }
            else if (komut == "motiv")
            {
                string mesajlar[] = {
                    "Harika gidiyorsun!",
                    "Bugün de çok iyisin!",
                    "Devam et, başaracaksın!",
                    "Azimli ol, kazanacaksın!"};
                cout << mesajlar[rand() % 4] << "\n";
            }
            else if (komut == "saka")
            {
                string espriler[] = {
                    "Bilgisayar bana şaka yaptı, açılmadı.",
                    "Neden programcılar doğum günü kutlamaz? Çünkü döngüden çıkamazlar!",
                    "404 espri bulunamadı."};
                cout << espriler[rand() % 3] << "\n";
            }
            else if (komut == "spanel")
            {
                cout << "https://arshera.cloud/\n";
            }
            else if (komut == "stahmin")
            {
                int num = rand() % 10 + 1;
                int tahmin;
                cout << "1-10 arasında bir sayı tahmin edin: ";
                cin >> tahmin;
                cin.ignore();
                if (tahmin == num)
                    cout << "Tebrikler! Bildiniz.\n";
                else
                    cout << "Yanlış! Doğru sayı: " << num << "\n";
            }
            else if (komut == "sanat")
            {
                cout << R"( /\_/\ )" << "\n";
                cout << R"(( o.o ))" << "\n";
                cout << R"( > ^ < )" << "\n";
                cout << R"( (   ) )" << "\n";
            }
            else
            {
                cout << "Bilinmeyen komut: " << komut << "\n";
            }
        }
        return 0;
    }
}