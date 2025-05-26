#include <iostream>
#include <string>
using namespace std;

int main() {
    int volba;

    int ZivotyMage = 80, UtokMage = 15, MaxManaMage = 200, AktualniManaMage = 200, ZlatoMage = 50, LevelMage = 1, ZkusenostiMage = 0;
    string SchopnostiMage = "Fireball, Teleport, Shield";

    int ZivotyTank = 200, UtokTank = 10, MaxManaTank = 50, AktualniManaTank = 50, ZlatoTank = 30, LevelTank = 1, ZkusenostiTank = 0;
    string SchopnostiTank = "Taunt, Shield Wall, Stun";

    int ZivotySamurai = 120, UtokSamurai = 20, MaxManaSamurai = 100, AktualniManaSamurai = 100, ZlatoSamurai = 40, LevelSamurai = 1, ZkusenostiSamurai = 0;
    string SchopnostiSamurai = "Slash, Focus, Quick Step";

    int ZivotyBerserk = 150, UtokBerserk = 25, MaxManaBerserk = 80, AktualniManaBerserk = 80, ZlatoBerserk = 35, LevelBerserk = 1, ZkusenostiBerserk = 0;
    string SchopnostiBerserk = "Rage, Smash, Frenzy";


    cout << "Vitej!" << endl;
    cout << "Vyber si classu." << endl;
    cout << endl;

    cout << "Informace o classach:" << endl;

    cout << "1. Mage" << endl;
    cout << "Max zivoty: " << ZivotyMage << endl;
    cout << "Utok: " << UtokMage << endl;
    cout << "Max mana/energie: " << MaxManaMage << endl;
    cout << "Aktualni mana/energie: " << AktualniManaMage << endl;
    cout << "Penize/zlato: " << ZlatoMage << endl;
    cout << "Level: " << LevelMage << endl;
    cout << "Zkusenosti: " << ZkusenostiMage << endl;
    cout << "Schopnosti: " << SchopnostiMage << endl;

    cout << endl << "2. Tank" << endl;
    cout << "Max zivoty: " << ZivotyTank << endl;
    cout << "Utok: " << UtokTank << endl;
    cout << "Max mana/energie: " << MaxManaTank << endl;
    cout << "Aktualni mana/energie: " << AktualniManaTank << endl;
    cout << "Penize/zlato: " << ZlatoTank << endl;
    cout << "Level: " << LevelTank << endl;
    cout << "Zkusenosti: " << ZkusenostiTank << endl;
    cout << "Schopnosti: " << SchopnostiTank << endl;

    cout << endl << "3. Samurai" << endl;
    cout << "Max zivoty: " << ZivotySamurai << endl;
    cout << "Utok: " << UtokSamurai << endl;
    cout << "Max mana/energie: " << MaxManaSamurai << endl;
    cout << "Aktualni mana/energie: " << AktualniManaSamurai << endl;
    cout << "Penize/zlato: " << ZlatoSamurai << endl;
    cout << "Level: " << LevelSamurai << endl;
    cout << "Zkusenosti: " << ZkusenostiSamurai << endl;
    cout << "Schopnosti: " << SchopnostiSamurai << endl;

    cout << endl << "4. Berserk" << endl;
    cout << "Max zivoty: " << ZivotyBerserk << endl;
    cout << "Utok: " << UtokBerserk << endl;
    cout << "Max mana/energie: " << MaxManaBerserk << endl;
    cout << "Aktualni mana/energie: " << AktualniManaBerserk << endl;
    cout << "Penize/zlato: " << ZlatoBerserk << endl;
    cout << "Level: " << LevelBerserk << endl;
    cout << "Zkusenosti: " << ZkusenostiBerserk << endl;
    cout << "Schopnosti: " << SchopnostiBerserk << endl;

    cout << endl << "Kterou classu by jsi chtel?" << endl;
    cout << "1. Mage" << endl;
    cout << "2. Tank" << endl;
    cout << "3. Samurai" << endl;
    cout << "4. Berserk" << endl;
    cout << "Zadej cislo (1-4) pro vyber nebo 0 pro ukonceni: ";
    cin >> volba;

    if (volba == 0) {
        cout << "Ukoncujici program." << endl;
        return 0;
    }

    switch (volba) {
        case 1:
            cout << endl << "Vybral sis classu: Mage" << endl;
            break;
        case 2:
            cout << endl << "Vybral sis classu: Tank" << endl;
            break;
        case 3:
            cout << endl << "Vybral sis classu: Samurai" << endl;
            break;
        case 4:
            cout << endl << "Vybral sis classu: Berserk" << endl;
            break;
        default:
            cout << "Neplatna volba. Zkus to znovu." << endl;
            return 0;
    }

    return 0;
}

